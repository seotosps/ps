#include<stdio.h>
#include<string.h>
char ri[15];
int n,cnt=0,len=0,lenr=0,spos=-1,k,j,testpos[15],a=0,b=0;
int main() {
    char f[30];
    scanf("%s",f);
    scanf("%d",&n);
    len=strlen(f);
    for(int i=1; i<=n; i++) {
        scanf("%s",ri);
        lenr=strlen(ri);
        for(int j=0; j<=lenr; j++) {
            if(ri[j] == f[0] && ri[(j+len-1)%10]==f[len-1]) {
                testpos[a++]=j;
            }
        }
        if(a!=0) {
            for(b=0; b<a; b++) {
                for(j=testpos[b],k=1; k<len; k++) {
                    if(ri[(j+k)%10]!=f[k]) break;
                }
                if(k==len) {
                    cnt++;
                    break;
                }
            }
        }
        a=0;
    }
    printf("%d",cnt);
    return 0;
}
