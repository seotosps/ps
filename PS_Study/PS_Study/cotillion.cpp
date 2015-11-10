#include<stdio.h>
#include<stack>
using namespace std;
stack<char> d;
struct data{
    int n;
    char str[250];
}in[1200];
int main(){
    int n,result[1200]={0};
    scanf("%d",&n);
    for(int i=0;i<n;i++){
            scanf("%d %s",&in[i].n,in[i].str);
            for(int j=0;j<in[i].n;j++){
                    if(in[i].str[j]=='<') {
                            if(d.empty()) {
                                    result[i]=2;
                                    break;
                            }
                            else {
                                    d.pop();
                            }
                    }
                    else d.push(in[i].str[j]);
            }
            if(d.empty() && result[i]==0) result[i]=1;
            while(!d.empty()) d.pop();
    }
    for(int  i=0;i<n;i++){
        if(result[i]==1) printf("legal\n");
        else printf("illegal\n");
    }
    return 0;
}




