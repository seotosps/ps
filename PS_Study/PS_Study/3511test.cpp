#include<stdio.h>
int main(){
    int n,m,sum=0,nn;
    scanf("%d",&n);
    scanf("%d",&m);
    nn=n/10;
    if(n%10!=0) nn+=1;
    if(n<120 && m==1) {sum+=(nn*1000);sum+=20000;sum+=5000;}
    else if(m==1){sum+=(nn*1000);sum+=20000;sum+=5000;}
    else if(n<120) {sum+=(nn*m*1000);sum+=(m*5000);sum+=(m*20000);}
    else {
        sum+=(nn*1000);
        sum+=(m-1)*40000;
        sum+=((m*3-2)*5000);
        if(m<=15) sum+=(20000*m*0.5);
        else if(m<=30){
            sum+=(20000*15*0.5);
            sum+=(20000*(m-15)*0.5*0.9);
        }
        else if(m<=60){
            sum+=(20000*15*0.5);
            sum+=(20000*15*0.5*0.9);
            sum+=(20000*(m-30)*0.5*0.8);
        }
        else if(m>60) {
            sum+=(20000*15*0.5);
            sum+=(20000*15*0.5*0.9);
            sum+=(20000*30*0.5*0.8);
            sum+=(20000*(m-60)*0.5*0.7);
        }   }
    printf("%d\n",sum);
}
