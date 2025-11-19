# Linear Dependency and Rank

## Linear Combination

### For rows

A row in a matrix is a linear combination of the other rows if you can recreate it by adding the other rows together, after scaling each one by some number.
The formula is:

$$a_i = \lambda _1 a_1 + \lambda _2 a_2 + \lambda _{i-1} a_{i-1} + \lambda _{i+1}
a_{i+1} + ... + \lambda _m a_m $$

Where $a_i$ is a row. Note that we do count row $i$ in our calculation.

For the following matrix:
$$
\begin{pmatrix}
0 & 1 & 1 \\
3 & 2 & 1 \\
6 & 5 & 3 \\
\end{pmatrix}
$$
The third row is a linear combination of the first two rows, with scalars
$\lambda _1$ and $\lambda _2$ being 1,2 respectively. In other words:
$$a_3 = a_1 + 2a_2$$

### For columns 
The same can be said for columns; a column in a matrix is a linear combination
of two other columns if you can recreate it by adding two columns together after
multiplying with scalar. 

$$a^j = \lambda _1 a^1 + \lambda _2 a^2 + \lambda _{j-1} a^{j-1} + \lambda _{j+1}
a^{j+1} + ... + \lambda _n a^n $$

For the following matrix:
$$
\begin{pmatrix}
1 & 2 & 1 \\
2 & 2 & 4 \\
1 & 3 & 0
\end{pmatrix}
$$

The third column is a linear combination of the first and second column, with
scalars $\lambda _1 = 3$ and $\lambda _2 = -1$ respectively.

## Linear Dependency 

For a matrix, $m$ rows (or $n$ columns) are linearly dependent if a row (or
column) of full zeroes can be made through a linear combinbation.

For the matrix
$$
\begin{pmatrix}
1 & 2 & 1 \\
2 & 2 & 4 \\
4 & 6 & 6
\end{pmatrix}
$$

The rows are linearly dependent as a row of full zeroes can be made by:
$$
o = -2a_1 - a_2 + a_3 
$$

## Linear Dependency and Singularity

The determinant of a matrix is zero if and only if the rows or columns are
linearly dependent.

$$
\begin{pmatrix}
1 & 2 \\
2 & 4 \\
\end{pmatrix}
$$

The determinant is $1 \times 4 - 2 \times 2 = 0$
The determinant can also be found as zero by
$$
o = 2a_1 - a_2
$$

## Rank
The rank of a matrix, defined as $\rho _a$, is the highest order of a submatrix that
is non-singular (with a non-zero determinant).


