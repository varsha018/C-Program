#include <stdio.h>
int main()
{
    int a = 65;
    int *ptrb = &a;

    printf("Address of a is %p\n" , ptrb);
    printf("Address of a is %d\n" , ptrb);
    printf("Address of a+1 is %p\n" , ptrb+1);// 4 int size space, pointer inc and dec as per int size (4 byte)
    printf("Address of a+2 is %d\n" , ptrb+2);
    printf("Address of a-2 is %d\n" , ptrb-2);

    char b = '6';
    char *ptra = &b;

    printf("Address of b is %p\n" , ptra);
    printf("Address of b is %d\n" , ptra);
    printf("Address of b+! is %d\n" , ptra+1); // 1 char space, pointer inc and dec as per char size (1 byte)

    return 0;
}