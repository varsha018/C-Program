#include <stdio.h>
int main()
{
    typedef int i; // int can be called by i;
    typedef char ch; // char can be called by ch;
    ch t='e';
    i y=8;
    printf("%d\n" , y );
    printf("%c" , t );
    return 0;
}