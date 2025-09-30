#include <stdio.h>

int main()
{

    int n, sum = 0;

    do
    {

        printf("Enter the number: ");
        scanf("%d", &n);

        if (n > 0)
            sum += n;
    } while (n > 0);

    printf("Sum = %d.\n", sum);

    return 0;
}