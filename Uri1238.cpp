#include<iostream>
#include <stdio.h>
using namespace std;
main()
{
    int n,a,b,i,j;
    char st1[50];
    char st2[50];
    scanf("%d",&n);
    for (i=0;i<n;i++)
    {
        a=0;
        b=0;
        scanf("%s %s",&st1,&st2);
        for(j=0;j<50;j++)
        {
            if(st1[j]=='\0')
                a=1;
            if(st2[j]=='\0')
                b=1;
            if (a==1 && b==1)
            {
                break;
            }

            if (a==0)printf("%c",st1[j]);
            if (b==0)  printf("%c",st2[j]);
        }
        cout<<endl;
    }
    return 0;
}
