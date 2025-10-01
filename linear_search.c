#include <stdio.h>

int main()
{
    int n, element, flag = 0;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter the elements: ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Enter the element to search for: ");
    scanf("%d", &element);

    for (int i = 0; i < n; i++)
    {
        if (arr[i] == element)
        {
            printf("The element was found at the pos %d.\n", i + 1);

            flag = 1;
        }
    }

    if (flag == 0)
    {
        printf("The element was not found in the array.");
    }

    return 0;
}