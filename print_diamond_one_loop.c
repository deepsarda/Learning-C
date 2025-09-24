#include <stdio.h>

int main()
{

    for (int i = 0; i < 81; i++)
    {
        int row = i / 9;
        int col = i % 9;

        // Remap 0-8 to 0-5
        row = row > 4 ? 8 - row : row;
        col = col > 4 ? 8 - col : col;

        if (col >= 4 - row && col < 5)
        {
            printf("%d", col + row - 3);
        }
        else
        {
            printf(" ");
        }

        if (i % 9 == 8)
        {
            printf("\n");
        }
    }
}