#include<stdio.h>
char d[10][10];
int main(){
    int temp,i,k,j;
    for(i=0;i<10;i++){
        scanf("%d",&temp);
        k=temp/10;
        for(j=9;j>=10-k;j--)
            d[j][i]='#';
        for(;j>=0;j--)
            d[j][i]=' ';
    }
    for(i=0;i<10;i++){
        for(j=0;j<10;j++)
            printf("%c ", d[i][j]);
        printf("\n");
    }
    return 0;
}
