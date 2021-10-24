#include<stdio.h>
#include<windows.h>

int main()
{
    int h,m,s;
    int d = 1000; //for delay of 1000ms 
    printf("Set time : \n");
    scanf("%d%d%d",&h,&m,&s);
    
    if(h>12||m>60||s>60)
    {
        printf("Error!!\n" );
        exit(0);
    }
    
    while(1)
    {
        s++;

        if(s>59)
        {
            m++;
            s=0;
        }

        if(m>59)
        {
            h++;
            m=0;
        }

        if (h>12)
        {
            h=1;
        }
        
        printf("\n Clock : ");
        printf("\n %02d:%02d:%02d ",h,m,s);         // for the format 00:00:00
        Sleep(d);        // this will slowdown the while looop to make it like real   (1000ms = 1s)
        system("cls");   // this will clear the screen after every second

    }

    return 0;
}