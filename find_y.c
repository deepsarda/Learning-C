#include <stdio.h>
#include <math.h>

int main()
{
    int x, n, y;

    printf("Enter x: ");
    scanf("%d", &x);

    printf("Enter n: ");
    scanf("%d", &n);

    switch (n)
    {
    case 1:
        y = 1 + x;
        break;
    case 2:
        y = 1 + (x / n);
        break;
    case 3:
        y = 1 + pow(x, n);
        break;
    default:
        y = 1 + n * x;
        break;
    }

    printf("Y(%d,%d) = %d\n", x, n, y);

    return 0;
}