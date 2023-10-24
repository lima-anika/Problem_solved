#include<cstdio>
#include<algorithm>
using namespace std;
#define FOR(i,n) for(i=0;i<n;++i)
int par[1000001];
int impar[1000001];
int main()
{
    int n,a,xp=0,xi=0,i;
    scanf("%d",&n);
    FOR(i,n)
    {
        scanf("%d",&a);
        if(a%2==0)
        {
            par[xp]=a;
            xp++;
        }
        else
        {
             impar[xi]=a;
            xi++;
        }
    }
    sort(par,par+xp);
    sort(impar,impar+xi);

    FOR(i,xp){printf("%i\n",par[i]);}
     FOR(i,xi){printf("%i\n",impar[xi-i-1]);}
}
