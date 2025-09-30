#include <stdio.h>
#include <math.h>

int main()
{
    double hatSizes[] = {
        6.5, 6.625, 6.75, 6.875,
        7.0, 7.125, 7.25, 7.375,
        7.5, 7.625, 7.75, 7.875};

    int numSizes = 12;

    double circumferences[numSizes];
    for (int i = 0; i < numSizes; i++)
    {
        circumferences[i] = hatSizes[i] * M_PI; // cm = hat size × π
    }

    double headCm;
    printf("Enter the circumference of your head in cm: ");
    scanf("%lf", &headCm);

    int found = 0;

    for (int i = 0; i < numSizes; i++)
    {
        if (headCm <= circumferences[i])
        {
            printf("Your US/UK hat size is approximately %.3f\n", hatSizes[i]);
            found = 1;
            break;
        }
    }

    if (!found)
    {
        printf("Sorry, your head size is outside the typical hat size range!\n");
    }
}