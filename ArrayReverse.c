#include <stdio.h>
int main()
{
    int arr[] = {21,22,23,24,25};

    printf("The values in Array moving forward is : ");
    for (int i = 0; i < 5; i++)
    {
        printf("%d\t", arr[i]);
    }

    printf("\n");
    printf("The values in Array moving reverse is : ");
    for (int i = 4; i >= 0; i--)
    {
        printf("%d\t", arr[i]);
    }
    
    return 0;
}