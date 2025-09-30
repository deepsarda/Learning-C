#include <stdio.h>

int main()
{

    int nums[10];

    for (int i = 0; i < 10; i++)
    {
        printf("Enter a number: (%d/10): ", i + 1);
        scanf("%d", &nums[i]);
    }

    int sum = 0;
    for (int i = 0; i < 10; i++)
    {
        sum += nums[i];
    }

    printf("The sum of the numbers is %d", sum);
}