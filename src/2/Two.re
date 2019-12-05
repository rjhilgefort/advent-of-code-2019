open Utils;

type program = Js.Array.t(int);

let rec intcode = (~program: program, ~position=0, ()): program => {
  switch (program[position]) {
  | 1 =>
    let arg1Position = program[position + 1];
    let arg2Position = program[position + 2];
    let resPosition = program[position + 3];
    program[resPosition] = program[arg1Position] + program[arg2Position];
    intcode(~program, ~position=position + 4, ());
  | 2 =>
    let arg1Position = program[position + 1];
    let arg2Position = program[position + 2];
    let resPosition = program[position + 3];
    program[resPosition] = program[arg1Position] * program[arg2Position];
    intcode(~program, ~position=position + 4, ());
  | 99 => program
  | _ =>
    // Js.log("Encountered unhandled `opCode`");
    program
  };
};

let intcodeOverride = (~program: program, ~noun: int, ~verb: int, ()): program => {
  program |> update(1, noun) |> update(2, verb) |> intcode(~program=_, ());
};

/**
 * @note: This is very imperative- would love how to learn how to do this more functionally.
 */
let computeNounVerb =
    (~program: program, ~desiredOutput: int, ~maxVal=99, ()): (int, int) => {
  let minVal = 0;

  let found = ref(false);
  let breakNoun = ref(false);
  let breakVerb = ref(false);
  let noun = ref(minVal);
  let verb = ref(minVal);

  while (! found^ && ! breakNoun^) {
    verb := minVal;
    breakVerb := false;
    while (! found^ && ! breakVerb^) {
      let output =
        intcodeOverride(
          ~program=Array.copy(program),
          ~noun=noun^,
          ~verb=verb^,
          (),
        )
        |> head;

      if (output === desiredOutput) {
        found := true;
      };

      if (verb^ < maxVal && ! found^) {
        verb := verb^ + 1;
      } else {
        breakVerb := true;
      };
    };

    if (noun^ < maxVal && ! found^) {
      noun := noun^ + 1;
    } else {
      breakNoun := true;
    };
  };

  found^ ? (noun^, verb^) : ((-1), (-1));
};