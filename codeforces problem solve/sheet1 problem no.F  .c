    #include <stdio.h>
    int main()
    {
        long long int N,M;
        scanf("%lld %lld",&N,&M);
        N = N % 10;
        M = M % 10;
        int sum = N + M;
        printf("%d\n",sum);
        return 0;
    }