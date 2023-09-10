/*
Author Name=Onkar Anant Lambade
Date = 6/8/2023
Branch = I.T.
Roll No=32
Program =07
Description=Define a structure data type called time_struct containing 3 members int hour, int
minute and int second. Write functions that accept the structure to perform the
following operations:
1. Input new time
2. Display the time
3. Update the time such that the function accepts the time_struct and
increments the time by one second.(If the increment results in 60 seconds, the then
second member is set to 0 and the minute is incremented by 1. Then, if the result is 60
minutes, the minute member is set to 0 and the hour member is incremented by 1.
Finally when the hour becomes 24, it is set to zero.)
*/
#include <stdio.h>

struct time_struct {
    int hour;
    int minute;
    int second;
};

void inputTime(struct time_struct *time) {
    printf("Enter hour: ");
    scanf("%d", &time->hour);
    printf("Enter minute: ");
    scanf("%d", &time->minute);
    printf("Enter second: ");
    scanf("%d", &time->second);
}

void displayTime(const struct time_struct time) {
    printf("Time: %02d:%02d:%02d\n", time.hour, time.minute, time.second);
}

struct time_struct updateTime(struct time_struct time) {
    time.second++;
    if (time.second == 60) {
        time.second = 0;
        time.minute++;
        if (time.minute == 60) {
            time.minute = 0;
            time.hour++;
            if (time.hour == 24) {
                time.hour = 0;
            }
        }
    }
    return time;
}

int main() {
    struct time_struct myTime;
    inputTime(&myTime);
    
    printf("Initial ");
    displayTime(myTime);
    
    myTime = updateTime(myTime);
    printf("After incrementing by one second: ");
    displayTime(myTime);
    
    return 0;
}
