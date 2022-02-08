#include<stdio.h>
#include<string.h>
int main()
{
    int i, j, k=0, l, t;
    char s3[10];
    scanf("%d", &t);
    for(i=1; i<=t; i++)
    {
        scanf("%d", &l);
        printf("Case %d:\n", i);
        while(l>0)
        {
            scanf("%s", s3);
            if(strcmp(s3,"donate")==0)
            {
                scanf("%d", &j);
                k=k+j;
            }
            else
                printf("%d\n", k);

            l--;
        }
        k=0;
    }
    return 0;
}
