#include<stdio.h>
#include<time.h>
#include<stdlib.h>
int main(){
    char a[]="ATGC";
    srand((unsigned)time(NULL));

    freopen("a.txt","w",stdout);

    for(int i=1 ;i < 1000000;i++)
        printf("%c",a[rand()%4]);


    return 0;
}


