#include<stdio.h>
//#include<math.h>
#define pi 3.14159
int main()
{
    int T, i;
    double a, s, c, r;
    scanf("%d", &T);
    for (i=1;i<=T;i++){
        scanf("%lf",&r);
        a=((4.0/3)*pi*r*r*r);
        printf("%0.3lf\n", a);
    }
    return 0;
}
