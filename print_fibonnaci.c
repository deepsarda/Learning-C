
void print_fibo(int terms)
{
    int a = 0, b = 1, c;
    printf("%d %d ", a, b);
    for (int i = 2; i < terms; i++)
    {
        c = a + b;
        printf("%d ", c);
        a = b;
        b = c;
    }
    printf("\n");
}

int main()
{
    print_fibo(5);
    print_fibo(10);
    print_fibo(15);
}