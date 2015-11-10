#include<cstdio>
#include<vector>
#include<algorithm>
using namespace std;
vector<int> a;
int cmp(int a, int  b){
    return a<b;
}
int main(){

    int i;


    for(i=0;i<100;i++)
       a.push_back(i);

    sort(a.begin(),a.end(),cmp);


    for(i=0;i<100;i++)
        printf("%d ",a[i]);


    return 0;
}


