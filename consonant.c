#include <stdio.h>
#include <stdlib.h>

int main()
{
     int testcases,n;
     int final = 0;
     int flag = 0;

    scanf("%i",&testcases);

    for(int j=0;j<testcases;j++)
    {
    scanf("%i",&n);
    int size = n;
    char *str = (char *)malloc(sizeof(char)*size);
    scanf("%s", str);
    final=0;

    for(int i =0;i<n;i++)
    {
        if(*(str+i) != 'a' && *(str+i) != 'e' && *(str+i) !='i' && *(str+i) != 'o' && *(str+i) != 'u')
        {
            flag += 1 ;
        }
        else
        {
            flag = 0;
        }

        if(flag > 3)
        {
            final = 1;
            break;
        }
        else
        {
        continue;}
    }
   
    if(final == 1)
    {
        printf("NO\n");

    }

    else
    printf("YES\n");

    final = 0;
    flag = 0;
}

return 0;
}