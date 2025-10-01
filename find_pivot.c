#include <stdio.h>

int main()
{
    int n, pivot = -1;
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter the elements: ");

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    int l = 0, r = n - 1;

    while (r > l)
    {
        int mid = (r + l) / 2;

        if (arr[mid] > arr[mid + 1])
        {
            pivot = mid + 1;
            break;
        }

        if (arr[l] < arr[mid])
        {
            l = mid + 1;
        }
        else
        {
            r = mid - 1;
        }
    }

    if (pivot == -1)
    {
        printf("Pivot was not found in the array.\n");
    }
    else
    {
        printf("Pivot was found at the position %d. \n", pivot + 1);
    }

    return 0;
}