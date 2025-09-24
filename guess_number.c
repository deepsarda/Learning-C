#include <stdlib.h>
#include <stdio.h>
#include <time.h>

int main()
{
    int guess, lucky_number;

    srand(time(NULL));

    lucky_number = (rand() % 10) + 1;

    for (int attemptsLeft = 3; attemptsLeft > 0; attemptsLeft--)
    {
        printf("\nEnter your guess (%d guess left): ", attemptsLeft);
        scanf("%d", &guess);

        if (guess > lucky_number)
        {
            printf("\nYour guess was too high!");
        }
        else if (guess < lucky_number)
        {
            printf("\nYour guess was too low!");
        }
        else
        {
            printf("\nThat was perfect! You win!\n");
            exit(1);
        }
    }

    printf("Oh no! You ran out of guesses! I win!\n");

    return 0;
}