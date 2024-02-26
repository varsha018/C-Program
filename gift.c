#include <stdio.h>

int main()
{
    int MathMarks , ScienceMarks;

    printf("Enter your Maths Marks : ");
    scanf("%d" , &MathMarks );
    printf("Enter your Science Marks : ");
    scanf("%d" , &ScienceMarks );

    if (MathMarks > 30 && ScienceMarks > 30 )
    {
        printf("you get a gift coupon 45. Congrats!!");
    }
    else if (MathMarks < 30 || ScienceMarks < 30 )
    {
        printf("you get a gift coupon 15. Congrats!!");
    }
    else
    {
        printf("No gifts for you.");
    }
    

    return 0;
}
