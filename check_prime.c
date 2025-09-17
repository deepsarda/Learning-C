#include <stdio.h>

int main()
{

    int n, i;

    printf("Enter the number: ");
    scanf("%d", &n);

    for (i = 2; i <= n / 2; i++)
    {

        if (n % i == 0)
        {
            printf("%d is not a prime number!\n", n);
            return 0;
        }
    }

    printf("%d is a prime number.\n", n);

    return 0;
}