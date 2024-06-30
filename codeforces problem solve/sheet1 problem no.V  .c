    #include <stdio.h>
    int main()
    {
        char x;
        int A, B;
        scanf("%d %c %d", &A, &x, &B);
        if ((x == '<' && A < B) || (x == '>' && A > B) || (x == '=' && A == B)) 
        {
            printf("Right\n");
        } 
        else 
        {
            printf("Wrong\n");
        }
        return 0;
    }
    