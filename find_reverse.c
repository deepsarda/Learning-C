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

    printf("The reverse of %d is %d.\n", orig, reversed);

    return 0;
}