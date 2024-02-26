#include <stdio.h>

int main()
{
    int marks[2][3] = {{13, 23, 33}, {24, 34, 44}};

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("The marks of %d , %d element of array is %d \n", i, j, marks[i][j]);
        }
    }
// matrix form printing...

        for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d\t" ,marks[i][j]);
        }
        printf("\n");
    }

    return 0;
}
