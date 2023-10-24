#include<stdio.h>

int main()

{
  int n=5,i,a[6]={2,55,34,29,4};

  for(i=0;i<n;i++)
  {
    printf("%d ",a[i]);
  }

  int pos=0;

  for(i=pos+1;i<n;i++)
  {
    a[i-1]=a[i];
  }


  printf("\n ");

  for(i=0;i<n-1;i++)
  {
    printf("%d ",a[i]);
  }

}
