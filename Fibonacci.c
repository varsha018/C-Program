#include <stdio.h>

// fibnocci series :  0 ,1, 1, 2, 3, 5, 8, 13, ....

int fib_recurssive(int n)
{
    if (n == 1 || n == 2)
    {
        return (n - 1);
    }
    else
    {

        return fib_recurssive(n - 1) + fib_recurssive(n - 2);
    }

}

int fib_iterative(int n)
{
int a = 0;
int b = 1;

for (int i = 0; i < n-1; i++)
{
    b = a + b ;
    a = b - a ;
}

return a;

}

int main()
{
    int num;
    printf("Enter number of which you want to find fibnocci of : ");
    scanf("%d", &num);

    printf("The fibnocci using recursive is  : %d \n", fib_recurssive(num));
    printf("The fibnocci using iterative is  : %d \n", fib_iterative(num));
    return 0;
}