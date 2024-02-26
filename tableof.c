#include <stdio.h>

int main()
{
  int a;
   printf("Enter the table number : " );
    scanf("%d" , &a);

   for(int i = 1 ; i <=10 ; i++){
    printf("\n%d X %d = %d" , a, i , a*i);
   }
    return 0;
}
