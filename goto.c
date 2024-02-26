#include <stdio.h>

int main()
{
    for (int i = 0; i < 10; i++)
    {
        printf("This is i  = %d loop\n" , i);
        printf("Inside i loop\n");

        for (int j = 0; j < 10; j++)
        {
            printf("This is j  = %d loop\n" , j);
            printf("Inside j loop\n");

            if (j == 3)
            {
                goto end;
            }
            
        }
        
    }
    
    end: printf ("we are ending this pgm.");
    return 0;
}
