#include <stdio.h>

int main()
{
    int num_terms_left;
    printf("Enter the number of terms: ");
    scanf("%d", &num_terms_left);

    int a = 0, b = 1, c;

    while (num_terms_left > 0)
    {
        printf("%d ", a);
        c = a + b;
        a = b;
        b = c;
        num_terms_left--;
    }

    printf("\n");
    return 0;
}