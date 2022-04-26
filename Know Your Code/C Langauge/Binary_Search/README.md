# Binary Search
**What is a Binary Search?**

Binary Search is a searching algorithm for finding an element's position in a sorted array.

## Example
![alt text](https://media.geeksforgeeks.org/wp-content/uploads/20220309171621/BinarySearch.png)

## A simple approach to implement a linear search is -

1. Compare x with the middle element.
2. If x matches with the middle element, we return the mid index.
3. Else If x is greater than the mid element, then x can only lie in the right half subarray after the mid element. So we recur for the right half.
4. Else (x is smaller) recur for the left half.

## Input and Output -
![alt text](https://qawithexperts.com/Images/Upload/20-07-2018/binary-search-program-in-c-min.png)

