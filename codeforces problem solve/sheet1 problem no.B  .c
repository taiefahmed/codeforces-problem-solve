    #include <stdio.h>
     
    int main() {
      int a;
      long long int b;
      char c;
      float d;
      double e;
      scanf ("%d %lld %c %f %lf",&a,&b,&c,&d,&e);
      printf("%d\n", a);
      printf("%lld\n", b);
      printf("%c\n", c);
      printf("%.2f\n", d);
      printf("%.1lf", e);
      return 0;
    }