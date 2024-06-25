#include<stdio.h>
int main()
 {
    double x;
    double y;
    scanf("%lf%lf",&x,&y);
    printf("%.0lf + %.0lf = %.0lf\n",x,y,x+y);
    printf("%.0lf * %.0lf = %.0lf\n",x,y,x*y);
    printf("%.0lf - %.0lf = %.0lf",x,y,x-y);
    return 0;
 }