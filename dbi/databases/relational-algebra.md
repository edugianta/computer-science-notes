# Relational Algebra

Relational Algebra is basically SQL but in a mathematical representation.
Different symbols represent different operations that we do.


## Symbols

| Symbol   | Meaning|
|--------------- | --------------- |
| $\sigma$   | Selects a subset of rows (tuples) that satisfy a relation.| 
| $\pi$| The vertical filler, Selects a subset of columns (attributes) from a relation. It also removes duplicate tuples from the result.|
| $\times$| Combines every tuple from the first relation with every tuple from the second relation. The result can be very large.|
| $\bowtie$| Combines tuples from two relations based on a common attribute. It's a cross product followed by a selection for equality on shared attribute names.|


### $\sigma$

The $\sigma$ symbol outputs a new relation (table) from the input relation, only
containing the rows that match its condition. Its format is like so:

$\sigma$`<predicate>`($R$)

1. $\sigma$ is the symbol for the type of operation.
2. `<predicate>` Is the condition that each row must fulfill to make it to the
   output table.
3. $R$ is the input relation.

An example with this table:

| ID | Name| Major | GPA|
| --------------- | --------------- | --------------- | --------------- |
| 101| Alice | Item3.1 | Item4.1 |
| 102 | Bob | Item3.2 | Item4.2 |
| 103| Charlie | Item3.3 | Item4.3 |


