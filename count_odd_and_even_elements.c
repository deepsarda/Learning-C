#include <stdio.h>

int main()
{

    int nums[10];

    for (int i = 0; i < 10; i++)
    {
        printf("Enter a number: (%d/10): ", i + 1);
        scanf("%d", &nums[i]);
    }

    int even = 0;
    for (int i = 0; i < 10; i++)
    {
        if (nums[i] % 2 == 0)
        {
            even++;
        }
    }

    printf("The number of even elements is %d.\nThe number of odd elements is %d.\n", even, 10 - even);

    return 0;
}