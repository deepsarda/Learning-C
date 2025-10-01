#include <stdio.h>

int main()
{

    int m, n, o;
    printf("Enter the number of order of the two matrixes. If the order of the first matrix is X*Y and the second is Y*Z, then input X Y Z: ");
    scanf("%d %d %d", &m, &n, &o);

    int matrix1[m][n], matrix2[n][o], result[m][o];

    printf("Enter the elements of the first matrix:\n");
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("Element [%d][%d]: ", i + 1, j + 1);
            scanf("%d", &matrix1[i][j]);
        }
    }

    printf("Enter the elements of the second matrix:\n");
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("Element [%d][%d]: ", i + 1, j + 1);
            scanf("%d", &matrix2[i][j]);
        }
    }

    // Set result matrix to zero
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < o; j++)
        {

            result[i][j] = 0;
        }
    }

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < o; j++)
        {

            for (int k = 0; k < n; k++)
            {
                result[i][j] += matrix1[i][k] * matrix2[k][j];
            }
        }
    }

    printf("The resultant is: \n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }

    return 0;
}