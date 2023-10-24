#include<bits/stdc++.h>
using namespace std;

main()
{
    int ar[1200],arr[1200],i=0,j=0,k=0,n,n1,n2;
    cin>>n;
    while(n--)
    {
        cin>>n1;
        i=0;
        while(n1--)
        {
            cin>>n2;
            ar[i]=n2;
            arr[i]=n2;
            i+=1;
        }
        int k = i;

        sort(ar, ar + k, greater<int>());

        int c=0;
        for (j=0;j<k;j++)
        {
            if(ar[j]==arr[j])
            {
                c+=1;

            }
        }
        cout<<c<<endl;

    }
}
