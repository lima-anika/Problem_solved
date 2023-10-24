#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int main()
{
    int n,i,j,k,m,s,flag=0,m1;
    int arr[200][200];
    while(cin>>n)
    {
if (n==0)
        break;
else
{
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if (i==j)
                arr[i][j]=1;

        }
    }

     for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if (i==j)
                {
                    m1=j-1;
                    if (j>0)
                        flag=1;
                    if(m1<j)
                    {


                    {
                        s=arr[i][j];
                        for(k=i,m=j-1;m>=0;m--)
                        {

                            s+=+1;
                            arr[k][m]=s;

                        }
                    }
                }
                }

        }
    }

         for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if (i==j)
                {
                    if (flag==1)

                    {
                        m1=j+1;
                        s=arr[i][j];
                        if(m1>j)
                        {
                             for(k=i,m=j+1;m<n;m++)
                        {


                            s=s+1;
                            arr[k][m]=s;

                        }
                        }

                    }
                }

        }
    }



}

    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%3d",arr[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    }


}
