#include<stdio.h>

int main(){
    int a,b,c;

    printf("Enter A: ");
    scanf("%d", &a);

    printf("Enter B: ");
    scanf("%d", &b);

    printf("Enter C: ");
    scanf("%d", &c);

    if (a > b && a > c){
        printf("A is maximum.\n");
    }

    if (b > a && b > c){
        printf("B is maximum.\n");
    }

    if (c > b && c > a){
        printf("C is maximum.\n");
    }

    printf("Using conditional operator.\n");

    printf("%c is maximum.\n", a > b ? (a > c ? 'A' : 'C' ) : (b > c ? 'B' : 'C' ) );

    return 0;
}