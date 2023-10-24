#include<stdio.h>
int main()
{
    int l,c,r1,r2,w,ww,L;
    scanf("%d%d%d%d",&l,&c,&r1,&r2);
    L=(r1+r2)*2;

    w=r1*2;
    ww=r2*2;
    if(l>c)
    {
        if(l>=L && c>=(w||ww))
        {
            printf("S");
        }
        else printf("N");
    }
    else if(c>l)
    {
        if(c>=L && l>=(w||ww))
        {
            printf("S");
        }
        else printf("N");
    }
    else if(c==l)
    {
        if(l>=L && c>=(w||ww))
        {
            printf("S");
        }
        else if(c>=L && l>=(w||ww))
        {
            printf("S");
        }
        else printf("N");
    }

return 0;

}
