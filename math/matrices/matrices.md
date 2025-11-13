# Matrices - Part 1

## Numeric Vector

A numeric vector is an ordered tuple of real numbers. Examples are (1,2) and
(3,4), these are two dimension vectors as their length is 2. However, not that
(2,1) and (4,3) are not numeric vectors as they are not ordered. In a more math
way,

$$
a=(1,0,56.3, \sqrt{2})
$$

We would call this a vector of $\mathbb{R}^4$ as this is a 4 length vector of
real numbers.

### Numeric Vector Operations

Let $a = (a_1,a_2,...,a_n)$ and let $b=(b_1,b_2,...,b_n)$. The sum of these
vectors $a$ and $b$ = $c$, where $c$ is

$$
c=(a_1+b_1,a_2+b_2,...,a_n+b_n)
$$

Basically, you add each index with the other. Subtraction would follow the same
idea. For example for $a=(1,2,3)$ and $b = (4,5,6)$, $a+b=(5,7,9)$.

### Scalars

A numeric vector is said to be scalar (represented by $\lambda$) if
$\lambda \in \mathbb{R}^1$. In other words, a vector with length 1 is called a
scalar. The product of a scalar against a vector with any length is simply done
index-wise. Or in math terms,

$$
\lambda a = (\lambda a_1,\lambda a_2, ..., \lambda a_n)
$$

So, for vector $a=(1,2,3)$ and for $\lambda = 2$, the resulting $\lambda a =
(2,4,6)$.

### Scalar Product

If we have $a = (a_1,a_2,...,a_n)$, $b=(b_1,b_2,...,b_n)$ where they are numeric
vectors $\mathbb{R}^n$, then the scalar product between them both is also
index-wise multiplication summated:

$$
ab = a_1 b_1 + a_2 b_2 + ... + a_n b_n
$$

This is basically the dot product from IB, it can also be written as $a \cdot b$.

**IMPORTANT!**
Some rules about the scalar product are the following:

- $ab = ba$ (called _symmetry_)
- $\lambda(ba) = (\lambda a)b = a(\lambda b)$ (called _associativity_)
- $a(b+c) = ab+ac$ (called _distributivity_)

## Matrices

If we have $m,n \in \mathbb{N}$ and $m,n \gt 0$. A matrix $(m \times n)$ **A**
is a generic table that looks like this:

$$
\begin{bmatrix}
a_{1,1} & a_{1,2} & ... & a_{1,n} \\
a_{2,1} & a_{2,2} & ... & a_{2,n} \\
a_{m,1} & a_{m,2} & ... & a_{m,n}
\end{bmatrix}
$$

Where each element of the matrix is a real number.

We call the _set_ of matrices containing all real numbers as $\mathbb{R}_{m,n}$.
A matrix with with the form **A** $\in \mathbb{R}_{n,n}$ (same number as columns
as rows) is called a square matrix. If a matrix isn't square, it's a fucking
rectangle, we call those rectangular matrices.

We can represent rows and columns of matrices as vectors. This is done by the
format $a_i$ and $a^j$. Why we don't use $m,n$ like we were before? No fucking
idea. So, the numeric vector $a_i$ is any generic $i$-th row inside a matrice.
And the $a^j$ is any generic $j$-th column inside a matrice.

$$ a*i = (a*{i,1}, a\_{i,2}, ..., a{i,n})$$

$$ a^j = (a*{1,j}, a*{2,j}, ..., a{m,j})$$

An example:

Let

$$
\mathbf{A} =
\begin{pmatrix}
2 & 0 & -1 \\
0 & 1 & 3 \\
2 & -2 & 0
\end{pmatrix}
$$

Then

- Then $m = 3$ and $n = 3$. Hence $\mathbf{A}$ is a square matrix and $\mathbf{A} \in \mathbb{R}_{3,3}$.
- The 2nd row vector is $\mathbf{a}_2 = (0, 1, 3)$ and the 3rd column vector is $\mathbf{a}^3 = (-1, 3, 0)$.

### Matrix Transposition

Matrix transposition refers to flipping a matrix to its side. The
transpose of matrix $\mathbf{A}$ is referred to as $\mathbf{A}^{\mathbf{T}}$,
and with notation is written as $\forall i,j: a_{i,j} = a^{\mathbf{T}}_{j,i}.$

An easy way to remember this is to think about it like this: for matrix $\mathbf{A}$, the transposed matrix $\mathbf{A}^{\mathbf{T}}$ would be the first row of $\mathbf{A}$ as the first column of $\mathbf{A}^{\mathbf{T}}$.

Furthermore, in all obviousness, the transpose of a transpose is simply the
original matrix. $(\mathbf{A}^{\mathbf{T}})^{\mathbf{T}} = \mathbf{A}$.

### Matrix Symmetry

A Matrix is said to be symmetric when $\forall i,j : a_{i,j} = a_{j,i}$, or in other words, it is equal to its transpose.

### The diagonal and trace of a Matrix

