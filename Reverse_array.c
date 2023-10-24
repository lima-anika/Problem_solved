#include<stdio.h>

int main()
{
  int i,j,n=5,a[5]={34,51,87,1,20},t;

  for(i=0;i<5;i++)
  {
    printf("%d ",a[i]);
  }

  i=0;j=n-1;

   printf("\n");

  while(i!=j)
  {

    t=a[i];
    a[i]=a[j];
    a[j]=t;

    i++;
    j--;
  }

  for(i=0;i<5;i++)
  {
    printf("%d ",a[i]);
  }

}
