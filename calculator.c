

int main()
{
    int a, b;
    char c;

    printf("Enter A: ");
    scanf("%d", &a);

    printf("Enter B: ");
    scanf("%d", &b);

    printf("Enter operation (+|-|*|/): ");
    scanf("%c", &c);

    switch (c)
    {
    case '+':
        printf("%d + %d = %d\n", a, b, a + b);
        break;
    case '-':
        printf("%d - %d = %d\n", a, b, a - b);
        break;
    case '*':
        printf("%d * %d = %d\n", a, b, a * b);
        break;
    case '/':
        printf("%d / %d = %d\n", a, b, a / b);
        break;
    default:
        printf("Invalid operation.\n");

        // Ask user for all the inputs again.
        return main();
    }

    return 0;
}
