# Relational Model

## Storing Data
Data is stored in relations which are tables with rows and columns. An
attribute of a relation is the columns of the table.

Table title: People

| Name | Age |
|------|-----|
| John | 15  |
| Jimmy | 19 |

In this table, the **relation** is the entire table, the attributes are the
columns (name and age). Every relation (table) has a schema which hightlight how
each row (which is a tuple) index means. So for the first row the tuple would be
`(John, 15)`, and the schema is `(Name, Age)` because thats how the columns are
ordered. 

Each attribute (column) has a domain, which is the range of corresponding values
that the attribute can have. 

We also use some fuckass terms because we want to make shit more complicated for
no reason:

- The cardinality of a relation is the number of rows.
- The degree of a relation is the number of columns.

We also have to represent relations in a code-like format. The table above
would look like so:
```python
People(Name, Age)

{
    (John, 15),
    (Jimmy, 19)

 }
```
As you can see, we use {} to represent the data in the table, and a row is a
tuple. 

Proporties of relations:
1. Each relation has a distinct name.
2. Each cell can only have one value.
3. Each attribute has a distinct name.
4. The values of an attribute are all from the same domain.
5. The order of attributes has no significance.
6. The order of tuples has no significance.

## Keys

1. SuperKey: A key that uniquely identifies a tuple (row) in a relation (column)
2. Candidate Key: A minimally sized key that makes it a superkey.
3. Primary key: A primary key is selected from the set of candidate key to identify tuples in a relation.
4. Foreign key:  A foreign key is an attribute in one table that is the primary
   key of another table, essentially linking two other tables together.
