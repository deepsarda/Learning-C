#include <stdio.h>

int main()
{

    int units;
    float cost;

    printf("Enter units consumed: ");
    scanf("%d", &units);

    if (units > 600)
    {
        cost = 425 + (1.25 * (units - 600));
    }
    else if (units > 400)
    {
        cost = 230 + (0.80 * (units - 400));
    }
    else if (units > 200)
    {
        cost = 100 + (0.65 * (units - 200));
    }
    else
    {
        cost = 0.5 * units;
    }

    printf("The cost is Rs %0.2f.\n", cost);

    return 0;
}