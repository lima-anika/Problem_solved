#include<stdio.h>
main()
{
    double a,b,c;
    scanf("%lf",&a);
    printf("%.1lf %.1lf\n",a/log(a),1.25506*(a/log(a)));
    return 0;
}
