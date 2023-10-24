#include<stdio.h>
#include<string.h>
char ch[10]={"sts"};
char ch1[10]={"sts"};
int len=sizeof(ch);

int i=0,j=2;
void pall()
{
if(ch[i]==ch1[j])
{
    i++;j--;
    pall();
}
if(ch[i]!=ch1[j])
{
     printf("%c  \n",ch[i]);
      printf("%c  \n", ch1[j]);
    printf("%d %d \n",i,j);
    printf("not");
}
}
int main()
{
    printf(" Len %d\n",len);
    pall();
}
