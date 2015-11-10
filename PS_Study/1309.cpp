#include<stdio.h>
int main(){
    char str[100];
    int n;
    scanf("%s %d",str,&n);
    for(int i=1;i<=n;i++)
        printf("%s",str);
    return 0;

}
