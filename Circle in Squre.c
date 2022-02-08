#include<stdio.h>
#include<math.h>
#define pi 2*acos(0.0)
int main()
{
    int i, T;
    double a, b, s, c, r;
    scanf("%d",&T);
    for(i=1; i<=T; i++)
    {
        scanf("%lf",&r);
        c = (pi*r*r);
        s = (4*r*r);
        a = (s-c);
        printf("Case %d: %0.2lf\n", i, a);

    }

    return 0;

}
