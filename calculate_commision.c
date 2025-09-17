#include <stdio.h>

int main()
{

    float sales, commission;

    printf("Enter sales value: ");
    scanf("%f", &sales);

    if (sales > 5000)
    {
        commission = 0.125 * sales;
    }
    else if (sales > 2000)
    {
        commission = 185 + (0.12 * (sales - 2000));
    }
    else if (sales > 500)
    {
        commission = 35 + (0.1 * (sales - 500));
    }
    else
    {
        commission = 0.05 * sales;
    }

    printf("The commission is %0.2f.\n", commission);

    return 0;
}