#include <stdio.h>
#include <string.h>


int main(){

    char str1[] = "Varsha";
    char str2[] = "Ayushi";
    char str3[] = "Shivam";
    char str4[20];

   // puts(strcat(str2,str3));

    printf(" The length of str1 is  : %d \n " , strlen(str1));
    printf("The length of str2 is  : %d \n " , strlen(str2));
    printf("The length of str3 is  : %d \n " , strlen(str3));

    printf("The reverse of str1 is : %s \n " , strrev(str1));
    printf("The reverse of str2 is : %s \n " , strrev(str2));
    printf("The reverse of str3 is : %s \n " , strrev(str3));
    
    printf("Copy str2 into str4    : %s\n" , strcpy(str4, str2));
    
    printf("Compare str1 and str4    : %d\n" , strcmp(str1, str4));
    printf("Compare str2 and str4    : %d\n" , strcmp(str4, str2));
    
    
    return 0;
}