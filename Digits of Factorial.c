#include <stdio.h>
#include <math.h>
double ara[1000005];
int main()
{
    int test, j=1, i, n, b, l;
    double k;

    for(i=1; i<=1000000; i++)
        ara[i] = ara[i-1] + log10(i);

    scanf("%d", &test);
    do
    {
        k=0;
        scanf("%d %d", &n, &b);
//        for(i=2; i<=n; i++)
//        {
//            k=k+(log10(i)/log10(b));
//            printf("k=%d\n", k);
//        }

       // printf("k=%lf\n", ara[n]);
        k = (ara[n]/log10(b)) + 1;

        l=(int)k;
        printf("Case %d: %d\n", j, l);
        j++;
    }
    while(j<=test);
    return 0;
}
