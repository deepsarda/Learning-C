#include <stdio.h>

int main()
{
    int n, orig, sum = 0;

    printf("Enter the number: ");
    scanf("%d", &n);
    orig = n;

    while (n / 10)
    {
        sum = 0;
        while (n > 0)
        {
            sum += (n % 10);

            n = n / 10;
        }

        n = sum;
    }

    printf("The sum of digits of %d is %d.\n", orig, n);

    return 0;
}