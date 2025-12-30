// #include <stdio.h>

// int main()
// {
//     int testcases,n,total;

//     scanf("%i",&testcases);

//     for(int j=0;j<testcases;j++)
//     {
//         scanf("%i",&n);

//         int pol[n];

//         for(int i =1; i<=n;i++)
//             {
//             scanf("%i",&pol[i-1]);
//             }
//             total = 0;
            
//             for(int k=0 ;k<n;k++)
//                 {
//                 if(pol[k]==0){
//                 total;
//                 }
//                 else
//                 {total = k;}
//                 }
        
//         printf("%i\n",total);
          
//         n = 0;
//     }

//     return 0;
// }
#include <stdio.h>

int main()
{
    int testcases,n;

    scanf("%i",&testcases);

    for(int j=0;j<testcases;j++)
    {
        scanf("%i",&n);
        
        if(n<3 || n == 5){
            printf("no\n");
        }
        
        else 
        {
            printf("yes\n");
        }
        n = 0;
    }
    
    return 0;
}
