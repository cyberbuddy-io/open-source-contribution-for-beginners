
# Know Your Code
**Addition and Subtraction on two matrices**

Adding and subtracting matrices is very simple. Once you know the matrices are the same size, just add/subtract the numbers in the position of the first matrix with the number in the same position of the other matrix.

## Example
![alt text](https://www.math-only-math.com/images/subtraction-of-two-matrices.png)


## A simple approach to implement a addition and subtraction is -

First we need to check that the number of rows of matrix A is equal to the number of rows of matrix B, Also we should perform the same check in case of column. 
But in our program we assume that number of rows of A and B are equal, as well as the column of A is equal to column of B. Then we goes

c[00]=a[00]+b[00], c[01]=a[01]+b[01]… and so on.
d[00]=a[00]-b[00], c[01]=a[01]-b[01]… and so on.


