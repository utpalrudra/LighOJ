#include <stdio.h>
#include <stdlib.h>
int main()

{
    int t, i=1, j, Ax, Ay, Bx, By, Cx, Cy, Dx, Dy, Ar;
    scanf("%d", &t);
    while(i<=t)
    {
        scanf("%d %d %d %d %d %d", &Ax, &Ay, &Bx, &By, &Cx, &Cy);
        Dx = (Ax+Cx-Bx);
        Dy = (Ay+Cy-By);
        j=((Ax*By+Bx*Cy+Cx*Dy+Dx*Ay)-(Ay*Bx+By*Cx+Cy*Dx+Dy*Ax));

        Ar=abs(.5*j);

        printf("Case %d: %d %d %d\n", i, Dx, Dy, Ar);
        i++;
    }
    return 0;
}
