#include<iostream>
using namespace std;
int main(){
    int a, b,i,j,t,n,k;
    cin>>n;
    for(k=1;k<=n;k++){
        cin>>a>>b;
        i=a;
        j=b;
        while(b){
            t=b;
            b=a%b;
            a=t;
        }
        cout<< i/a*j<<endl;
    }
    return 0;
}

