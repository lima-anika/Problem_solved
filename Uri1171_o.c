#include<stdio.h>
#include<string.h>
#define N 2001
int main()
{
      int t,n,i,j;
      int arr[N];
                  while(scanf("%d",&t)==1){
                        memset(arr,0,sizeof arr);
                              for(i=1;i<=t;i++){
                                    scanf("%d",&n);
                                    arr[n]++;
                                    }
                                    for(i=0;i<N;i++)
                                          for(j=0;j<arr[i];j++){
                                                if(arr[i]>0)
                                                printf("%d aparece %d vez(es)\n",i,arr[i]);
                                                break;
                                          }
                  }
      return 0;
}
