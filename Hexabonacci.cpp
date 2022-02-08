#include<bits/stdc++.h>
using namespace std;
long long int a, b, c, d, e, f;
#define mx 10007
long long int dp[mx];
long long int fn( int n )
{
    if( n == 0 ) return a;
    else if( n == 1 ) return b;
    else if( n == 2 ) return c;
    else if( n == 3 ) return d;
    else if( n == 4 ) return e;
    else if( n == 5 ) return f;
    else if(dp[n] != -1) return dp[n];
    else
    {
        dp[n] = (fn(n-1) + fn(n-2) + fn(n-3) + fn(n-4) + fn(n-5) + fn(n-6))%10000007;
        return dp[n];
    }
}

int main()
{
    int caseno = 0, cases, n;
    scanf("%d", &cases);
    while( cases-- )
    {
        memset(dp, -1, sizeof(dp));
        scanf("%lld %lld %lld %lld %lld %lld %d", &a, &b, &c, &d, &e, &f, &n);
        printf("Case %d: %lld\n", ++caseno, fn(n)%10000007);
        ///a=b =c=d=e=f=0;
    }
    return 0;
}
