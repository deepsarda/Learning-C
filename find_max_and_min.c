#include <stdio.h>
#include <limits.h>
int main()
{

    int n, i, max = INT_MIN, min = INT_MAX;

    printf("Enter number of elements in array: ");
    scanf("%d", &n);

    int nums[n];

    for (i = 0; i < n; i++)
    {
        printf("Enter element (%d/%d): ", i + 1, n);
        scanf("%d", &nums[i]);
    }

    for (i = 0; i < n; i++)
    {
        if (nums[i] > max)
        {
            max = nums[i];
        }

        if (nums[i] < min)
        {
            min = nums[i];
        }
    }

    printf("The maximum number = %d\nThe minimum number = %d\n", max, min);

    return 0;
}