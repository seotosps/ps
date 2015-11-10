#include<iostream>
using namespace std;
char data[5][15];
char com[]="FBI";
int f(char *p){
    int i=0;
    for(;p[i+2];i++){
        if(p[i]==com[0] && p[i+1]==com[1] && p[i+2]==com[2])
            return 1;
    }
    return 0;
}
int main(){
    int i=0,flag=0;
    for(i;i<5;i++)
        cin>>data[i];
    for(i=0;i<5;i++)
        if(f(data[i])==1) {
                cout<< i+1<<" ";
                flag=1;
        }
    if(flag==0) cout<<"HE GOT AWAY!";
    return 0;

}
