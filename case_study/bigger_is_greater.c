#include <stdio.h>
#include <strings.h>
#include <stdlib.h>

int compare_chars(const void *a, const void *b)
{
    return (*(char *)a - *(char *)b);
}

int main()
{
    int t, i;

    scanf("%d", &t);

    char words[t][101];

    for (i = 0; i < t; i++)
    {
        scanf("%s", &words[i]);
    }

    for (i = 0; i < t; i++)
    {
        char original[101];

        strcpy(original, words[i]);

        qsort(words[i], strlen(words[i]), sizeof(char), compare_chars);

        printf("%s -- %s", original, words[i]);
    }

    return 0;
}