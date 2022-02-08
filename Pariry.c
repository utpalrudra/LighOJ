#include<stdio.h>
int main()
{
    int t, i, j=0, n, ara[100], k=0, l=0, m;
    scanf("%d", &t);
    for(i=1; i<=t; i++)
    {
        j=0;
        l=0;
        k=0;
        scanf("%d", &n);
        while(n>0)
        {
            //ara[j] = n%2;
            m=n%2;
            if(m==1)
                l++;
            n=n/2;
            //k++;
            //j++;
        }
        /*for(m=0; m<=k; m++)
        {
            if(ara[m]==1)
                l++;
        }*/
        if(l%2==0)
            printf("Case %d: even\n", i);
        else
            printf("Case %d: odd\n", i);
        //k=0;
        //l=0;
    }
}
