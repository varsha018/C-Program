#include <stdio.h>

int main()
{
    int input;
    float first, second;
    float kmtoMile = 0.876;
    float inchtoFoot = 0.098;
    float cmtoInch = 0.986;
    float poundtoKg = 0.453;

    while (1)
    {
        printf("Choose the Options from below : \n 1- kmtoMile \n 2- inchtoFoot \n 3- cmtoInch \n 4- poundtoKg \n 5- Quit \n ");
        scanf("%d", &input);

        printf("Enter the value you want to convert : ");
        scanf("%f", &first);

        switch (input)
        {
        case '1':
            second = first * kmtoMile;
            printf("%f kms is equal to %f miles", first, second);
            break;

        case '2':
            second = first * inchtoFoot;
            printf("%f inch is equal to %f foot", first, second);
            break;

        case '3':
            second = first * cmtoInch;
            printf("%f cms is equal to %f inch", first, second);
            break;

        case '4':
            second = first * poundtoKg;
            printf("%f pound is equal to %f kgs", first, second);
            break;

        case '5':
            goto end;
            break;

        default:
            break;
        }

    end: 
    //printf("Quitting the program...");
        

        return 0;
    }
}
