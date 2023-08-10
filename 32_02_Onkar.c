/*
Author Name=Onkar Anant Lambade
Date = 6/8/2023
Branch = I.T.
Roll No=32
Program =02
Description=Write a C program to generate Pascal Triangle using array.
*/
#include<stdio.h>
int main()
{
	int arr[50][50];
	int i=0,j=0,n=0;
	printf("Enter Number of Lines:");
	scanf("%d",&n);
	for (i = 0;i < n; i++)
	{
		for (j = 0;j < n - 1 - i; ++j)
			printf(" ");
	
		for(j = 0;j <= i; ++j)
		{
			if(j == 0 || j == i)
				arr[i][j]= 1;
			else
				arr[i][j]=arr[i - 1][j - 1] + arr[i - 1][j];
				printf("%d ",arr[i][j]);
		}
		printf("\n");
	}
	return 0;
}