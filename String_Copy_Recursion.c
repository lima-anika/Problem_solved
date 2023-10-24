#include<stdio.h>
#include<string.h>
char ch1[15]={"welcome back"};
int len=sizeof(ch1);
char ch2[15];
int j=0,i=0;
void string_copy()
{
if(i<len)
{
    ch2[j]=ch1[i];
    i++;j++;
    string_copy();
}
}

main()
{
    string_copy();
    for(i=0;i<len;i++)
    {
        printf("%c",ch2[i]);
    }
}
