#include<stdio.h>


int main()
{
  int n,i;

  scanf("%d",&n);
  int s1[n+2];

  for(i=0;i<n;i++)
  {
     scanf("%d",&s1[i]);
  }

  int max=s1[0];

  int min=s1[0];

  int m_p,x_p;

  for(i=0;i<n;i++)
  {
    if(s1[i]>max)
    {
      max=s1[i];
      m_p=i;

    }

    if(s1[i]<min)
    {
      min=s1[i];
      x_p=i;
    }
  }

  printf(" %d \n",x_p);

  int t=s1[x_p];

  s1[x_p]=s1[m_p];

  s1[m_p]=t;

  for(i=0;i<n;i++)
  {
    printf("%d ",s1[i]);
  }
}
