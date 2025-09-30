#include <stdio.h>
#include <string.h>

int main()
{
    int t, i, j, n, l, r;
    scanf("%d", &t);

    char s[101], tmp;
    for (int case_no = 0; case_no < t; case_no++)
    {
        scanf(" %s", s);

        n = (int)strlen(s);


        for (i = n - 2; i >= 0; i--)
        {
            if (s[i] < s[i + 1])
                break;
        }

        if (i < 0)
        {
            printf("\nno answer");
            continue;
        }

        for (j = n - 1; j > i; j--)
        {
            if (s[j] > s[i])
                break;
        }

        tmp = s[i];
        s[i] = s[j];
        s[j] = tmp;
        

        l = i + 1;
        r = n - 1;

        while (l < r)
        {
            tmp = s[l];
            s[l] = s[r];
            s[r] = tmp;
            l++;
            r--;
        }

        printf("\n%s", s);
    }
    printf("\n");
    return 0;
}
