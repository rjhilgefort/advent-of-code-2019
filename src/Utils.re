let add = (x, y) => x + y;

let head = (x: Js.Array.t('a)): 'a => x[0]

let nth = (index: int, x: Js.Array.t('a)): 'a => x[index]

let update = (index, value, x: Js.Array.t('a)): Js.Array.t('a) => {
  x[index] = value
  x
}