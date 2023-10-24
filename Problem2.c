#include<stdio.h>
int main()
{
    long long int *x,*y,*z,*w,*m;
    long long int i,j,k;
    scanf("%lld %lld",&*x,&*y);
    lebel:
    if(*x<=*y)
    {
        goto l4;
    }
    *y=*w;
    *z=1;
    *x=*x-*w;
    for(i=*x,j=*y;i>j;i++,j--)
    {
        *m=((*z)*(*w));
        *w=*w-2;
    }
    l4:
        *z=1;
        goto lebel;
    return 0;
}
