#include <stdio.h>

int main()
{
    int i, n;

    printf("Enter the number of terms to print: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        printf("%d ", i * i);
    }

    printf("\n");

    return 0;
}