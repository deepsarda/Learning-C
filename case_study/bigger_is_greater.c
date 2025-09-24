#include <stdio.h>
#include <string.h>

void swap_char(char *a, char *b)
{
    char tmp = *a;
    *a = *b;
    *b = tmp;
}

void reverse_suffix(char *s, int l, int r)
{
    while (l < r)
    {
        swap_char(&s[l], &s[r]);
        l++;
        r--;
    }
}

int main()
{
    int t;
    scanf("%d", &t);

    char s[101];
    for (int case_no = 0; case_no < t; case_no++)
    {
        scanf(" %s", s);

        int n = (int)strlen(s);

        int i;
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

        int j;
        for (j = n - 1; j > i; j--)
        {
            if (s[j] > s[i])
                break;
        }

        swap_char(&s[i], &s[j]);
        reverse_suffix(s, i + 1, n - 1);

        printf("\n%s", s);
    }
    printf("\n");
    return 0;
}
