# Matrices

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
- $ab = ba$ (called *symmetry*)
- $\lambda(ba) = (\lambda a)b = a(\lambda b)$ (called *associativity*)
- $a(b+c) = ab+ac$ (called *distributivity*) 

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

We call the *set* of matrices containing all real numbers as $\mathbb{R}_{m,n}$.
A matrix with with the form **A** $\in \mathbb{R}_{n,n}$ (same number as columns
as rows) is called a square matrix. If a matrix isn't square, it's a fucking
rectangle, we call those rectangular matrices.

We can represent rows and columns of matrices as vectors. This is done by the
format $a_i$ and $a^j$. Why we don't use $m,n$ like we were before? No fucking
idea. So, the numeric vector $a_i$ is any generic $i$-th row inside a matrice.
And the $a^j$ is any generic $j$-th column inside a matrice.

$$ a_i = (a_{i,1}, a_{i,2}, ..., a{i,n})$$


$$ a^j = (a_{1,j}, a_{2,j}, ..., a{m,j})$$

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
Matrix transposition refers to flipping a matrix to its side clockwise. The
transpose of matrix $\mathbf{A}$ is referred to as $\mathbf{A}^{\mathbf{T}}$,
and with notation is written as $\forall i,j: a_{i,j} = a^{\mathbf{T}}_{j,i}.$ 

Furthermore, in all obviousness, the transpose of a transpose is simply the
original matrix. $(\mathbf{A}^{\mathbf{T}})^{\mathbf{T}} = \mathbf{A}$.
