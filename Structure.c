#include <stdio.h>
#include <string.h>

struct Student
{
    char name[50];
    int roll_num;
    char subject[50];
    int marks;

};

int main()
{
    
    struct Student Harry = {"Harry" , 01 , "Maths" , 20};
    struct Student Tom = {"Tom" , 02 , "Hindi" , 30};
    struct Student Peter = {"Peter" , 03 , "Science" , 40};

    printf("Harry's Details are : %s\t %d\t %s\t %d\n",Harry.name,  Harry.roll_num, Harry.subject, Harry.marks);

    strcpy(Harry.name,"Harry Gupta");
    Harry.roll_num = 9;
    strcpy(Harry.subject,"History");
    Harry.marks= 15;

    printf("Harry's Name changed to : %s\n ", Harry.name);
    printf("Harry's Roll changed to : %d\n", Harry.roll_num);
    printf("Harry's Subject changed to : %s\n ", Harry.subject);
    printf("Harry's Marks changed to : %d\n", Harry.marks);
    
    return 0;
}