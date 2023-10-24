#include<stdio.h>
main()
{
    double a,b=0,c,d;
    scanf("%lf",&a);
    while(a--)
    {
        b=b+2;
        b=1/b;
    }
    b=1+b;
    printf("%.10lf\n",b);
}
