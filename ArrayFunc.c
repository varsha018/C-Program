#include <stdio.h>

int func(int arr1[]){

    for (int i = 0; i < 5; i++)
    {
        printf("The value at position %d is %d\n" , i, arr1[i]);
    }
}
int func1(int *ptra){

        for (int i = 0; i < 5; i++)
    {
        printf("The value at position %d using ptra is %d\n" , i, ptra[i]);
       // printf("The value at position %d using star ptra is %d\n" , i, *(ptra+i));
    }

    *(ptra + 2) = 99; // changing the value in original array

}

int func2(int arr3[2][2]){

for (int i = 0; i < 2; i++)
{
    for (int j = 0; j < 2; j++)
    {
        printf("The value at position %d , %d MultiDimension Array is :  %d\n" , i,j, arr3[i][j]);
    }
    
}


}
int main()
{
    int arr[] = {21,22,23,24,25};
    int array[2][2] = {{2,3},{4,5}};
    func(arr);
    func1(arr);
    func1(arr);
    func2(array);
    return 0;
}