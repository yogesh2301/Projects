#include <stdio.h>

int main()
{
    int n, i, j;
    printf("Enter the no. of rows for pattern\n");
    scanf("%d", &n);

//  Pattern 1:

    // printf("*\n");
    // printf("**\n");
    // printf("***\n");
    // printf("****\n");

    // for ( i = 0; i < n; i++)
    // {
    //    for (j = 0; j < i+1; j++)
    //    {
    //         printf("*");
    //    }

    //     printf("\n");
    // }

    // for (i = 0; i < n; i++)
    // {
    //    for (j = 0; j < n; j++)
    //    {
    //         if(j>i)
    //             printf(" ");
    //         else
    //             printf("*");
    //    }
    //    printf("\n");
    // }

// Pattern 2:

    // printf("****\n");
    // printf("***\n");
    // printf("**\n");
    // printf("*\n");


    //  for (i = 0; i < n; i++)
    // {
    //    for (j = i; j < n; j++)
    //    {
    //         printf("*");
    //    }
    //     printf("\n");
    // }
    

    // for (i = 0; i < n; i++)
    // {
    //    for (j = 0; j < n-i; j++)
    //    {
    //         printf("*");
    //    }
    //     printf("\n");
    // }


    // for (i = 0; i < n; i++)
    // {
    //    for (j = 0; j < n; j++)
    //    {
    //         if(i+j<n)
    //             printf("*");
    //         else
    //             printf(" ");
    //    }
    //    printf("\n");
    // }

//Pattern 3:

    // printf("   *\n");
    // printf("  **\n");
    // printf(" ***\n");
    // printf("****\n");

    // for (i = 0; i < n; i++)
    // {
    //    for (j = 0; j < n; j++)
    //    {
    //         if(n-1-i<=j<=(n-1 +i))
    //             printf("*");
    //         else
    //             printf(" ");
    //    }
    //    printf("\n");
    // }

    // for (i = 0; i < n+1; i++)
    // {
    //    for (j = 0; j < n; j++)
    //    {
    //         if(i+j<n)
    //             printf(" ");
    //         else
    //             printf("*");
    //    }
    //    printf("\n");
    // }

//Pattern 4:

    // printf("****\n");
    // printf(" ***\n");
    // printf("  **\n");
    // printf("   *\n");

    // for (i = 0; i < n; i++)
    // {
    //    for (j = 0; j < n+1; j++)
    //    {
    //         if(j>i)
    //             printf("*");
    //         else
    //             printf(" ");
    //    }
    //    printf("\n");
    // }


//Pattern 5:

    //    *    
    //   ***
    //  *****
    // *******

    // for (i = 0; i < n; i++)
    // {
    //    for (j = 0; j < 2*n; j++)
    //    {
    //         if((n-1-i)<=j&&j<=(n-1+i))
    //             printf("*");
    //         else
    //             printf(" ");
    //    }
    //    printf("\n");
    // }

// Pattern 6: 

    // *******
    // *** ***
    // **   **
    // *     *

    for (i = 1; i <= n; i++)
    {
       for (j = 1; j <=2*n-1; j++)
       {
            if(i+n-1<=j||j<=n+1-i)
                printf("*");
            else
                printf(" ");
       }
       printf("\n");
    }

// Pattern 6: 
//     *     *
//     **   **
//     *** ***
//     *******

    int r=2*n-1;
    for (i = 1; i <= n; i++)
    {
       for (j = 1; j <=2*n-1; j++)
       {
            if(r-i+1<=j||j<=i)
                printf("*");
            else
                printf(" ");
       }
       printf("\n");
    }

// Pattern BOX :

    // printf("****\n");
    // printf("*  *\n");
    // printf("*  *\n");
    // printf("****\n");

    // for (i = 0; i < n; i++)
    // {
    //    for (j = 0; j < n; j++)
    //    {
    //         if(i==0||j==0||i==(n-1)||j==(n-1))
    //             printf("*");
    //         else
    //             printf(" ");
    //    }
    //    printf("\n");
    // }

    return 0;
}