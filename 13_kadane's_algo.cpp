/*
    link: https://practice.geeksforgeeks.org/problems/kadanes-algorithm-1587115620/1
*/


// ----------------------------------------------------------------------------------------------------------------------- //
int maxSubarraySum(int arr[], int n)
{
    if (start >= end)
        return;

    int temp = arr[start];
    arr[start] = arr[end];
    arr[end] = temp;

    // Recursive Function calling
    rvereseArray(arr, start + 1, end - 1);
}
