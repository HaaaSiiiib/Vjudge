#include <stdio.h>
#include <math.h>

#define pi 3.1415926
int main()
{
    int n;
    float r, area, theta, var;
    while(scanf("%f%d", &r, &n)==2)
    {
        theta = (2*pi)/n;
    var = sin (theta);
    area = .5*n*r*r*var;
    printf("%.3f", area);
    return 0;
    }

}