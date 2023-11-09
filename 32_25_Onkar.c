/*Author Name=Onkar Anant Lambade
Date = 8/10/2023
Branch = I.T.
Roll No=32
Program =25
Description=Write a program in C to Implementation of Binary Search.
*/
#include <stdio.h>

int binary_search(int arr[], int size, int target) {
    int left = 0;
    int right = size - 1;

    while (left <= right) {
        int mid = left + (right - left) / 2;

        if (arr[mid] == target) {
            return mid;  // Element found, return its index
        } else if (arr[mid] < target) {
            left = mid + 1;  // Adjust the left boundary
        } else {
            right = mid - 1;  // Adjust the right boundary
        }
    }

    return -1;  // Element not found
}

int main() {
    int arr[] = {2, 4, 6, 8, 10, 12, 14, 16};
    int size = sizeof(arr) / sizeof(arr[0]);
    int target = 10;

    int result = binary_search(arr, size, target);
    if (result != -1) {
        printf("Element %d found at index %d\n", target, result);
    } else {
        printf("Element %d not found in the array\n", target);
    }

    return 0;
}
