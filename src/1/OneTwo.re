let add = (x, y) => x + y;

let rec fuel_from_mass_compounded = (~mass, ~initFuel=0, ()): int => {
  let fuel = mass / 3 - 2;
  fuel < 0 ?
    initFuel :
    fuel_from_mass_compounded(~mass=fuel, ~initFuel=initFuel + fuel, ());
};

let fuelArray_from_massArray: Js.Array.t(int) => int =
  Js.Array.reduce(
    (acc, mass) => fuel_from_mass_compounded(~mass, ()) |> add(acc),
    0,
  );