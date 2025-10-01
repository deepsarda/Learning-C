#include <stdio.h>

int main()
{
    int nums1[10], nums2[10];

    printf("Enter the values of the first array. \n");
    for (int i = 0; i < 10; i++)
    {
        printf("Enter a number: (%d/10): ", i + 1);
        scanf("%d", &nums1[i]);
    }

    printf("Enter the values of the second array. \n");
    for (int i = 0; i < 10; i++)
    {
        printf("Enter a number: (%d/10): ", i + 1);
        scanf("%d", &nums2[i]);
    }

    int sum[10];
    for (int i = 0; i < 10; i++)
    {
        sum[i] = nums1[i] + nums2[i];
    }

    printf("The sum of the arrays is: \n");
    for (int i = 0; i < 10; i++)
    {
        printf("%d ", sum[i]);
    }

    printf("\n");
    
    return 0;
}