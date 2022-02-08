#include<stdio.h>
int main()
{
    int a, b, c, i, T, A, B;
    scanf("%d", &T);
    for(i=1; i<=T; i++)
    {
        scanf("%d %d %d", &a, &b, &c);
        if(c>a && c>b)
        {
            A=(a*a+b*b);
            B=(c*c);
            if(A==B)
                printf("Case %d: yes\n", i);
            else
                printf("Case %d: no\n", i);
        }
        else if(b>a && b>c)
        {
            A=(a*a+c*c);
            B=(b*b);
            if(A==B)
                printf("Case %d: yes\n", i);
            else
                printf("Case %d: no\n", i);
        }
        else if(a>b && a>c)
        {
            A=(c*c+b*b);
            B=(a*a);
            if(A==B)
                printf("Case %d: yes\n", i);
            else
                printf("Case %d: no\n", i);
        }
    }
    return 0;
}
