#include<stdio.h>
#include<string.h>
char ch[10];
int n,i,c=0,len=0;


main()
{
    gets(ch);
    puts(ch);
    int n=strlen(ch);
    printf("\n %d",n);
    for(i=0;i<n;i++)
    {
        if(ch[i]=='1' || ch[i]=='2')
        {
            if(i+1<n)
            {
                if(ch[i+1]<'7')
                {
                    c++;
                    printf("\n %d",c);
                }
            }
        }

        else if(ch[i-1]>'6' && ch[i]<'6')
        {
            c++;
            printf("\n %d",c);
        }
         if('1'<=ch[i+1]<='2' && '1'<=ch[i+2]<='6' && i+2<n-1)
        {
            c++;
        }
    }
    if(len==n)
    {
        printf(" 1 ");
    }
    else
    {
        printf("\n count %d",c);
    }
}
