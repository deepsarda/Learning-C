#include <stdio.h>
#include <math.h>

int main()
{
    int n, orig, reversed = 0;

    printf("Enter the number: ");
    scanf("%d", &n);

    orig = n;

    while (n > 0)
    {
        reversed = reversed * 10 + (n % 10);

        n = n / 10;
    }

    if (orig == reversed)
    {

        printf("%d is a palindrome number.\n", orig);
    }
    else
    {
        printf("%d is not a palindrome number.\n", orig);
    }

    return 0;
}