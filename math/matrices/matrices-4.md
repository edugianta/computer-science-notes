# Systems of linear equations

## Complete and Incomplete Matrix

A system of linear equations can be expressed using matrices, for example
$\mathbf{Ax=b}$

The matrix $\mathbf{A} \in \mathbb{R}_{m,n}$ is incomplete in the context of a
linear equation. The matrix $\mathbf{A}^c \in \mathbb{R}_{m,n+1}$ where the
$(n+1)$th column is the vector $\mathbf{b}$ is considered complete as it
accurately encompasses the idea of a linear equation. 

$$
A^c = (A|b) =
\left(
  \begin{array}{cccc|c}
    a_{1,1} & a_{1,2} & \cdots & a_{1,n} & b_1 \\
    a_{2,1} & a_{2,2} & \cdots & a_{2,n} & b_2 \\
    \vdots  & \vdots  & \ddots & \vdots  & \vdots \\
    a_{m,1} & a_{m,2} & \cdots & a_{m,n} & b_m
  \end{array}
\right)
$$

In this context, $a_{1,1}x_1 + a_{1,2}x_2 + \cdots + a_{1,n}x_n =  b_1$, etc. 

For the following systems of linear equations:
$$
\begin{cases}
  2x - y + z = 3 \\
  x + 2z = 3 \\
  x - y = 1
\end{cases}
$$

The system can be re-written as $\mathbf{A}\mathbf{x} = \mathbf{b}$ where

$$
\mathbf{A} = 
\begin{pmatrix}
2 & -1 & 1 \\
1 & 0 & 2 \\
1 & -1 & 0
\end{pmatrix}, \quad 
\mathbf{b} = 
\begin{pmatrix}
3 \\
3 \\
1
\end{pmatrix}, \quad 
\mathbf{A}^c = 
\left(
\begin{array}{ccc|c}
2 & -1 & 1 & 3 \\
1 & 0 & 2 & 3 \\
1 & -1 & 0 & 1
\end{array}
\right)
$$

## Solving Systems using Cramer's Method

Cramer's Theorem states that for 

$\mathbf{Ax=b}$, if $\mathbf{A}$ is non singular, then there is only ONE unique
solution that satisfies all equations. If a system satisfies Cramer's Theorem,
then it is a Cramer's System.

## Hybrid Matrices  
For any matrix, the hybrid matrix with respect to the $i$th column can be obtained by replacing the $i$th
column of $\mathbf{A}$ with $\mathbf{b}$.
$$
\mathbf{A_i} = 
\begin{pmatrix}
a_{1,1} & a_{1,2} & \cdots & b_1 & \cdots & a_{1,n} \\
a_{2,1} & a_{2,2} & \cdots & b_2 & \cdots & a_{2,n} \\
\vdots & \vdots & \ddots & \vdots & \ddots & \vdots \\
a_{n,1} & a_{n,2} & \cdots & b_n & \cdots & a_{n,n}
\end{pmatrix}
$$
Equivalently if we write $\mathbf{A}$ as a vector of column vectors:

$$\mathbf{A} = \begin{pmatrix}
\mathbf{a}^1 & \mathbf{a}^2 & \ldots & \mathbf{a}^{i-1} & \mathbf{a}^i & \mathbf{a}^{i+1} & \ldots & \mathbf{a}^n
\end{pmatrix}$$

the hybrid matrix $\mathbf{A}_i$ would be

$$\mathbf{A}_i = \begin{pmatrix}
\mathbf{a}^1 & \mathbf{a}^2 & \ldots & \mathbf{a}^{i-1} & \mathbf{b} & \mathbf{a}^{i+1} & \ldots & \mathbf{a}^n
\end{pmatrix}.$$

-----   
Cramer's Method states that:

**For a system of linear equations $\mathbf{Ax = b}$ with $\mathbf{A}$ non
singular, a generic solution $x_i$ element of $\mathbf{x}$ can be found as** 
$$
x_i = \frac{\det \mathbf{A_i}}{\det \mathbf{A}}
$$
**Where $\mathbf{A_i}$ is the hybrid matrix with respect to the $i$th column of 
$\mathbf{A}$.**

## Rouchè-Capelli Theorem

A system of $m$ linear equations in $n$ variables is said to be 
- compatible if it has at least one solution,
- determined if it has only one solution,
- undetermined if it has infinite solutions,
- incompatible if it has no solutions


The theorem states that: 
"A system of $m$ linear equations in $n$ variables $\mathbf{Ax=b}$ is compatible
if and only if both the incomplete and complete matrices have the same rank
$\rho _{\mathbf{A}} = \rho _{\mathbf{A}^{\mathbf{C}}} = \rho$ named rank of the
system."

The theorem has a few cases:

1. $\rho _{\mathbf{A}} \lt \rho _{\mathbf{A}^\mathbf{C}} \rightarrow$
   incompatible and no solutions
2. $\rho _{\mathbf{A}} = \rho _{\mathbf{A}^\mathbf{C}}$, then it is a Cramer's
   system, and there are three subcases here:
   - if $\rho _{\mathbf{A}} = \rho _{\mathbf{A}^\mathbf{C}} = \rho = n = m$, it
   can be solved with Cramer's. 
   - if $\rho _{\mathbf{A}} = \rho _{\mathbf{A}^\mathbf{C}} = \rho = n \lt m$,
   then there are $\rho$ equations that are a Cramer System, and there is only
   one solution. 
   - if $\rho _{\mathbf{A}} = \rho _{\mathbf{A}^\mathbf{C}}$ and $\rho$ is both
   $\lt n$ and $\le m$, there are infinite solutions and we cannot solve it.

## Gaussian Elimination 

Gaussian Elimination is an alternative to Cramer's Method as Cramer's Method can
be computationally expensive for larger matrices. The goal is to get the bottom
left corner of a matrix into a triangle of zeroes, so it can be solved like a
simple algebraic equation.

An incomplete matrix with this bottom left triangle of zeroes is called
triangular.

A complete matrix with this triangle of zeroes is called a staircase.

Gaussian Elimination, at its core, is simply multiplying or summating different rows together to end up at that triangle of zeroes.

Its important to think of Gaussian Elimination as more of an *algorithm* than a
technique. So, each algorithm has a *time step* or simply *step*. Also, an
algorithm will also have a *state*, and at each state we have different
*operations* we can perform.

### Describing State 
- $\mathbf{A}^{c(k)}$: Complete (augmented) matrix at step $k$
- $\mathbf{A}^{(k)}$: Coefficient matrix at step $k$ 
- $\mathbf{r}_i^{(k)}$: Row $i$ at step $k$ (includes both coefficients and RHS)
### Row Operations 
- The Row Swap:
$$
R_i \leftrightarrow R_j \quad \text{or} \quad \mathbf{r}_i^{(k+1)} \leftrightarrow \mathbf{r}_j^{(k)}
$$
- Scalar Multiplication; $\alpha$ is the scalar
$$
R_i \leftarrow \alpha R_i \quad \text{or} \quad \mathbf{r}_i^{(k+1)} \leftarrow \alpha \cdot \mathbf{r}_i^{(k)}
$$
- Row addition 
$$
R_i \leftarrow R_i - l_{ij} R_j \quad \text{or} \quad \mathbf{r}_i^{(k+1)} \leftarrow \mathbf{r}_i^{(k)} - l_{ij} \cdot \mathbf{r}_j^{(k)}
$$

