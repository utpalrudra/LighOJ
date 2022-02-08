#include <stdio.h>
int main()
{
    int i, j, t, a=1;
    long long  l, h, kount, sum1, sum2=0;
    scanf("%d", &t);
    do
    {
        kount=0, sum1=0;
        scanf("%lld %lld", &l, &h);

        for(i=1; i<=l; i++)
            sum1=sum1+i;

        if(sum1%3==0)
            kount++;

        for(j=i; j<=h; j++)
        {
            sum1=sum1+j;
            if(sum1%3==0)
                kount++;
        }

        printf("Case %d: %lld\n", a, kount);
        a++;
    }
    while(a<=t);
    return 0;
}
