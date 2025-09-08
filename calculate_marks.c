#include<stdio.h>

int main(){

    int total_marks = 0;
    int marks;
    int i;
    float percentage;

    for(i = 0; i < 5; i++){
        printf("Enter marks for subject %d: ", i+1);
        scanf("%d",&marks);

        if (marks > 100 || marks < 0) {
            printf("Entered marks should be within [0,100].\n");
            i--;
            continue;
        }

        total_marks += marks;
    }

    printf("\nTotal marks obtained: %d/500", total_marks);

    // Percentage = (Total Marks / Max Marks (500)) * 100 can be simplified into Total Marks / 5
    percentage = total_marks / 5.0;

    printf("\nPercentage: %f%%\n", percentage);

    if(percentage >= 95){
        printf("Division: S");
    }else if(percentage >= 85){
        printf("Division: A");
    }else if(percentage >= 75){
        printf("Division: B");
    }else if(percentage >= 65){
        printf("Division: C");
    }else if(percentage >= 55){
        printf("Division: D");
    }else if(percentage >= 45){
        printf("Division: E");
    }else{
        printf("Division: F");
    }

    return 0;
}