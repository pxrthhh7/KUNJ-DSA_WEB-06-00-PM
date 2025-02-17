// Q.1) What is "Bubble Sort", and how does it work ?

// Ans > Bubble sort is a simple algorithm that sorts a list of numbers by comparing adjacent elements and swapping them if they are out of order.
//       that starts from the first element of an array and compares it with the second element. If the first element is greater than the second,
//       we swap them. It continues this process until the end of the array, with the largest elements “bubbling” to the top.


// Q.2) Explain the "time complexity" of Bubble Sort in the best, worst, and average cases. 

// Ans > 1.) Best Case Time Complexity (O(n))
//           The best case occurs when the array is already sorted. 
//           In this scenario, Bubble Sort can make an optimization check to avoid unnecessary passes through the array:
//        -> No swaps are needed because all elements are already in order.
//        -> After the first pass through the array, the algorithm detects that no swaps were made, and it terminates early.
//        -> If we implement the optimization with a flag (checking if any swaps occurred), Bubble Sort will only make one pass through the array.

//       2.) Worst Case Time Complexity (O(n²))
//           The worst case occurs when the array is sorted in reverse order, which requires the maximum number of comparisons and swaps:
//        -> Each element is compared to the next one.
//        -> Every pass through the array will result in a swap.
//        -> The first pass will "bubble" the largest element to the end, the second pass will bubble the second-largest element, and so on.

//       3.) Average Case Time Complexity (O(n²))
//           The average case assumes that the array elements are in random order. The number of comparisons and swaps will depend on the level of disorder in the array.
//        -> Each element is compared to the next one, and swaps are made when necessary.
//        -> On average, it will take about n/2 comparisons per element, and half of those will likely be swaps.
//        -> Number of comparisons: Since Bubble Sort compares adjacent elements, the average number of comparisons is still O(n²).
//        -> Number of swaps: Since the array is randomly shuffled, half of the comparisons will involve swaps, so O(n²) swaps are expected.
//        -> Time Complexity: O(n²) 


// Q.3) What is the **space complexity** of Bubble Sort ?

// Ans.> 1. Best Case (O(1))

//      -> No extra memory is used aside from the array itself.
//      -> Even though Bubble Sort may terminate early when no swaps occur (optimized case), it still only requires the space for the input array and a couple of temporary variables (for tracking whether swaps are made).
//      -> No additional memory is needed, so space complexity is O(1).

//      2. Average Case (O(1))

//      -> Regardless of the number of comparisons and swaps in the average case, Bubble Sort only requires one extra space for a temporary variable for the swap operation.
//      -> No new data structures (like lists, stacks, etc.) are created, so the space complexity remains O(1).

//      3. Worst Case (O(1))

//      -> Even in the worst case (when the array is sorted in reverse order and requires maximum comparisons and swaps), the space complexity is still O(1).
//      -> Bubble Sort operates in-place, meaning the space used remains constant regardless of the input.


// Q.4) Why is Bubble Sort not the most efficient sorting algorithm ?  

// Ans.> Bubble Sort is considered one of the least efficient sorting algorithms due to its high time complexity and excessive number of comparisons and swaps.
//       Here's why:
//              1. Too Many Unnecessary Swaps
//              -> Bubble Sort repeatedly swaps adjacent elements, even if they are only slightly out of order.
//              -> This increases the number of write operations, which can be expensive in memory-constrained environments.
//              -> Other algorithms like Selection Sort avoid unnecessary swaps by selecting the correct position before swapping.

//              2. Inefficient for Large Data Sets
//              -> For small arrays (n < 20), Bubble Sort might be acceptable.
//              -> For large arrays (n > 1000), Merge Sort, Quick Sort, or Heap Sort are far more efficient.

//              3. Not Suitable for Real-World Applications
//              -> Merge Sort & Quick Sort are used in libraries like C++ STL
//              -> Bubble Sort is rarely used in real-world applications because of its inefficiency.


// Q.5) How can we optimize Bubble Sort ?
