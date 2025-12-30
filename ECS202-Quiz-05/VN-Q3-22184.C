#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    char *array;
    int count1=0,count2=0,count3= 0;
    int final1=0,final2=0,final3=0;
    scanf("%i",&n);
    array = (char*)malloc(n*sizeof(char));
    for(int i=0; i < n; i++)
    {
        scanf(" %c",array+i); 
    }

    for(int i=0;i<n;i++)
    {
        if(array[i] == 'B')
        {
            count1 +=1;
        }
        

        else if(array[i] == 'Y')
        {
            count2 +=1;
        }
        

        else
        {
            count3 +=1;
        }
        
    }

    for(int i=0;i<count1;i++)
    {
        if(array[i] == 'B')
        {
            final1+=1;
        }

        else
        final1;
    }

    for(int i=count1;i<(count1 + count2);i++)
    {
        if(array[i] == 'Y')
        {
            final2+=1;
        }

        else
        final2;
    }
    for(int i=count2;i<(count1 + count2 + count3);i++)
    {
        if(array[i] == 'R')
        {
            final3+=1;
        }

        else
        final3;
    }
    printf("%i",(count1-final1)+(count2-final2));
    

    return 0;
}