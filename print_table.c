#include <stdio.h>

int main()
{

    int num, num_rows, i;

    printf("Enter number to find table for: ");
    scanf("%d", &num);

    printf("Enter number of rows to print: ");
    scanf("%d", &num_rows);

    for (i = 1; i <= num_rows; i++)
    {
        printf("%d x %d = %d\n", num, i, num * i);
    }

    return 0;
}