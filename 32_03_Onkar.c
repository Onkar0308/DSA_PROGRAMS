/*
Author Name=Onkar Anant Lambade
Date = 6/8/2023
Branch = I.T.
Roll No=32
Program =03
Description=Write a C program to roll_no, name , percentange of 5 students using array of structure and display the records in ascending order of roll list.
*/
#include <stdio.h>
#include <string.h>

struct Student {
    int roll_no;
    char name[50];
    float percentage;
};

int compare(const void *a, const void *b) {
    return ((struct Student *)a)->roll_no - ((struct Student *)b)->roll_no;
}

int main() {
    struct Student students[5];

    for (int i = 0; i < 5; i++) {
        printf("Enter details for student %d:\n", i + 1);
        printf("Roll Number: ");
        scanf("%d", &students[i].roll_no);
        printf("Name: ");
        scanf("%s", students[i].name);
        printf("Percentage: ");
        scanf("%f", &students[i].percentage);
    }

    qsort(students, 5, sizeof(struct Student), compare);

    printf("\nStudent Records (Sorted by Roll Number):\n");
    printf("Roll No\tName\tPercentage\n");
    for (int i = 0; i < 5; i++) {
        printf("%d\t%s\t%.2f\n", students[i].roll_no, students[i].name, students[i].percentage);
    }
    
    return 0;
}