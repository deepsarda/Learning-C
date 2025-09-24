#include <stdio.h>
#include <string.h>

int main()
{
    int N, size, index, i, rock_no, no_gem_elements = 0;

    scanf("%d", &N);

    int elements[26] = {0}; // Counts how many times each letter (aka "element") appears.

    char s[101];

    for (rock_no = 0; rock_no < N; rock_no++)
    {
        scanf(" %s", s);

        size = (int)strlen(s);

        int rock_chars[26] = {0};

        for (int i = 0; i < size; i++)
        {
            int index = s[i] - 'a';
            rock_chars[index] = 1;
        }

        for (int i = 0; i < 26; i++)
        {
            if (rock_chars[i] == 1)
            {

                elements[i]++;
            }
        }
    }

    for (i = 0; i < 26; i++)
    {
        if (elements[i] == N)
            no_gem_elements++;
    }

    printf("\n%d\n", no_gem_elements);
}
