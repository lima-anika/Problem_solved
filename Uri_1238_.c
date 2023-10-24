
#include<stdio.h>


int main()
{
    int i,j,a,a1,n;
    char one[100];

    char two[100];

    scanf("%d",&n);

    for(i=0;i<n;i++)
    {

        a=0;
        a1=0;
        scanf("%s %s",&one,&two);
    for(j=0;j<50;j++)
    {
        if(one[j]=='')
            a=1;

         if(two[j]=='')
            a1=1;
        if ((a==1) && (a1==1))
            break;
         if(a==0)
            printf("%c",one[j]);
         if(a1==0)
            printf("%c",two[j]);
    }
    printf("\n");

    }


}
