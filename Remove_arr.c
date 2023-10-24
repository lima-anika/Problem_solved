#include<stdio.h>

int main()
{
  int n=5,a[5]={33,54,12,4,3},i;

  for(i=0;i<5;i++)
  {
    printf("%d ",a[i]);
  }

  int pos=2;

  printf("\n");

  for(i=pos;i<n-1;i++)
  {
    a[i]=a[i+1];
  }

   for(i=0;i<5-1;i++)
  {
    printf("%d ",a[i]);
  }
}
