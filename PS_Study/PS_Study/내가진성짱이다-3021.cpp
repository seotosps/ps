#include<stdio.h>
#include<queue>
using namespace std;
queue<int> q;
int time[1200];
int main(){
    //fropen("input.txt","r",stdin);
    //fropen("output.txt","w",stdout);
    int k, m;
    int a[3],value=0;
    scanf("%d%d%d%d%d",&k,&m,a+0,a+1,a+2);
    q.push(k);
    while(!q.empty()){
        value=q.front();
        if(value ==m) {
                printf("%d",time[value]);
                return 0;
        }
        q.pop();
        for(int i=0;i<3;i++){
            int temp=value+a[i];
            if(temp<=m && !time[temp]){
                    q.push(temp);
                    time[temp]=time[value]+1;
            }
        }
    }
    printf("-1");
    return 0;
}


