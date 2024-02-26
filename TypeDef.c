#include <stdio.h>

// typdef <prev_name> <new_name>;

int main()
{
    typedef int i;   // int can be called by i;
    typedef char ch; // char can be called by ch;
    ch t = 'e';
    i y = 8;
    printf("%d\n", y);
    printf("%c", t);

    // typdef can be used to replace names of structures as well...

    typedef struct Student
    {
        char name[50];
        int roll_num;
        char subject[50];
        int marks;

    } std;

    struct Student s1 = {"Harry", 01, "Maths", 20};

    // below both statements are same... std is alias for struct Student
    struct Student s3, s2;
    std s4, s5;

    return 0;
}