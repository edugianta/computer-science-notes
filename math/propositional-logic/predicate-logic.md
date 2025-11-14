# Predicate Logic 

**Predicate**: proposition whose truth value depends on the value of variables.

A truth value is basically what the expression resolves to. Consider the statement ‘x is greater than 3’.
1. The subject is the variable $x$.
2. the *predicate* is a property that the subject of the statement can have.
3. So, the predicate in this case is *$x$ is greater than 3*.
4. Let's call the overall statement $P(x)$. 
5. This is now a propositional function, which becomes a *proposition* when $x$ is given a value; where the predicate is $x$ is greater than 3.


## Quantification
This is where it becomes important. Quantification is basically specifying
things about the propositional function. It expresses the extent to which a
statement is true over some elements. There are two types that are focused on:

- universal quantification; a predicate is true for every element under
consideration; *the predicate is ALWAYS true for every value $x$ takes in the
specified domain*
- existential quantification: there is one or more element under
consideration for which a predicate is true; *the predicate is true for AT LEAST
ONE value that $x$ takes in the specified domain.*

### Universal Quantification

Universal quantification of $P(x)$ can be expressed like so:
$$
\forall x P(x)
$$
$\forall$ is the universal quantiifer. It is read as 'for all'. Therefore, the
statement above is read as "*for all $x$ in P(x)*"

#### Examples


- Proposition: Let $P(x)$ be the statement $x + 1 > x$. What is the truth value of
the quantification $\forall x P(x)$, where the domain consists of all real
numbers?

    The proposition asks us in plain terms: *for all $x$ in $P(x)$, where $x$ is
    a real number, is $x+1\gt x$?* The answer is, of course it is. Therefore the
    *truth value* is **true**.


- Proposition: Let $Q(x)$ be the statement ‘$x < 2$’. What is the truth value of the
quantification $\forall x Q(x)$, where the domain consists of all real
numbers?

    The proposition asks us *"for all $x$, where $x$ is every real number, is $x
    \lt 2$?"* This is clearly fasl, as $Q(3)$ is not less than 2.


## Existential Quantification
Existential Quantification of $P(x)$ can be expressed like so:
$$
\exists x P(x)
$$
$\exists$ is the existential quantiifer. It is read as 'for some'. Therefore,
the statement above is read as *"for some $x$ in $P(x)$".

### Examples


- Proposition: Let $P(x)$ be the statement ‘$x < 2$’. What is the truth value of the
quantification $\exists x P(x)$, where the domain consists of all real
numbers? 

     The proposition asks us in plain terms: *is there at least one $x$ in
     $P(x)$ that makes the statement $x\lt2$ **TRUE**, where $x$ is all real
     numbers? Of course: $P(1) \lt 2$. Therefore this predicate is **TRUE.**


- Proposition: What is the truth value of $\exists x P(x)$, where $P(x)$ is the statement
$‘x^2 > 10’$ and the domain consists of the positive integers not
exceeding 4? 

    The proposition asks us in plain terms: "is there at least one $x$ in $P(x)$
    that makes the statement above true, where $x \in \{1,2,3,4\}$?" Yes, of
    course, $P(4) \gt 10$.


## Restricted Domains with Existential and Universal Quantification

We often use an abbreviated notation to restrict the domain of a quantifier.
Consider the following statement:
$$
\forall x \lt 0 (x^2 \gt 0)
$$
This means that for "**every $x$ that is less than 0, $x^2 \gt 0$.**"

## Binding Variables

When we use a quantifier ($\forall$, $\exists$) on a variable, we say that that
variable is **bound**. In the statement above, $x$ is bound as it has the
quantifer $\exists$ before it.

In the statement

$$
\exists x (x+y=1)
$$

the variable that is bound is $x$, as $x$ has a quantifier before it.

## Scope of Quantifiers

Quantifiers also have scope. In the statement
$$
\exists x(P(x)\land Q(x))\lor \forall x R(x)
$$
In the statement above, $(P(x)\land Q(x))$ are bound by quantifiers, and $R(x)$
is also bound by a quantifier. Their scopes are pretty much self explanatory.

