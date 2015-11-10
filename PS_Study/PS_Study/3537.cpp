#include<stdio.h>
int stu[1001][6];
int result[1001][1001];
int main(){
    int n;
    for(int i=1;i<=n;i++)
        for(int m=1;m<=5;m++)
            scanf("%d",stu[i][m]);
    for(int k=1;k<=5;k++){
        for(int i=1;i<=9;i++){
            int cnt=1;
            int equ[1001];
            for(int m=1;m<=n;m++){
                    if(stu[m][k]==i) {
                      equ[cnt++]=k;
                    }
            }
            setf(equ);
        }
    }
    cntf();



}

