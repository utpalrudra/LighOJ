#include<stdio.h>
int main()
{
    int t, i=1, m, a, w;
    double k, j;
    long long int n;
    scanf("%d", &t);
    while(i<=t)
    {
        a=0, w=0, j=0;
        scanf("%lld", &n);
        for(j=2; j<=n/2 ; j=j+2)
        {
            k=(n/j);
            a=(int)k;
            if(k==a)
            {
                if(a%2!=0)
                {
                    w=1;
                    break;
                }
            }
        }
        if(w==1)
            printf("Case %d: %d %.0lf\n", i, a, j);
        else
            printf("Case %d: Impossible\n", i);

        i++;
    }
    return 0;
}
