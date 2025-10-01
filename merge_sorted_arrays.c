#include <stdio.h>

int main()
{
    int n, m;
    printf("Enter the number of elements in the first array: ");
    scanf("%d", &n);
    printf("Enter the number of elements in the second array: ");
    scanf("%d", &m);

    int arr1[n], arr2[m];

    printf("Enter the elements of the first array: ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr1[i]);
    }

    printf("Enter the elements of the second array: ");
    for (int i = 0; i < m; i++)
    {
        scanf("%d", &arr2[i]);
    }

    int arr3[n + m];
    int i = 0, j = 0, k = 0;

    while (i < n && j < m)
    {
        if (arr1[i] < arr2[j])
        {
            arr3[k++] = arr1[i++];
        }
        else
        {
            arr3[k++] = arr2[j++];
        }
    }

    // Put all the left over numbers into the merged array.
    while (i < n)
    {
        arr3[k++] = arr1[i++];
    }
    while (j < m)
    {
        arr3[k++] = arr2[j++];
    }


    printf("Merged array: ");
    for (int i = 0; i < n + m; i++)
    {
        printf("%d ", arr3[i]);
    }
    printf("\n");
}