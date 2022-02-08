#include <stdio.h>
#include <string.h>
int main()

{
    int i=1, t, j, k, l, m;
    char str[50];
    scanf("%d", &t);
    do
    {
        scanf("%s", str);
        j=strlen(str);
        for(k=0, l=j-1; k<=(j/2); k++, l--)
        {
            if(str[k]==str[l])
                m=1;
            else
            {
                m=0;
                break;
            }
        }
        if((m==1) ||  (str>=0 && str<=9))
            printf("Case %d: Yes\n", i);
        else
            printf("Case %d: No\n", i);
        i++;
    }
    while(i<=t);
    return 0;
}

