    #include <stdio.h>
     
    int main() {
        long long A, B, C;
        scanf("%lld %lld %lld", &A, &B, &C);
        long long min = A < B ? (A < C ? A : C) : (B < C ? B : C);
        long long max = A > B ? (A > C ? A : C) : (B > C ? B : C);
        printf("%lld %lld\n", min, max);
        return 0;
    }