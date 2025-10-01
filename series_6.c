#include <stdio.h>

int main()
{
    for (int i = 0; i < 28; i++)
    {
        int row = i / 7;
        int col = i % 7;
        // Remap 0-8 to 0-5
        row = row > 3 ? 6 - row : row;
        col = col > 3 ? 6 - col : col;

        if (col >= 3 - row)
        {
            printf("%d", col + row - 2);
        }
        else
        {
            printf(" ");
        }

        if (i % 7 == 6)
        {
            printf("\n");
        }
    }

    return 0;
}