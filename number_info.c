#include <stdio.h>

int isEven(int num)
{
    return !(num % 2);
}

int isPalindrome(int num)
{
    int rev = 0;
    int temp = num;
    while (temp)
    {
        rev = rev * 10 + temp % 10;
        temp /= 10;
    }
    return rev == num;
}

int isArmstrong(int num)
{
    int sum = 0;
    int temp = num;
    while (temp)
    {
        sum += (temp % 10) * (temp % 10) * (temp % 10);
        temp /= 10;
    }
    return sum == num;
}

int isPrime(int num)
{
    if (num <= 1)
        return 0;

    for (int i = 2; i * i <= num; i++)
    {
        if (num % i == 0)
            return 0;
    }

    return 1;
}

int main()
{

    int choice, num;

    printf("Enter a number: ");
    scanf("%d", &num);

    printf("1. Check if the number is even\n");
    printf("2. Check if the number is a palindrome\n");
    printf("3. Check if the number is an Armstrong number\n");
    printf("4. Check if the number is prime\n");
    printf("5. Exit\n");
    printf("Enter your choice(1-3): ");
    scanf("%d", &choice);

    switch (choice)
    {
    case 1:
        if (isEven(num))
            printf("%d is even\n", num);
        else
            printf("%d is odd\n", num);
        break;
    case 2:
        if (isPalindrome(num))
            printf("%d is a palindrome\n", num);
        else
            printf("%d is not a palindrome\n", num);
        break;
    case 3:
        if (isArmstrong(num))
            printf("%d is an Armstrong number\n", num);
        else
            printf("%d is not an Armstrong number\n", num);
        break;
    case 4:
        if (isPrime(num))
            printf("%d is a prime number\n", num);
        else
            printf("%d is not a prime number\n", num);
        break;
    case 5:
        return 0;
    default:
        printf("Invalid choice. Enter a number between 1-3.\n");
    }

    return main();
}