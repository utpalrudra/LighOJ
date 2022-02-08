#include<stdio.h>
#include<stdlib.h>
int main()
{
    int t, i;
    long long int  a, b;
    scanf("%d", &t);
    for(i=1;i<=t;i++){
        scanf("%lld %lld", &a, &b);
        b=abs(b);
        if(a%b==0)
            printf("Case %d: divisible\n", i);
        else
            printf("Case %d: not divisible\n", i);
    }
    return 0;
}
