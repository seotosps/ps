#include<iostream>
using namespace std;
int main(){
  int n, a=2,b=0,i;
  cin>>n;
  for(i=1;i<=n;i++){
    b=a+i;
    a=b;
    }
   cout<<b;
   return 0;
   }
