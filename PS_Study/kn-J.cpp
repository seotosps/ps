#include<stdio.h>
struct D{
    int value=-1,flag=0;
}in[1000000];
int loop(int n,int k){
    for(int i=1;i<k;i++){
        if(in[i].value==n) return i;
    }
    return 0;
}
int main(){
    int a, b,i=1,k,temp;
    scanf("%d %d",&a,&b);
    printf("%d.",a/b);
    do{
        a=(a%b)*10;
        temp=loop(a/b,i);
        if(temp==0){
            in[i].value=a/b;
            in[i++].flag++;
        }
        else{
                if(in[temp].flag==1 || in[temp].flag==2)
                    in[temp].flag++;
                else break;
        }
        a=a%b;
    }while(1);
    for(k=1;k<temp;k++)
            printf("%d",in[k].value);
    printf("(");
    for(k=temp;k<i;k++)
        printf("%d",in[k].value);
    printf(")");
    return 0;
}
