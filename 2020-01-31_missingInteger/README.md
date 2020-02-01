# Problem

**PROBLEM FROM CODILITY**

This is a demo task.

Write a function:

int solution(vector<int> &A);

that, given an array A of N integers, returns the smallest positive integer (greater than 0) that does not occur in A.

For example, given A = [1, 3, 6, 4, 1, 2], the function should return 5.

Given A = [1, 2, 3], the function should return 4.

Given A = [−1, −3], the function should return 1.

Write an efficient algorithm for the following assumptions:

N is an integer within the range [1..100,000];
each element of array A is an integer within the range [−1,000,000..1,000,000].
Copyright 2009–2020 by Codility Limited. All Rights Reserved. Unauthorized copying, publication or disclosure prohibited.

# My Solution
I use a started by sorting the vector from greatest to least. Then I had a variable called minimum with an initial value of 1. I looped through the vector, comparing minimum to each value, and adding incrementing minimum by one if it matched a value in the vector. Since the vector would be sorted, minimum would only increment for the first instance of the value in the vector, resulting in minimum being the smallest positive integer. I would then return minimum for the function.
