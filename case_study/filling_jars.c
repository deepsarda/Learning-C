#include <stdio.h>

int main()
{
    int N, M;

    scanf("%d %d", &N, &M);

    int total = 0;
    for (int i = 0; i < M; i++)
    {
        int a, b, k;
        scanf("%d %d %d", &a, &b, &k);

        int len = b - a + 1;
        total += len * k;
    }

    int avg = total / N; // Int division auto rounds down
    printf("%d\n", avg);

    return 0;
}
