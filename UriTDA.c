#include<stdio.h>
#include<string.h>
int calc(int k,int l)
{
    int t,c=0;
    if(k==0)
    {
        return 0;
    }
    else if(l>k)
        {
            t=k;
            k=l;
            l=t;
        }
        while(k%l!=0)
        {
            c=k%l;
            l=c;
            k=l;
        }
        return l;
    }
main()
{
    int n1,n2,ss,d1,d2,i,s1,s2,n,res1,res2,ss1,ss2;
    char c1,c2,c3,c4,c5;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {


    scanf("%d %c %d %c %d %c %d",&n1,&c1,&d1,&c2,&n2,&c3,&d2);
    if(c2=='+')
    {
        res1=n1*d2+n2*d1;
        res2=d1*d2;
    }
    else if(c2=='-')
    {
        res1=n1*d2-n2*d1;
        res2=d1*d2;
    }
    else if(c2=='*')
    {
        res1=n1*n2;
        res2=d1*d2;
    }
    else if(c2=='/')
    {
        res1=n1*d2;
        res2=d1*n2;
    }
    ss=calc(res1,res2);
    ss1=res1/ss;
    ss2=res2/ss;

    if(ss1>0 && ss2>0)
    {
          printf("%d/%d = %d/%d\n",res1,res2,ss1,ss2);
    }

    else
    {
        if(ss2<0)
        {
            ss2=-ss2;
            ss1=-ss1;
        }
        printf("%d/%d = %d/%d\n",res1,res2,ss1,ss2);

    }

}
}
