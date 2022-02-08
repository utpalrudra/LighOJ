#include<stdio.h>
int main()
{
    long long int n1=0, n2=1, t, count, A;
    scanf("%lld", &t);
    printf("%lld\t", n2);
    A=n1+n2;
    while(A<t)
    {
        printf("%lld\t", A);
        n1=n2;
        n2=A;
        A=n1+n2;2
      //  ++count;
    }
    return 0;
}
