#include <stdio.h>
#include <string.h>
int main()
{
    int day,month,x=0,m[14]={31,29,31,30,31,30,31,31,30,31,30,25},i;
    while(scanf("%d %d",&month,&day)!=EOF)
    {

    if((day==24)&&(month==12))
    {
        printf("E vespera de natal!\n");
    }

    else if((day>25)&&(month==12))
                    {printf("Ja passou!\n");

                     }
else if((day==25)&&(month==12))
{
printf("E natal!\n");
}


else
{
    x=m[month-1]-day;

for(i=month;i<12;i++)
{
    x=x+m[i];
}

printf("Faltam %d dias para o natal!\n",x);

}
}

}
