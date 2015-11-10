#include<stdio.h>
#include<string.h>
long long bi[32]={1};
long long thr[32]={1};
long long abs(long long a){
    return a>0?a:-a;
}
int todeci(char *s, int d){
    int len=strlen(s);
    long long num=0,i;
    for(i=len-1;i>=0;i--)
        if(d==2){
            num+=(s[i]-'0')*bi[len-1-i];
            }
        else {
            num+=(s[i]-'0')*thr[len-1-i];
        }

    return num;
}
int main(){
    int i;
    char bis[50],ths[50];
    for(i=1;i<32;i++)
        bi[i]=bi[i-1]*2;
    i=1;
    do{
            thr[i]=thr[i-1]*3;
    }while(thr[i++]<=100000000);
    scanf("%s%s",bis,ths);
    long long binum, thnum;
    binum=todeci(bis,2);
    thnum=todeci(ths,3);
    long long gap=abs(binum-thnum);
    for(int i=0;bi[i]!=0;i++){
        for(int j=0;thr[j]!=0;j++){
                long long k=abs(bi[i]+thr[j]);
                if(gap==k) {
                       if(binum+bi[i] == thnum+thr[j]) printf("%d",binum+bi[i]);
                        else if(binum+bi[i] == thnum-thr[j]) printf("%d",binum+bi[i]);
                        else if(binum-bi[i] == thnum+thr[j]) printf("%d",binum-bi[i]);
                        else printf("%d",binum-bi[i]);
                        return 0;
                }
                k=abs(bi[i]-thr[j]);
                if(gap==k) {
                        if(binum+bi[i] == thnum+thr[j]) printf("%d",binum+bi[i]);
                        else if(binum+bi[i] == thnum-thr[j]) printf("%d",binum+bi[i]);
                        else if(binum-bi[i] == thnum+thr[j]) printf("%d",binum-bi[i]);
                        else printf("%d",binum-bi[i]);
                        return 0;
                }
        }
    }
    return 0;
}

