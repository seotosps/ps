#include<stdio.h>
struct vs {
    int v,t;
};
struct vs a[1100],b[1100];
int main() {
    int n, m,endtime=0,posa=0, posb=0,flaga=0, flagb=0,ia=1, ib=1,ans=0;
    scanf("%d%d",&n,&m);
    for(int i=1; i<=n; i++) {
        scanf("%d%d",&a[i].v,&a[i].t);
        endtime+=a[i].t;
    }
    for(int i=1; i<=m; i++)
        scanf("%d%d",&b[i].v,&b[i].t);

    for(int i=1; i<=endtime; i++) {
        if(a[ia].t>0) {
            posa+=a[ia].v;
            a[ia].t--;
            if(a[ia].t==0) ia++;
        }
        if(b[ib].t>0) {
            posb+=b[ib].v;
            b[ib].t--;
            if(b[ib].t==0) ib++;
        }
        if(posa< posb) {
            if((flaga==0 && flagb==0) || (flaga==1 && flagb==0)) {
                ans++;
                flagb=1;
                flaga=0;
            }
        } else if (posa>posb) {
            if((flaga==0 && flagb==0) || (flaga==0 && flagb==1)) {
                ans++;
                flaga=1;
                flagb=0;
            }
        } else flaga=flagb=0;
    }
    if(ans!=0) printf("%d",ans-1);
    else printf("0");
    return 0;
}


