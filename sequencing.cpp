#include<iostream>
using namespace std;
int n=5,i,j,t,k;
int maxdead,maxprofit,timeslotlimit=0;
int job[10]={1,2,3,4,5};
int profit[10];
int deadline[10];


int min_fun(int x,int y)
{
    if(x<y)
    {
        return x;
    }
    else
        return y;
}
main()
{
for(i=1;i<=n;i++)
{
    cin>>profit[i];
}
for(i=1;i<=n;i++)
{
    cin>>deadline[i];
}

for(i=1;i<=n;i++)
{

    for(j=i+1;j<=n;j++)
    {
if(profit[j]>profit[i])

{
    t=profit[i];
    profit[i]=profit[j];
    profit[j]=t;


    t=deadline[i];
    deadline[i]=deadline[j];
    deadline[j]=t;

    t=job[i];
    job[i]=job[j];
    job[j]=t;

}
    }
}

maxdead=deadline[1];

for(i=2;i<=n;i++)
{
    if(deadline[i]>maxdead)
    {
        maxdead=deadline[i];
    }
}
i=1;
int timeslot[maxdead];

for(i=1;i<=n;i++)
{


while(timeslotlimit <=maxdead)
{

int k=min_fun(maxdead,deadline[i]);

if(k>=1)
   {

   if(timeslot[k]==-1)
    {
timeslot[k]=i;
timeslotlimit++;
break;
    }
    else
    {
        k--;
    }
   }

   if(timeslotlimit==maxdead)
   {
       break;
   }
}
}
}
