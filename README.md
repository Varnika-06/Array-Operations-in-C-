# Array-Operations-in-Cpp
# Experiment 7 – Arrays and Strings in C++

# Tool Used: VS Code

**Name:** Varnika Maurya  
**PRN:** 24070123160  

---

##  Overview

This experiment explores the fundamental concepts of **arrays** and **strings** in C++. It includes basic operations like input/output, searching, finding sum, average, maximum, minimum values, and performing string manipulations like concatenation, reversal, and palindrome checking.

---

##  Program Details

###  Program 1: Input and Display Array Elements

**Theory:**  
An array is a collection of elements stored in contiguous memory. We can use loops to input and display values.

**Algorithm:**
1. Accept the number of elements `n`.
2. Loop `n` times to take array input.
3. Display the array using another loop.

---

###  Program 2: Linear Search in Array

**Theory:**  
Linear search sequentially checks each element to find the target.

**Algorithm:**
1. Take input of `n` elements.
2. Accept number to search (`num`).
3. Traverse array from index 0 to n-1.
4. If `arr[i] == num`, set `found = true`.
5. Print result accordingly.

---

###  Program 3: Sum and Average of Array

**Theory:**  
Sum is the total of all elements, and average is sum divided by the number of elements.

**Algorithm:**
1. Input array elements.
2. Initialize sum = 0.
3. Loop through the array and add to sum.
4. Average = sum / n.
5. Print both values.

---

###  Program 4: Find Maximum and Minimum Element

**Theory:**  
Maximum is the largest and minimum is the smallest value in the array.

**Algorithm:**
1. Initialize `max = arr[0]`, `min = arr[0]`.
2. Loop from 1 to n-1.
3. If `arr[i] > max`, update max.
4. If `arr[i] < min`, update min.
5. Print both.

---

###  Program 5: String Declaration and Assignment

**Theory:**  
Strings in C++ are objects of the `std::string` class and can be initialized in multiple ways.

**Algorithm:**
1. Declare and initialize strings using different methods.
2. Display all using `cout`.

---

###  Program 6: String Concatenation

**Theory:**  
String concatenation can be done using `+` operator or the `append()` method.

**Algorithm:**
1. Declare three strings.
2. Concatenate using `+` and `append()`.
3. Print the result.

---

###  Program 7: Reverse a String

**Theory:**  
To reverse a string, we traverse it from the end to the beginning.

**Algorithm:**
1. Accept string using `getline()`.
2. Loop from `length - 1` to `0`.
3. Print characters in reverse order.

---

###  Program 8: Palindrome Check

**Theory:**  
A palindrome is a string that reads the same forward and backward.

**Algorithm:**
1. Accept string.
2. Initialize a flag `isPalindrome = true`.
3. Loop from `0` to `length/2`.
4. Compare `s[i]` with `s[n-i-1]`.
5. If mismatch, set `isPalindrome = false`.
6. Print result.

---

##  Conclusion

In this experiment, we:
- Practiced working with **arrays**: input, output, search, sum, average, min, max.
- Learned basic **string** operations: declaration, concatenation, reversal, and palindrome checking.
- Strengthened our understanding of loops, conditionals, and C++ I/O.

These fundamental programs are essential for mastering array and string handling in C++.

---


