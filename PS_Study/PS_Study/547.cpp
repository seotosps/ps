#include<cstdio>
int main(){
    int n,m,k,i,sum=0,temp,x2=1,pos=1,flag=0;
    scanf("%d%d%d",&n,&m,&k);
    for(i=1;i<=m;i++){
        scanf("%d",&temp);
        if(temp==10002){
            x2=x2*2;
        }
        else if(temp==10001){
            if(flag) {
                flag=0;
            }
            else flag=1;
        }
        else {
            sum=sum+temp*x2;
            if(sum%11==0){
                printf("%d",pos);
                return 0;
            }
            x2=1;
			sum=sum%11;
        }
        if(flag==1){
            pos=(pos-1)%n;
            if (pos==0) pos=n;
        }
        else{
            pos=(pos+1)%(n+1);
            if(pos==n+1) pos=1;
        }
    }
    printf("0");
	return 0;
}
