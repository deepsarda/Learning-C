#include <stdio.h>

int main()
{

    for (int i = 4; i > 0; i--)
    {
        for (int j = 1; j <= 5; j++)
        {

            if (j <= i)
            {
                printf(" ");
            }
            else
            {
                printf("%d", j - i);
            }
        }

        for (int j = 4 - i; j > 0; j--)
        {
            printf("%d", j);
        }

        printf("\n");
    }

    for (int i = 0; i < 5; i++)
    {
        for (int j = 1; j <= 5; j++)
        {

            if (j <= i)
            {
                printf(" ");
            }
            else
            {
                printf("%d", j - i);
            }
        }

        for (int j = 4 - i; j > 0; j--)
        {
            printf("%d", j);
        }

        printf("\n");
    }
}