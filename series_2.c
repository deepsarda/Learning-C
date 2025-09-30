#include <stdio.h>

int main()
{

    for (int i = 4; i >= 0; i--)
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
        printf("\n");
    }
}