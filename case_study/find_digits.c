#include <stdio.h>

int main()
{
    int t, count = 0;
    scanf("%d", &t);

    for (int case_no = 0; case_no < t; case_no++)
    {
        int n;
        scanf("%d", &n);

        int orig = n;

        while (n > 0)
        {

            if (orig % (n % 10) == 0)
                count++;
            n = n / 10;
        }
    }

    printf("%d\n", count);
}