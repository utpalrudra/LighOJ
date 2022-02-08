#include<stdio.h>
#include<math.h>
int main()
{
    int T, i;
    double  a, b, c;
    scanf("%d",&T);
    for(i=1;i<=T;i++){
        scanf("%lf", &a);
        b=ceil(a/2);
        c=floor(a/2);
        printf("%.0lf %.0lf\n",b,c);
        }
    return 0;
}
