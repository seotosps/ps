#include<algorithm>
#include<stdio.h>
#include<vector>
using namespace std;
int cmpm(int a, int b){
    return a>b;
}
vector<int> M,m;
int main(){
    int n, temp;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&temp);
        M.push_back(temp);
        m.push_back(temp);
        push_heap(M.begin(),M.end());
        push_heap(m.begin(),m.end(),cmpm);
    }
    for(int i=0;i<n;i++)
        printf("%d ",M[i]);
    printf("\n");
    for(int i=0;i<n;i++)
        printf("%d ",m[i]);
    return 0;
}
