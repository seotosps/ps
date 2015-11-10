#include<stdio.h>
int main(){
	int n,ma[2000],mi[2000];
		scanf("%d",&n);

		for(int i = 1; i<=n;i++){
                scanf("%d",&ma[i]);
                mi[i]=ma[i];
		}
        // ÃÖ´ëÈü
        for(int i=1; i<=n;i++){
            int k = i;
            int temp = ma[i];
            while(k>1){
                    if(temp < ma[k/2]) break;
                    ma[k]=ma[k/2];
                    k/=2;
            }
            ma[k]=temp;
        }
        for(int i=1;i<=n; i++)
            printf("%d ",ma[i]);
        printf("\n");

        // ÃÖ¼ÒÈü
        for(int i=1; i<=n;i++){
            int k = i;
            int temp = mi[i];
            while(k>1){
                    if(temp > mi[k/2]) break;
                    mi[k]=mi[k/2];
                    k/=2;
            }
            mi[k]=temp;
        }
        for(int i=1;i<=n; i++)
            printf("%d ",mi[i]);
    return 0;
}
