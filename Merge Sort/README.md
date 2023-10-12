## Problem Statement :
Write a program to sort an array using Merge Sort in C.

## Merge Sort :
Merge sort is defined as a sorting algorithm that works by dividing an array into smaller subarrays, sorting each subarray, and then merging the sorted subarrays back together to form the final sorted array.

## Algorithm :
+ Initially divide the array into two equal halves.
+ These subarrays are further divided into two halves. Now they become array of unit length that can no longer be divided and array of unit length are always sorted.
+ These sorted subarrays are merged together, and we get bigger sorted subarrays.
+ This merging process is continued until the sorted array is built from the smaller subarrays.

## Complexity Analysis of Merge Sort :
### Time Complexity 
    O(N log(N))  

Merge Sort is a recursive algorithm and time complexity can be expressed as following recurrence relation. 

    T(n) = 2T(n/2) + θ(n)

The above recurrence can be solved either using the Recurrence Tree method or the Master method. It falls in case II of the Master Method and the solution of the recurrence is θ(Nlog(N)). The time complexity of Merge Sort isθ(Nlog(N)) in all 3 cases (worst, average, and best) as merge sort always divides the array into two halves and takes linear time to merge two halves.

### Auxiliary Space
    O(N) 

In merge sort all elements are copied into an auxiliary array. So N auxiliary space is required for merge sort.
