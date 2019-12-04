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
    Js.log("Encountered unhandled `opCode`");
    program;
  };
};