#include <stdio.h>

void callByReference(int *addrA){
    *addrA = *addrA * *addrA;
}

int main()
{
    int a = 7;
    printf(" Value of a is  : %d\n " , a);
    callByReference(&a);
    printf("Changed value of a is :  %d " , a);
    return 0;
}