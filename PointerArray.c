#include <stdio.h>
int main()
{
    int arr[] = {2,6,5,8,9,0,3};

    int *ptrarr = arr;

    printf("First value of arr is : %d\n" , arr[0]);

    printf("First adress of arr is : %d\n" , &arr[0]);
    printf("First adress of arr is : %d\n" , arr); // &arr[0] = arr

    printf("Second adress of arr is : %d\n" , &arr[1]);
    printf("Second adress of arr is : %d\n" , arr+1); // &arr[1] = arr+1

    printf("First value of arr is : %d\n" , *(&arr[0])); //*(&arr[0]) = *(arr)
    printf("First value of arr is : %d\n" , *(arr));

    printf("Second value of arr is : %d\n" , *(&arr[1])); //*(&arr[1]) = *(arr+1)
    printf("Second value of arr is : %d\n" , *(arr+1));

    // not valid arr++ (cannot inc dec with original array)
    //printf("First adress of arr is : %d\n" , arr++); 

    //can ve done with pointer array
    printf("Pointer array of First adress of arr is : %d\n" , ptrarr++);
    printf("Pointer array of First adress of arr is : %d\n" , ptrarr--);
    printf("Pointer array of First adress of arr is : %d\n" , ptrarr+7);
    return 0;
}