#include <stdio.h>

int main()
{

    int n, j, i = 1;

    float fact, sum = 0;

    printf("Enter the number of terms to solve for: ");
    scanf("%d", &n);

    while (i <= n)
    {

        fact = 1;
        j = i;

        while (j > 0)
        {
            fact *= j;
            j--;
        }

        sum += i / fact;

        i++;
    }

    printf("The sum of the series is %0.4f.\n", sum);

    return 0;
}