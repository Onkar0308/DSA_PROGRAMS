/*
Author Name=Onkar Anant Lambade
Date = 6/8/2023
Branch = I.T.
Roll No=32
Program =01
Description=Write a C program to check if a given number is a part of Fibonacci number series.
*/
#include <stdio.h>
int fibonacci(int num)
{
    // first base condition check
    if (num == 0)
    {
        return 0; // retuning 0, if condition meets
    }
    // second base condition check
    else if (num == 1)
    {
        return 1; // returning 1, if condition meets
    }
    // else calling the fibonacci() function recursively till we get to the base conditions
    else
    {
        return fibonacci(num - 1) + fibonacci(num - 2); 
    }
}

int main()
{
    int num; 
    printf("Enter the number of elements to be in the series : ");
    scanf("%d", &num); // taking user input
    int i;
    for (i = 0; i < num; i++)
    {
        printf("%d, ", fibonacci(i));
    }

    return 0;
}
