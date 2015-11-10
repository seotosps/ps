#include<stdio.h>
int main(){
    int p1,p2,p3,pt;
    int s1,s2;
    scanf("%d%d%d%d%d",&p1,&p2,&p3,&s1,&s2);
    double result=0;
    if(p1 < p2){
        if(p1<p3) pt=p1;
        else pt=p3;
    }
    else{
        if(p2<p3) pt=p2;
        else pt=p3;
    }
    result+=pt;
    if(s1<s2) result+=s1;
    else result+=s2;

    result=result+result*0.1;

    printf("%.1lf",result);
    return 0;
}

