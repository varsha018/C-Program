#include <stdio.h>

int main(int argc, char const *argv[])
{   
    int age;
    printf("Enter your age : ");
    scanf("%d",&age);
switch (age)
{
case 3:
    printf("Age is 3");
    break;

case 13:
    printf("Age is 13");
    break;

case 23:
    printf("Age is 23");
    break;

default:
printf("Age is not 3, 13, 23");
    break;
}

    return 0;
}
