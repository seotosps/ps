#include<stdio.h>
#include<stack>
using namespace std;
int main(){
  stack<int> s;
  for(int i=1;i<=10;i++)
    s.push(i);
  for(;!s.empty();s.pop());
    printf("%d ",s.top());
  return 0;
}
