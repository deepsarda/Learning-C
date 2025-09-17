#include <stdio.h>
#include <math.h>

int main()
{
    int n, orig, num_digits, sum = 0;

    printf("Enter the number: ");
    scanf("%d", &n);

    orig = n;

    num_digits = floor(log10(n) + 1);

    while (n > 0)
    {
        sum += pow(n % 10, num_digits);

        n = n / 10;
    }

    if (orig == sum)
    {

        printf("%d is an Armstrong number.\n", orig);
    }
    else
    {
        printf("%d is not an Armstrong number.\n", orig);
    }

    return 0;
}