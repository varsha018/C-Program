#include <stdio.h>

int main(int argc, char const *argv[])
{
    printf("***************This is PoINTERS code*************\n");
    int a = 55;
    int *ptra = &a;

    printf("The value of pointer to a using percentx is %x\n" , *ptra); //% x : print hexa decimal value...
    printf("The value of pointer to a using percentp is %p\n" , *ptra); //%p :  print point value using printf..
    printf("The address of pointer to a is %p\n" , &ptra);
    printf("The address of a using percentx is %x\n" , &a);
    printf("The address of a using percentp is %p\n" , &a);
    printf("The address of a using ptra is %p\n" , ptra);
    printf("The value of a is %d \n" , a);
    printf("The value of a using *ptra is %d \n" , *ptra); // * p = a , using %d 

    return 0;
}
