#include<stdio.h>

int main(){

    int seconds, minutes, hours, days, total_seconds, total_minutes, total_hours;

    printf("Enter total number of seconds: ");
    scanf("%d", &total_seconds);

    seconds = total_seconds % 60;

    total_minutes = total_seconds / 60;
    minutes = total_minutes % 60;

    total_hours = total_minutes / 60;
    hours = total_hours % 24;

    days = total_hours / 24;
    
    printf("The period of revolution is %d days %d hr %d min %d s.\n", days, hours, minutes, seconds);

}