#include <stdio.h>

int main()
{
    for (int i = 0; i < 5; i++)
    {
        for (int s = 0; s < 5 - i - 1; s++)
        {
            printf(" ");
        }
        for (int j = 0; j < 2 * i + 1; j++)
        {
            printf("*");
        }

        printf("\n");
    }

    return 0;
}