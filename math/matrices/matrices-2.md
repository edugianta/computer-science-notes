# Matrices Part 2

This note discusses determinants and matrix inversion.

## Inverting a Matrix 

Matrix inversion simply refers to dividing two matrices. Just like how writing
$a^{-1}$ is the same as $\frac{1}{a}$, dividing matrix $\mathbf{A}$ by matrix
$\mathbf{B}$ is written as $\mathbf{AB}^{-1}$

Formally, for a square matrix $\mathbf{A}$, the inverse matrix $\mathbf{A}^{-1}$
is the matrix such that:
$$
\mathbf{AA}^{-1} = \mathbf{I}
$$

1. There is a general way to calculate the inverse.
2. Not every matrix has an inverse.
3. The inverses of matrices are always unique.

### Example: Inverting an order 2 square matrix 

Given a matrix $\begin{bmatrix} a & b \\ c & d \end{bmatrix}$, its inverse is 

$$
\frac{1}{ad-bc} \begin{bmatrix} d & -b \\ -c & a \end{bmatrix}
$$

### General formula for inverting any matrix

$$\mathbf{A}^{-1} = \frac{1}{\det \mathbf{A}}\mathrm{adj}{(\mathbf{A})}$$

Where $\det$ is the determinant and $\mathrm{adj}$ is the adjugate matrix
of $\mathbf{A}$.

We can see from the formula that an inverse can't exist if $\det \mathbf{A} =
0$.

We know a matrix is invertible if $\exists$ a matrix such $\mathbf{B}$ that $\mathbf{AB = I =
BA}$.
## Submatrices

The clue is in the name. A submatrice is a small matrice that makes up the
original matrice. It is done like so:

For a matrix $m \times n$, we decide we want to keep $r$ rows and $s$ columns.
We do $m - r$, and $n - s$, leaving us with an $r \times s$ matrix. A matrix can
be a submatrix of itself if $r = m$ and $n = s$.

### Minors and Majors

If we have matrix and its submatrix, the determinant of the submatrix is said to
be *minor*. If the submatrix is the largest possible square submatrix of the
original matrix, then it is said to be a *major*. A matrix can have multiple
majors.

### Complement submatrix

A complement submatrix is a submatrix obtained by cancelling the $i^{\text{th}}$
row and the $j^{\text{th}}$ column from a matrix, and is said to be complement
to the element $a_{i,j}$. Its determinant is minor and referred to as $M_{i,j}$.

An example, given a matrix

$$
\begin{bmatrix}
1 & 2 & 3 \\
4 & 5 & 6 \\
7 & 8 & 9 
\end{bmatrix}
$$

The complement to the element 5 would be found by deleting the second row and
second column, as 5 is element $a_{2,2}$. The leftover matrix would be:

$$
\begin{bmatrix}
1 & 3 \\
7 & 9 
\end{bmatrix}
$$

This would be our complement matrix to the element $a_{2,2}$

## Cofactors and adjugate matrices

Cofactors lead on from submatrices. The cofactor $A_{i,j}$ of the element
$a_{i,j}$ is defined as $A_{i,j} = (-1)^{i+j} M_{i,j}$. 

An adjugate matrix is a matrice filled with the cofactor of each element from
the original matrix. 

## Determinants

We can find determinants using the 'First Laplace Theorem'. It states that: 

*"The determinant of $\mathbf{A}$ can be computed as the sum of each row or column (element) multiplied by the
corresponding cofactor."*

In other words:
$$
\det \mathbf{A} = \Sigma^{n}_{j=1} a_{i,j} A_{i,j} \text{ and } \Sigma^{n}_{i=1} a_{i,j} A_{i,j}
$$
Basically, pick any row and column and multiply each element in that row or
column by its co-factor, and add it up. 

## The second Laplace Theorem 

The second Laplace Theorem states that the sum of elements in a row multiplied
the corresponding co-factor of another row is always zero. So for any row $i$
and different row $k$, for each column $j$, multiply the element from row $i$
and the co-factor from row $k$.


# Putting it all together

Let's invert a matrix $\mathbf{A}$:

$$
\begin{bmatrix}
2 & 1 & 1 \\
0 & 1 & 0 \\
1 & 3 & 1 
\end{bmatrix}
$$


