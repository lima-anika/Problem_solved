#include<stdio.h>
#include<string.h>
char s[1000],s1[100];
int l,i=0,j,k=0;
void f(int l)
{
    if(l<0)
    {
        for(k=0;k<i;k++)
        {
            printf("%c",s1[k]);
        }
        return 1;
    }

if(l>=0)
{
    s1[i]=s[l];
    i++;
    l--;
    f(l);
}
}
main()
{
gets(s);
l=strlen(s);
l=l-1;
f(l);

}
