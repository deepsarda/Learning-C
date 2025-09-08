#include <stdio.h>

int main()
{

    char c;
    printf("Enter a character: ");
    scanf("%c", &c);

    // ASCII code for capital letters is from 65-90
    if (c >= 65 && c <= 90)
    {
        printf("%c is a capital letter.\n", c);
    }
    else if (c >= 97 && c <= 122)
    { // ASCII code for small letters
        printf("%c is a small letter.\n", c);
    }
    else if (c >= 48 && c <= 57)
    { // ASCII code for digits
        printf("%c is a digit.\n", c);
    }
    else
    { // We assume rest all to be symbols.
        printf("%c is a symbol.\n", c);
    }

    return 0;
}