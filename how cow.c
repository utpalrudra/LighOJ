#include<stdio.h>
int main()
{
    int x1, x2, y1, y2, a, b, i, k, m, j, t;
    scanf("%d", &t);
    for(i=1;i<=t;i++){
            scanf("%d %d %d %d", &x1, &x2, &y1, &y2);
            scanf("%d", &m);
                printf("Case %d:\n",i);
            for(k=1;k<=m;k++){
                scanf("%d %d", &a, &b);
    if(a>=x1 && a<=y1 && b>=x2 && b<=y2)
        printf("Yes\n");
    else
        printf("No\n");

                    }

    }
    return 0;
}
