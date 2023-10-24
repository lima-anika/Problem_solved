#include <stdio.h>
#include <math.h>

int abss(int a)
{
    return a<0 ? -a : a;
}


main()
{
    int x1,y1,x2,y2,x3,y3;
scanf("%d",&x1);
scanf("%d",&y1);
scanf("%d",&x2);
scanf("%d",&y2);
    while(x1!=0 && y1!=0 &&x2!=0 &&y2!=0)
    {
if((x1==x2)&&(y1==y2))
{
    printf("0\n");
}
else if((x1==x2)||(y1==y2))
{
     printf("1\n");
}
else
{
    x3=abss(x1-x2);
    y3=abss(y1-y2);
    if(x3-y3==0)
    {
         printf("1\n");
    }
    else
    {
         printf("2\n");
    }
}

scanf("%d",&x1);
scanf("%d",&y1);
scanf("%d",&x2);
scanf("%d",&y2);
    }
}
