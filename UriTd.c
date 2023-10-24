#include<stdio.h>

int ratn(int k, int l)
{
    int t, c;
    if(k==0)
    {
        return 0;
    }
    else if(l>k)
    {
        t = k;
        k = l;
        l = t;
    }
    while(k%l!=0)
    {
        c = k%l;
        k = l;
        l = c;
    }
    return l;
}

int main()
{
    int n1, n2, d1, d2, n, i, s1, s2, ss1, ss2, res;
    char a, b, c;
    scanf("%d",&n);
    for(i=1; i<=n; i++)
    {
        scanf("%d %c %d %c %d %c %d",&n1,&a,&d1,&b,&n2,&c,&d2);
        if(b=='+')
        {
            s1 = n1*d2 + n2*d1;
            s2 = d1*d2;
        }
        else if(b=='-')
        {
            s1 = n1*d2 - n2*d1;
            s2 = d1*d2;
        }
        else if(b=='*')
        {
            s1 = n1*n2;
            s2 = d1*d2;
        }
        else if(b=='/')
        {
            s1 = n1*d2;
            s2 = d1*n2;
        }
        res = ratn(s1,s2);
        ss1 = s1/res;
        ss2 = s2/res;
        if(ss1>0 && ss2>0)
        {
            printf("%d/%d = %d/%d\n",s1,s2,ss1,ss2);
        }
        else
        {
            if(ss2<0)
            {
                ss1 = -ss1;
                ss2 = -ss2;
            }
            printf("%d/%d = %d/%d\n",s1,s2,ss1,ss2);
        }
    }
    return 0;
}
