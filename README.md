# Ternary-and-InterpolationSearch Algorithms Comparison
This project demonstrates and compares two advanced search algorithms for sorted arrays: Ternary Search and Interpolation Search. The implementation includes both algorithms in C++ with a test driver program.

Table of Contents
Algorithms Overview

Implementation Details

Complexity Analysis

Usage

Examples

Comparison Summary

Contributing

License

Algorithms Overview
Ternary Search
A divide-and-conquer algorithm that divides the search space into three parts instead of two (like binary search). It compares the target value with elements at two midpoints to determine which segment to search next.

Interpolation Search
An improved search algorithm that estimates the position of the target value based on the distribution of values in the array. Particularly efficient for uniformly distributed data.

Implementation Details
The project contains two main functions:

Ternary Search (ternarySearch):

Recursive implementation

Divides array into three equal parts

Returns index if found, -1 otherwise

Interpolation Search (interpolationSearch):

Iterative implementation

Uses value distribution to estimate position

Returns index if found, -1 otherwise

The main() function demonstrates both algorithms on a sample sorted array.

Complexity Analysis
Algorithm	Best Case	Average Case	Worst Case	Space Complexity
Ternary Search	O(1)	O(log₃n)	O(log₃n)	O(1) iterative
Interpolation Search	O(1)	O(log log n)	O(n)	O(1)
Usage
Clone the repository:

bash
git clone https://github.com/unmoha/Ternary-and-Interpolation
cd search-algorithms
Compile the code:

bash
g++ search_comparison.cpp -o search_comparison
Run the executable:

bash
./search_comparison
Examples
The default implementation searches for the value 23 in the sorted array:

cpp
int sortedArr[] = {2, 5, 8, 12, 16, 23, 38, 56, 72, 91};
Sample output:

Ternary Search: Element found at index 5
Interpolation Search: Element found at index 5
To test with different values:

Modify the key variable in main()

Change the sortedArr array contents (must remain sorted)

Comparison Summary
Criteria	Ternary Search	Interpolation Search
Speed	Slower than binary search	Faster for uniform data
Data Requirements	Any sorted array	Uniform distribution preferred
Implementation	Simple recursive/iterative	More complex formula
Best Use Case	General purpose	Large, uniformly distributed data
Contributing
Contributions are welcome! Please follow these steps:

Fork the repository

Create your feature branch (git checkout -b feature/improvement)

Commit your changes (git commit -am 'Add some feature')

Push to the branch (git push origin feature/improvement)

Create a new Pull Request

License
This project is licensed under the MIT License - see the LICENSE file for details.

New chat