#include<iostream>
#include<math.h>
using namespace std;
main()
{
    int i,n,x,y;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>x>>y;

        int x1=pow((3*x),2)+pow(y,2);



         int x2=(2*x*x)+(5*5*y*y);



          int x3=(y*y*y)-(100*x);


          if((x1>x2)&&(x1>x3))
          {
              cout<<"Rafael ganhou"<<endl;
          }
          else if((x2>x1)&&(x2>x3))

          {
               cout<<"Beto ganhou"<<endl;
          }
          else

          {
               cout<<"Carlos ganhou"<<endl;
          }
    }
    return 0;
}
