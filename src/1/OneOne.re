open Utils

let fuel_from_mass = (mass: int): int => mass / 3 - 2;

let fuelArray_from_massArray =
  Js.Array.reduce((acc, x) => fuel_from_mass(x) |> add(acc), 0);