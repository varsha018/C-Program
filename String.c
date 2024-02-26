#include <stdio.h>

void PrintStr(char str[])
{
    int i = 0;
    while (str[i] != '\0')
    {
        printf("%c", str[i]);
        i++;
    }
}

int main()
{
    char str[] = {'v', 'a', 'r', 's', 'h', 'a', 'V', 'G', '\0'};
    PrintStr(str);

    printf("\n");

    char str1a[6] = "ayushi";
    printf("%s", str1a); // Not working correctly

    printf("\n");

    char string[10];
    gets(string);
    printf("using printf : %s\n", string);
    printf("using puts : \n");
    puts(string);

    return 0;
}