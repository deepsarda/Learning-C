#include <stdio.h>
#include <limits.h>
int main()
{

    int n, i, first = INT_MIN, second = INT_MIN;

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
        if (nums[i] > first)
        {
            second = first;
            first = nums[i];
        }
        else if (nums[i] > second)
        {
            second = nums[i];
        }
    }

    printf("The maximum number = %d\nThe second maximum number = %d\n", first, second);

    return 0;
}