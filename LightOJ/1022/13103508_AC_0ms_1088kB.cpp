#include <stdio.h>
#include <math.h>
int main()
{  int i,j;
    double c, s, r, area;
    double pi=2*acos(0.0);
    scanf("%d",&i);
    for (j=1;j<=i;j++)
    {scanf ("%lf",&r);
    c = 4*r*r ;
    s = pi*r*r ;
    area = c-s ;
    printf ("Case %d: %.2lf\n",j,area);
}
   return 0 ;
}