# Boolean Laws

## Precedence

**Priority**
1. Parentheses
2. Not 
3. And 
4. Or

### Example

$f(x,y,z) =$ NOT($x$) OR (NOT($x$) AND $z$)

1. Brackets first
2. Not inside Brackets
3. Then the AND
4. Then the NOT, and then the OR.

----------


## Simplification Rules

**__Idempotent Laws__**

&nbsp;&nbsp;&nbsp;&nbsp;$x$ OR $x$ as well as $x$ and $x$ == $x$

**__Associative Laws__**

    ($x$ OR $y$) OR $z$ == $x$ OR ($y$ OR $z$)

You can drop the brackets if all the gates are the same.

**__Commutative Laws__**

$x$ AND $y$ == $y$ AND $x$

**__Distributive Laws__**

You can expand brackets like algebra if it is AND to OR or OR to AND.
$x$ AND ($y$ OR $z$) == ($x$ AND $y$) OR ($x$ AND $z$) 

$x$ OR ($y$ AND $z$) == ($x$ OR $y$) AND ($x$ OR $z$)

