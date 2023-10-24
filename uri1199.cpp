#include<iostream>
#include<string.h>
#include<math.h>
#include<stdlib.h>
#include<cctype>

using namespace std;

int main()
{
    int digit=0,i=0,k=0,hes[50];
    char tot[100],aro[100];
    while(cin >> tot){
    digit=i=k=0;
    if(tot[0]=='-')
        break;
    if(tot[0]=='O'||tot[1]=='x')
    {
        {
            for(i=2; tot[i]!='\0'; i++)
                {
                    aro[i-2] = tot[i];
                }

        }
        aro[i-2] = '\0';
    }
    else
        digit = atoi(tot);
        if(digit==0)
        {
            int len = strlen(aro);
            int co = len;
           for(int i=0;i<len;i++)
           {
                if(aro[len-i-1]=='A')
                     digit = digit + 10 * pow(16,co-len);
                else if(aro[len-i-1]=='B')
                     digit = digit + 11 * pow(16,co-len);
                else if(aro[len-i-1]=='C')
                     digit = digit + 12 * pow(16,co-len);
                else if(aro[len-i-1]=='D')
                     digit = digit + 13 * pow(16,co-len);
                else if(aro[len-i-1]=='E')
                     digit = digit + 14 * pow(16,co-len);
                else if(aro[len-i-1]=='F')
                     digit = digit + 15 * pow(16,co-len);
                else
                     digit = digit + ((int)(aro[len-i-1])-48) * pow(16,co-len);
                co++;

           }
           cout << digit << endl;
        }
        else
        {
            while(1)
               {
                   int n,d2;
                       while(1)
                   {

                       if(digit>pow(16,i)&&digit<pow(16,i+1))
                        {
                            break;
                        }
                        if(digit<=16)
                            break;
                       i++;
                   }
                   d2 = int(digit/(pow(16,(i))));
                   hes[k]=(char)(d2);
                   k++;
                   digit = digit - (d2)*pow(16,(i));

                   if(!(digit-digit*pow(16,i)))
                    break;
                    i=0;
                }
        }

        for(int l=0; l<k; l++)
        {
            if(l==0)
                cout << "0x";
            if(hes[l]==10)
                cout << 'A';
            else if(hes[l]==11)
                cout << 'B';
            else if(hes[l]==12)
                cout << 'C';
            else if(hes[l]==13)
                cout << 'D';
            else if(hes[l]==14)
                cout << 'E';
            else if(hes[l]==15)
                cout << 'F';
            else
                cout << hes[l];
            if(l==k-1)
                cout << endl;
        }
    }

    return 0;

}
