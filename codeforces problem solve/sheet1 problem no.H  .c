    #include <stdio.h>
    #include <math.h>
    int main() 
    {
        double A, B;
        scanf("%lf %lf", &A, &B);
        double f = floor(A / B);
        double c = ceil(A / B);
        double r = round(A / B);
        printf("floor %.0lf / %.0lf = %.0lf\n", A, B, f);
        printf("ceil %.0lf / %.0lf = %.0lf\n", A, B, c);
        printf("round %.0lf / %.0lf = %.0lf\n", A, B, r);
        return 0;
    }