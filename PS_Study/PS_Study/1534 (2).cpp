#include<stdio.h>
int main()
{
    char a[7]="HANCOM", b;
    int j;
    for(;;)
    {
           scanf(" %c",&b);
           for(j=0;j<6;j++)
           {
                           if(a[j]==b)
                           {
                                        printf("%d\n",j);
                                        break;
                           }
           }
           if(j==6)
           {
                   printf("���α׷��� �����մϴ�.");
                   return 0;
           }
    }                               
}

