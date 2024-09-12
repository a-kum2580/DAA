/* Pseudocode
Algorithm find_max(array, n)
    Input: array of numbers and n (the number of elements in the array)
    Output: maximum element in the array

    Step 1: max = array[0]  // Initialize max with the first element
    Step 2: For i = 1 to n-1 do:
                If array[i] > max then:
                    max = array[i]
             End For
    Step 3: Return max
End Algorithm
*/

#include <stdio.h>

int find_max(int array[], int n) 
{
    // Step 1: Initialize max with the first element
    int max = array[0]; 
    
    // Step 2: Loop through the array starting from the second element
    for (int i = 1; i < n; i++) 
    {
        if (array[i] > max) 
        {
           // Update max if the current element is greater 
            max = array[i]; 
        }
    }
    // Step 3: Return the maximum value
    return max;  
}

int main() 
{
    int array[] = {10, 35, 2, 99, 45};
    int n = sizeof(array) / sizeof(array[0]);

    int max_element = find_max(array, n);

    printf("The maximum element in the array is: %d\n", max_element);

    return 0;
}
