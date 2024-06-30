    #include <stdio.h>
    int main() {
        char A;
        scanf("%c", &A);
        if (A >= 'a' && A <= 'z')
        {
            char upper = A - 32;
            printf("%c\n", upper);
        } 
        else 
        {
            char lower = A + 32;
            printf("%c\n", lower);
        }
        return 0;
    }