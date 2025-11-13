# Building Logic Gates from NAND only

## NOT 

`NOT A = A NAND A`

| `A` | `NOT A` | `A NAND A`|
| --------------- | --------------- | --------------- |
| 0 | 1 | 1|
| 1| 0| 1|


## AND
`A AND B = (A NAND B) NAND (A NAND B)`

This is basically us doing a `NAND` and then `NOT`ing the output (notice how
`NOT` is `A NAND A`)

## OR
A `NAND` gate outputs a 1 if any of the inputs are 0. An `OR` gate outputs a 1
if any of the inputs is 1. So, we can `NOT` the NAND gate to achieve an `OR`.

`( A NAND A ) NAND ( B NAND B )`

The middle `NAND` inverts the entire expression
