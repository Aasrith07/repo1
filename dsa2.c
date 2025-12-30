// #include <stdio.h>

// int main()
// {
//     int n;
//     scanf("%i",&n);
//     int test;

//     int array[n];

//     for(int i = 0;i<n;i++)
//     {
//         scanf("%i",&array[i]);
//     }

//     for(int i=n;i>0;i--)
//     {
//         for(int j=0;j<i;j++)
//         {
//             if(array[j] <= array[j+1])
//             {
//                 continue;
//             }
//             else{
//                 test = array[j];
//                 array[j]= array[j+1];
//                 array[j+1] = array[j];
//             }
//         }
//     }

//     for(int i=0;i<n;i++)
//     {
//         printf("%i\t",array[i]);
//     }

//     return 0;

// }

// #include <stdio.h>
// #include <stdlib.h>

// struct node {
//     int real;
//     int complex;
// };
// int main()
// {   
//     int real1,imag1,real2,imag2;
//     struct node* complex1 = malloc(sizeof(struct node));
//     struct node* complex2 = malloc(sizeof(struct node));

//     scanf(%)
//     complex1 -> real = 

// }

#include <stdio.h>

int prime(int x)
{
    int count=0;
    if(x == 0 || x ==1 )
    {
        count = 0;
    }

    else
    {
        for(int i=2;i<x;i++)
        {
            if(x%i != 0)
            {
                count=1;
                
            }
            else
            {
                count = 0;
                break;
            }
        }
        
    }

    return count;
}

int main()

{
    int m,n;
    scanf("%i%i",&m,&n);
    for(int i = m;i<=n;i++)
    {
       int t;
       t = prime(i);
       if(t == 1)
       {
        printf("%i",i);
       }
       else 
       continue;
    }
return 0;
}