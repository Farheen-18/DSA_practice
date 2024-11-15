/*
Question:-
Given an array of positive integers arr[], return the second largest element from the array. If the second largest element doesn't exist then return -1.

Note: The second largest element should not be equal to the largest element.

Examples:

Input: arr[] = [12, 35, 1, 10, 34, 1]
Output: 34
Explanation: The largest element of the array is 35 and the second largest element is 34.
Input: arr[] = [10, 5, 10]
Output: 5
Explanation: The largest element of the array is 10 and the second largest element is 5.
Input: arr[] = [10, 10, 10]
Output: -1
Explanation: The largest element of the array is 10 and the second largest element does not exist.
Constraints:
2 ≤ arr.size() ≤ 105
1 ≤ arr[i] ≤ 105
*/
/*
https://www.geeksforgeeks.org/batch/gfg-160-problems/track/arrays-gfg-160/problem/second-largest3735
*/
//My code:-

#include <stdio.h>
 
 int main()
 {
     int array[10];
     for (int i=0; i<10; i++)
     {
         scanf("%d", &array[i]);
     }
     /*
     If I sort it and then find second largest, the complexity
     will range from O(nlogn) to O(n^2)
     
     So I should go for modified search algorithm.
     
     Linear search - O(n)
     Binary search - O(logn)
    */
    int max = a[0];
    int second_max = 0;
    for (int i=0; i<10; i++)
    {
        if (array[i]>max)
        {
            max = array[i];
        }
        else if (array[i]==max)
        {
            continue;
        }
        else if (array[i] > second_max)
        {
            second_max = a[i];
        }
    }
    if (second_max == 0)
    {
        printf("-1\n");
    }
    else
    printf("%d", second_max);
    
    return 0;
 }
 
