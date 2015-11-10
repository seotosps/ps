#include<iostream>
using namespace std;
int main(){
    int m,t,i;
    int da[5];
    cin>>m>>t;
    for(i=0;i<5;i++)
        cin>>da[i];
    for(i=0;i<5;i++)
        cout<<da[i]-(m*t)<<" ";
    return 0;
}
