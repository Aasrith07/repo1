#include <stdio.h>
char finalarr[6];

void compare(char a, char b)
        {
            if (a == b)
            {
                printf("g");
            }
                
            else
            printf("b");
        }
int main()
{
    int testcases;
    char array1[6];
    char array2[6];

    scanf("%i",&testcases);
    for(int i=0;i<testcases;i++)
    {
        for(int j =0;j<6;j++)
        {
            scanf("%c",&array1[j]);
        }
    
        for(int j = 0;j<6;j++)
        {
            scanf("%c",&array2[j]);
        }
        for(int j=0;j<5;j++)
        {
            compare(array1[j],array2[j]);
        }
        // for(int j=0;j<5;j++){
        // printf("%c",finalarr[j]);
        // }
        // printf("\n");
}

return 0;
}