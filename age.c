#include <stdio.h>

int main()
{
    int age;

    printf("Enter your age : ");
    scanf("%d", &age);
    printf("you entered %d as your age\n ", age);
    if (age > 18)
    {
        printf("you are eligible to VOTE!!!");
    }

    else if (age < 10)
    {
        printf("you are a minor.");
    }

    else
    {
        printf("you are NOT eligible to VOTE!!!");
    }

    return 0;
}
