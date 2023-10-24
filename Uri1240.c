#include<stdio.h>
main()
{
    long long int a,b;
    int n;
    scanf("%d",&n);
    while(n--)
    {
        scanf("%lld %lld",&a,&b);
        if(a>=b)
        {
            while(b!=0)
            {
                if(a%10 != b%10)
                {
                     printf("nao encaixa\n");
                     goto killit;
                }
                a=a/10;
                b=b/10;
            }
            printf("encaixa\n");
        }
        else
        {
            printf("nao encaixa\n");
        }
        killit:;
    }
}
