    #include <stdio.h>
    int main()
    {
        int X;
        scanf("%d", &X);
        int first = X / 1000; 
        if (first % 2 == 0) 
        {
            printf("EVEN\n");
        } 
        else 
        {
            printf("ODD\n");
        }
        return 0;
    }