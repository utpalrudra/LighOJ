#include<stdio.h>
int main()
{
    int i, j, k, T, ara[1000], sum;
    scanf("%d",&T);
    for(i=1; i<=T; i++)
    {
        scanf("%d",&j);
        sum=0;
        for(k=0; k<j; k++)
        {
            scanf("%d",&ara[k]);
            if(ara[k]<0)
            {
                ara[k]=0;
            }
            sum=sum+ara[k];
        }
        printf("Case %d: %d\n",i,sum);
    }
    return 0;
}
