/*Author Name=Onkar Anant Lambade
Date = 9/8/2023
Branch = I.T.
Roll No=32
Program =08
Description=Write a function that compares two arrays and returns 1 if they are identical and 0
otherwise.
*/
#include <stdio.h>

int compare(int arr1[], int arr2[], int size) {
    for (int i = 0; i < size; i++) {
        if (arr1[i] != arr2[i]) {
            return 0; // Arrays are not identical
        }
    }
    return 1; // Arrays are identical
}

int main() {
    int size;
    printf("Enter the size of the arrays: ");
    scanf("%d", &size);

    int array1[size];
    int array2[size];

    printf("Enter elements for the first array:\n");
    for (int i = 0; i < size; i++) {
        scanf("%d", &array1[i]);
    		}

    printf("Enter elements for the second array:\n");
    for (int i = 0; i < size; i++) {
        scanf("%d", &array2[i]);
    	}

    int result = compare(array1, array2, size);

    if (result == 1) {
        printf("The arrays are identical.\n");
    } else {
        printf("The arrays are not identical.\n");
    }

    return 0;
}