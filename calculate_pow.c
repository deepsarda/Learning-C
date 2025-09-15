#include <stdio.h>

int main()
{
    int base, exponent;
    int result = 1;

    printf("Enter base: ");
    scanf("%d", &base);

    printf("Enter exponent: ");
    scanf("%d", &exponent);

    for (int i = 0; i < exponent; i++)
    {
        result *= base;
    }

    printf("%d^%d = %d\n", base, exponent, result);

    return 0;
}
