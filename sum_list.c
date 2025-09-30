#include <stdio.h>

int main()
{

    int n, sum = 0;

    while (n > 0)
    {

        printf("Enter the number: ");
        scanf("%d", &n);

        if (n > 0)
            sum += n;
    }

    printf("Sum = %d.\n", sum);

    return 0;
}