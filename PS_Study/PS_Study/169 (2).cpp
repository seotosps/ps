
#include<cstdio>  
#include<algorithm>  
#include<list>  
using namespace std;  
list<int> d[101];  
int f[101];  
void dfs(int i){  
    if(f[i]) return ;  
    else{  
        f[i]=1;  
        printf("%d ",i);  
        list<int> ::iterator it;  
        for(it=d[i].begin();it!=d[i].end();it++)  
            if(*it) dfs(*it);         
    }  
}  
int main(){  
    int n,e,i,x,y;  
    scanf("%d%d",&n,&e);  
    for(i=1;i<=e;i++){  
        scanf("%d%d",&x,&y);  
        d[x].push_back(y);  
        d[y].push_back(x);  
    }  
    dfs(1);  
}  