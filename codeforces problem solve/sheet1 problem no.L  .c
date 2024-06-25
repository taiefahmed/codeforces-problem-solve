#include <stdio.h>
#include <string.h>
 int main()
   {
        char a1[100], b1[100];
        char a2[100], b2[100];
        scanf("%s %s", a1, b1);
        scanf("%s %s", a2, b2);
        if (strcmp(b1, b2) == 0)
        {
            printf("ARE Brothers\n");
        } 
        else
        {
            printf("NOT\n");
        }
        return 0;
    }