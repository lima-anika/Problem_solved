#include<stdio.h>
#include<string.h>
char s[1000],s1[1000];
int i=0,l,j;
void f()
{
    gets(s);

    l=strlen(s);
    l=l-1;
    s1[i]=s[l];
    i++;
    l--;
    if(i==l)
    {
puts(s1);
        return 1;
    }
    else

    {
  f();
    }
    puts(s1);


}
main()
{
    f();
}
