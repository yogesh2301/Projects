#include <stdio.h>
#include <string.h>

int main()
{
    char blood[20];
    int n ;
    char Virus[20];
    int count =0,cases =0;
    printf("Enter the virus\n");
    gets(Virus);
    printf("Enter the no. of blood sample\n");
    scanf("%d",&n);
    for (int i = 0; i < n; i++)
    {
        printf("Enter the blood samples\n");
        scanf("%s", blood);
        // printf("%s",blood);
        // int comp = strcmp(blood,Virus);
        int j=0;
        for (int i = 0; i < strlen(blood); i++)
        {
            for (; j < strlen(Virus); j++)
            {
                if (blood[i] == Virus[j] )
                   count++;
            }
        }
                if (count >= strlen(blood))
                {
                    printf("POSITIVE\n");
                    cases++;
                    count=0;
                }

                else
                    printf("NEGATIVE\n");

    }
    printf("\ntotal no. of cases are: %d ",cases);
}
    // int main()
    // {
    //     char s1[50], s2[50];
    //     int i=0,j=0;
    //     int a = strlen(s1);
    //     int b = strlen(s2);
    //     while (j<a && i<b)
    //     {
    //         if(s1[j] == s2[i])
    //             j+=1;

    //         i+=1;
    //     }

    //     return j==a;
    //     char v[10];
    //     gets(v);
    //     int n;
    //     scanf("%d",&n);
    //     char x[50][100];
    //     for (int i = 0; i < n; i++)
    //     {
    //         scanf("%s",x[i]);
    //     }
    //     for (int i = 0; i < n; i++)
    //     {
    //         if(v[]=x[i])
    //             printf("POSITIVE");

    //         else
    //             printf("NEGATIVE");
    //     }

    //     return 0;
    // }