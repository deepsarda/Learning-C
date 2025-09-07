#include<stdio.h>

float get_marks(char *subject_name, int max_marks){
    float marks;
    
    while(1) {
        printf("Enter %s marks: ", subject_name);
        scanf("%f", &marks);

        if((marks > max_marks || marks<0)){
            printf("Entered marks should be within [0,%d].\n", max_marks);
            continue;
        }
        break;
    }

    return marks;
}

int main(){

    float cutoff_marks, math_marks, chemistry_marks, physics_marks, entrance_marks;
    
    math_marks = get_marks("maths", 200);
    chemistry_marks = get_marks("chemistry", 200);
    physics_marks = get_marks("physics", 200);
    entrance_marks = get_marks("entrance exam", 100);

    cutoff_marks = math_marks/2 + physics_marks/2 + chemistry_marks/2 + entrance_marks;
    printf("The cutoff marks are %f.\n", cutoff_marks);

    return 0;
}
