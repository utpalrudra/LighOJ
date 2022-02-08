#include <stdio.h>
int main()

{
    int i, j, k1=0, k, m, n, t, s1=0, s2=0, s3=0;
    scanf("%d", &t);
    for(i=1; i<=t; i++)
    {
        scanf("%d %d", &n, &m);
        for(j=1; j<=m; j++)
        {
            s1=s1+j;
            k1++;
        }
        //for(k=j; j<=k1; k++)
        do
        {
            s2=s2+k1;
            k1++;
            s3++;
        }
        while(s3<=m);
        printf("%d\n", s2-s1);

    }
    return 0;
}

