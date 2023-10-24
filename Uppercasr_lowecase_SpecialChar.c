#include<stdio.h>
main()
{
    char ch;
    scanf("%c",&ch);
    if(ch>='A'&&ch<='Z')
    {
        printf("\nUppercase");
    }
else if(ch>='a'&&ch<='z')
    {
        printf("\nLowercase");
    }
    else
    {
        printf("\nSpecial_CHaracter");
    }
}
