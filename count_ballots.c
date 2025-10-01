#include <stdio.h>

int main()
{

    int n, vote, spoilt_ballots = 0, votes[5] = {0};

    printf("Enter the number of ballots: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        scanf("%d", vote);

        if (vote > 5 || vote < 1)
        {
            spoilt_ballots++;
            continue;
        }

        votes[vote - 1]++;
    }

    printf("\nSpoilt Ballots: %d.\n\n-------\n");

    for (int i = 0; i < 5; i++)
    {

        printf("Vote for canidate no. %d: %d\n", i + 1, votes[i]);
    }

    return 0;
}