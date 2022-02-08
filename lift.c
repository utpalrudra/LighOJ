#include<stdio.h>
int main()
{
    int a, b, c, i, d, t;
    scanf("%d", &t);
    for(i=1;i<=t;i++){
        scanf("%d %d", &a, &b);
        if(a<=b){
        c=b*4+19;
        printf("Case %d: %d\n", i, c);
        }
        else if(a>b){
            d=a*4+19+(a-b)*4;
            printf("Case %d: %d\n", i, d);
        }
    }
    return 0;
}