The diagonal of a matrix is the ordered tuple that displays the same index twice. $\forall i$ from 1 to $n$ $a_{i,i}$. So $a_{1,1}$, $a_{2,2}$ and so on are diagonals. When we say 'diagonal' when referring to matrices, we only refer to the left diagonal.

The trace of a matrix is the sum of the diagonal elements.

### Null Matrices

A null matrice is said to be null if all of its elements are zeroes.

### Identity Matrices

An identity matrix is a square matrix whose diagonal elements are all ones and all other elements are zeroes.

## Matrix Operations: Sum and Product

### Matrice Sums

Like vectors, matrices are summated element-wise. In math terms:

$$
\forall i,j : c_{i,j} = a_{i,j} + b_{i,j}
$$

This calculation above would be written as $\mathbf{C} = \mathbf{A} + \mathbf{B}$.

Similarly, subtraction would be

$$
\forall i,j : c_{i,j} = a_{i,j} - b_{i,j}
$$

And this would be written as $\mathbf{C} = \mathbf{A} - \mathbf{B}$.

There are also some properties that are useful to know for matrices.

- $\mathbf{A} + \mathbf{B} = \mathbf{B} + \mathbf{A}$ (called _commutativity_)
- $(\mathbf{A} + \mathbf{B}) + \mathbf{C} = \mathbf{A} + (\mathbf{B} + \mathbf{C})$ (called _*associativity*_)
- $\mathbf{A} + \mathbf{O} = \mathbf{A}$ (called _natural element_)
- $\forall \mathbf{A} \in \mathbb{R}_{m,n} : \exists ! \mathbf{B} \in \mathbb{R}_{m,n}$ such that $\mathbf{A} + \mathbf{B} = \mathbf{O}$ (For every matrix $\mathbf{A}$ there exists a unique matrix $\mathbf{B}$ such that $\mathbf{A} + \mathbf{B}$ equals the zero matrix, this is called _opposite element_). The $!$ symbol means 'unique'.

### Matrix Products

Matrix products with scalars are done like vectors, elementwise.

$$
\forall i,j : c_{i,j} = \lambda a_{i,j}
$$

There are also properties for this:

- $(\mu\lambda)\mathbf{A} = (\mathbf{A}\mu)\lambda = (\mathbf{A}\lambda)\mu$ (called _associativity_)
- $\mu(\mathbf{A} + \mathbf{B}) = \mu\mathbf{A} +\mu\mathbf{B}$ (called _*distributivity*_)
- $(\lambda + \mu)\mathbb{A} = \lambda \mathbf{A} + \mu \mathbf{A}$ (called _distributivity_ too)

The matrix product with other matrices is done by the scalar product of row vectors of the first matrix with the column vectors of the second. It is calculated like this:

$$
C_{i,j} = (\text{row } i \text{ of } \mathbf{A}) \cdot (\text{column } j \text{ of } \mathbf{B})
$$

So, we know that:

- The nmber of columns in the first matrix must be the same as the number of rows in the second.
- The product of $(m \times r)$ and a $(r \times n)$ matrix will always give a $(m \times n)$ matrix.

For matrix $\mathbf{A}$ and $\mathbf{B}$, it would look like so:

$$
\mathbf{A} = \begin{pmatrix} 2 & 7 & 3 & 1 \\ 5 & 0 & 4 & 1 \end{pmatrix} \quad \mathbf{B} = \begin{pmatrix} 1 & 2 \\ 2 & 5\\ 8 & 0 \\ 2 & 2 \\ \end{pmatrix}
$$

To calculate the matrix product do the scalar product of the rows and columns. Start with $i,j =1$, so row 1 of $\mathbf{A}$ and column 1 of $\mathbf{B}$.

$$
(2)(1) + (7)(2)+(3)(8) + (1)(2) = 42
$$

Then, row 1 of $\mathbf{A}$ and column 2 of $\mathbf{B}$. The row 2 for column 1, and then row 2 for column 2.

The end result should look like this. You start filling in from the top left.

$$
\mathbf{A} \times \mathbf{B} = \begin{pmatrix} 42 & 41 \\ 39 & 12 \end{pmatrix}
$$

Matrix products also have properties:

- $A(B+C) = AB + AC$ (left distributivity)
- $(B+C)A = BA + CA$ (right distributivity)
- $A(BC) = (AB)C$ (associativity)
- $(AB)^{T} = B^T A^T$ (transpose of the product)
- $AI = A$ (neutral element)
- $AO = O$ (absorbing element)

**IMPORTANT: COMMUTATIVITY IS NOT A GENERAL PROPERTY.**

This means that
$\mathbf{AB} \ne \mathbf{BA}$. However, you can find cases where this in fact is true, but it is _NOT_ a hard and fast rule. For example, every matrix is commutable with $\mathbf{O}$ and $\mathbf{I}$ as the result is always $\mathbf{O}$ and $\mathbf{A}$ respectively.
