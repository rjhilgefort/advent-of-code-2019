open Jest;

let dirname: option(string) = [%bs.node __dirname];

let input =
  Node_fs.readFileSync({j|$dirname/../../src/2/TwoOneInput.txt|j}, `utf8)
  |> Js.String.split(",")
  |> Js.Array.map(int_of_string);

describe("TwoOne.intcode", () => {
  open Expect;

  test("Example [|1, 9, 10, 3, 2, 3, 11, 0, 99, 30, 40, 50|]", () =>
    TwoOne.intcode(~program=[|1, 9, 10, 3, 2, 3, 11, 0, 99, 30, 40, 50|], ())
    |> expect
    |> toEqual([|3500, 9, 10, 70, 2, 3, 11, 0, 99, 30, 40, 50|])
  );

  test("Example [|1, 0, 0, 0, 99|]", () =>
    TwoOne.intcode(~program=[|1, 0, 0, 0, 99|], ())
    |> expect
    |> toEqual([|2, 0, 0, 0, 99|])
  );

  test("Example [|2, 3, 0, 3, 99|]", () =>
    TwoOne.intcode(~program=[|2, 3, 0, 3, 99|], ())
    |> expect
    |> toEqual([|2, 3, 0, 6, 99|])
  );

  test("Example [|2, 4, 4, 5, 99, 0|]", () =>
    TwoOne.intcode(~program=[|2, 4, 4, 5, 99, 0|], ())
    |> expect
    |> toEqual([|2, 4, 4, 5, 99, 9801|])
  );

  test("Example [|1, 1, 1, 4, 99, 5, 6, 0, 99|]", () =>
    TwoOne.intcode(~program=[|1, 1, 1, 4, 99, 5, 6, 0, 99|], ())
    |> expect
    |> toEqual([|30, 1, 1, 4, 2, 5, 6, 0, 99|])
  );

  test("Part 1", () =>
    input
    |> Utils.update(1, 12)
    |> Utils.update(2, 2)
    |> TwoOne.intcode(~program=_, ())
    |> Utils.head
    |> expect
    |> toEqual(3716250)
  );
});

describe("TwoOne.intcodeOverride", () =>
  Expect.(
    test("Part 1 gut check", () =>
      TwoOne.intcodeOverride(
        ~program=Array.copy(input),
        ~noun=12,
        ~verb=2,
        (),
      )
      |> Utils.head
      |> expect
      |> toEqual(3716250)
    )
  )
);

describe("TwoOne.computeNounVerb", () => {
  open Expect;

  test("Simple", () => {
    let program = [|1, 9, 10, 3, 2, 3, 11, 0, 99, 30, 40, 50|];
    let maxVal = Js.Array.length(program) - 1;
    TwoOne.computeNounVerb(~program, ~desiredOutput=3500, ~maxVal, ())
    |> expect
    |> toEqual((9, 10));
  });

  test("Part 1 gut check", () =>
    TwoOne.computeNounVerb(
      ~program=Array.copy(input),
      ~desiredOutput=3716250,
      (),
    )
    |> expect
    |> toEqual((12, 2))
  );

  test("Part 2 puzzle", () => 
    TwoOne.computeNounVerb(
      ~program=Array.copy(input),
      ~desiredOutput=19690720,
      (),
    )
    |> expect
    |> toEqual((64, 72))
  );
  // 100 * 64 + 72 = 6472
});