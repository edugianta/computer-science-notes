# Surjective and Injective functions

## Types of functions

### Injective (one-to-one)
The idea of an injective function is that no two inputs produce the same output.
If $f(a) = b$, then $f(c) \ne b$. You also need to know how to prove these
functions, which you can do like so:
1. To prove it **is** injective, you can assume $f(x) = f(y)$ and show that this
   forces $x = y$.
2. To prove it is not, find an example where $x \ne y$ but $f(x) = f(y)$.

### Surjective (Onto)
Every element in the co-domain (the output set) is 'hit' by an input in the
domain. Basically, if the output was called $B$ and input set was called $A$,
there is no element in $B$ that cannot be reached by inputting something to $A$.
Formally, there is no $f(a) \ne b$, every $b$ can be reached by $a$.
1. To prove a function **is** surjective, you need to let a variable (for
   example $y$) be an arbitrary value in the output set $B$. Then, find an input
   value $x$ that maps to that $y$.
2. Find an element in $B$ that does not have a preimage from $A$.

### Bijective (one-to-one correspondence)
A surjective function is a function that is both surjective and injective. 

----------

### Other functions mentioned in the lecture

Mentioned as homework, most of them are pretty self explanatory but the
following could use explanation.

#### Floor and Ceiling functions

$\left \lceil{x}\right \rceil$
$\left \lfloor{x}\right \rfloor$, the floor and ceiling functions respectively.

The floor function outputs the largest integer less than or equal to $x$. So the
floor of 3.5 would be 3.

The ceiling function does the opposite, outputting the largest integer greater
than or equal to $x$. 
