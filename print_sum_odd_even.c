#include <stdio.h>

int main()
{

    int n, i, sum_even = 0, sum_odd = 0;

    printf("Enter N: ");
    scanf("%d", &n);

    for (i = 0; i <= n; i++)
    {

        if (i % 2 == 0)
        {
            sum_even += i;
        }
        else
        {
            sum_odd += i;
        }
    }

    printf("Sum of even terms = %d\nSum of odd terms = %d\n", sum_even, sum_odd);

    return 0;
}