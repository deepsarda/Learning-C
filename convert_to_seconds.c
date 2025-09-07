#include<stdio.h>

int main(){
    int hours, minutes, seconds, total_seconds;

    printf("Enter the time in the format <hours>:<minutes>:<seconds>. Example for 1 hours, 10 minutes and 15 seconds is 1:10:15.\nEnter the value: ");
    scanf("%d:%d:%d", &hours, &minutes, &seconds);

    // Total seconds = Hours * 60 * 60 (First 60 converts to minutes, the next one to seconds) + Minutes * 60 + Seconds
    total_seconds = hours * 60 * 60 + minutes * 60 + seconds;

    printf("The total number of seconds is %ds.\n", total_seconds);

    return 0;
}