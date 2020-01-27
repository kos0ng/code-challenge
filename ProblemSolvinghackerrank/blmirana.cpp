#include <bits/stdc++.h>
 
using namespace std;
int main()
{
    int T;
    double x,y,r;
    scanf("%d",&T);
    while(T--)
    {
        scanf("%lf%lf%lf",&x,&y,&r);
        double d=x*x+y*y-r*r;
        double b=(d*y+x*r*sqrt(d))/(x*x+y*y);
        double a=(d*x-y*r*sqrt(d))/(x*x+y*y);
        printf("%.6lf %.6lf\n",a,b);
    } 
    return 0;
}