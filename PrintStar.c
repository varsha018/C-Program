#include <stdio.h>

void star(int b){

        for (int k = 0; k < b; k++)
    {
        for (int l = b; l > k; l--)
        {
            printf("*");
        }
        
        printf("\n");
    }

}
int main()
{
    int a = 10;
    int b = 10;

    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            printf("*");
        }
        
        printf("\n");
    }
    
    star(b);
    
    return 0;
}