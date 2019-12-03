open Jest;

describe("One.fuel_from_moduleMass", () => {
  Expect.(
    test("12", () =>
      One.fuel_from_moduleMass(12) |> expect |> toBe(2)
    )
  );
  Expect.(
    test("14", () =>
      One.fuel_from_moduleMass(14) |> expect |> toBe(2)
    )
  );
  Expect.(
    test("1969", () =>
      One.fuel_from_moduleMass(1969) |> expect |> toBe(654)
    )
  );
  Expect.(
    test("100756", () =>
      One.fuel_from_moduleMass(100756) |> expect |> toBe(33583)
    )
  );
});