#include <stdio.h>

int main()
{
    int a, b, c;

    printf("Enter A: ");
    scanf("%d", &a);

    printf("Enter B: ");
    scanf("%d", &b);

    printf("Enter C: ");
    scanf("%d", &c);

    printf("%c is maximum.\n", a > b ? (a > c ? 'A' : 'C') : (b > c ? 'B' : 'C'));

    return 0;
}