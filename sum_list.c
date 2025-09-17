#include <stdio.h>

int main()
{

    int n, sum = 0;

    while (1)
    {

        printf("Enter the number: ");
        scanf("%d", &n);

        if (n < 0)
        {
            break;
        }

        sum += n;
    }

    printf("Sum = %d.\n", sum);

    return 0;
}