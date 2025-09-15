#include <stdio.h>

int main()
{
    char c;
    printf("Enter a character: ");
    scanf("%c", &c);

    if (c >= 'a' && c <= 'z')
    {
        printf("It is a lowercase letter.\n");
    }
    else
    {
        printf("It is NOT a lowercase letter.\n");
    }

    return 0;
}
