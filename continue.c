#include <stdio.h>

int main()
{
    int age;
    for (int i = 0; i < 20; i++)
    {
        printf("%d\n", i);
          printf("Enter your age : ");
          scanf("%d" , &age);
        if (age < 10)
        {
            printf("you are a minor\n");
            continue;
            printf("you are a minorD\n");
        }
        printf("you are a minorA\n");
        printf("you are a minorB\n");
        printf("you are a minorC\n");
    }

    return 0;
}
