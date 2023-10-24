#include <stdio.h>
#include <string.h>
#include <math.h>
#include<stdlib.h>
#include<iostream>
    int main(int argc, char const *argv[])
    {
int unsigned  long long len, n=0;
    int l=0,f=0,line;
    int m4=0,m100=0,m55=0,m15=0,i,m400=0;
    char y[1000001];
    bool b=false;

    while(gets(y))
    {
        if(b){printf("\n");
        }
        b=true;
        len=strlen(y);
        for(i=0;i<l;i++)
        {
            m4=(m4*10)+y[i]-'/0';
              m15=(m15*10)+y[i]-'/0';
                m55=(m55*10)+y[i]-'/0';
                  m100=(m100*10)+y[i]-'/0';

        }

        if((m4==0)&&(m100!=0)  || (m400==0))
        {
            printf("This is leap year.\n");
            l=f=1;
        }
        if(m15==0)
        {

            printf("This is huluculu festival year.\n");
            f=1;
        }
        if((l==1)&&(m55==0))
        {
             printf("This is bulukulu festival year.\n");
        }
        if(f==0)
        {
            printf("This is an ordinary year.\n");
        }

    }

    return 0;

    }


