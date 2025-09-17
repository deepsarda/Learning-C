#include <stdio.h>

int main()
{
    int n, i = 1;

    printf("Enter the number of terms: ");
    scanf("%d", &n);

    while (i <= 2 * n)
    {
        printf("%d ", i);
        i += 2;
    }

    printf("\n");
    return 0;
}