#include <stdio.h>

int main()
{

    int nums[10];

    for (int i = 0; i < 10; i++)
    {
        printf("Enter a number: (%d/10): ", i + 1);
        scanf("%d", &nums[i]);
    }

    int positive = 0, negative = 0, zeros = 0;

    for (int i = 0; i < 10; i++)
    {
        if (nums[i] > 0)
        {
            positive++;
        }
        else if (nums[i] == 0)
        {
            zeros++;
        }
        else
        {
            negative++;
        }
    }

    printf("The number of positive elements is %d.\nThe number of zero elements is %d.\nThe number of negative elements is %d.\n", positive, zeros, negative);

    return 0;
}