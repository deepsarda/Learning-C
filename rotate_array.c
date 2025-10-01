#include <stdio.h>

int main()
{
    int len;
    printf("Enter the number of elements: ");
    scanf("%d", &len);

    int arr[len];
    printf("Enter the elements: ");

    for (int i = 0; i < len; i++)
    {
        scanf("%d", &arr[i]);
    }

    int n;
    printf("Enter the number of positions to rotate by: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        int temp = arr[0];
        for (int j = 0; j < len - 1; j++)
        {
            arr[j] = arr[j + 1];
        }
        arr[len - 1] = temp;
    }

    printf("\nRotated array: ");
    for (int i = 0; i < len; i++)
    {
        printf("%d ", arr[i]);
    }

    printf("\n");
    return 0;
}
