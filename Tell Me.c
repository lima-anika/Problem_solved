#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    long long x,a[10005];

    int t,n,i;

    scanf("%d",&t);

    while(t>0)
    {
      scanf("%d",&n);

      for(i=0;i<n;i++)
      {
        scanf("%lld",&a[i]);
      }
      scanf("%lld",&x);

      int f=0;

       for(i=0;i<n;i++)
      {
        if(a[i]==x)
        {
          printf("YES\n");
          f=1;
          break;
        }
      }

      if(f==0)
      {
         printf("NO\n");
      }

      t--;
    }
    return 0;
}

