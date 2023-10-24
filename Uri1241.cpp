#include<iostream>
#include<stdio.h>
#include<string.h>

using namespace std;
main()
{
    int n;
    char s1[1500];
    char s2[1500];
    cin>>n;
    int cont,i,j,k;
    for (i=0;i<n;i++)
    {
        cont=0;
        scanf("%s %s",&s1,&s2);
        for(j=strlen(s2)-1,k=strlen(s1)-1;j>=0;j--,k--)
        {
            if(s2[j]==s1[k])
            {

                cont++;
            }
            else
                break;
        }

        if(cont==strlen(s2))
        {
            cout<<"encaixa"<<endl;
        }
        else
            cout<<"nao encaixa"<<endl;
    }
    return 0;
}
