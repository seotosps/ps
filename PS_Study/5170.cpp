#include <stdio.h>

int minv[17][50000],maxv[17][50000],n;
int mi(int a,int b)
{
    return a<b?a:b;
}
int ma(int a,int b)
{
    return a>b?a:b;
}
int main()
{
    int i,j,siz,s1,a,b,q;
    for(scanf("%d%d",&n,&q),i=0; i<n; scanf("%d",&a),minv[0][i]=a,maxv[0][i]=a,i++);
    for(siz=2,s1=1,i=1; (siz<=n); i++)
    {
        for(j=0; j<n; j++)
        {
            minv[i][j]=mi(minv[i-1][j],minv[i-1][j+s1]);
            maxv[i][j]=ma(maxv[i-1][j],maxv[i-1][j+s1]);
        }
        siz*=2;
        s1*=2;
    }
    for(i=0; i<q; i++)
    {
        scanf("%d%d",&a,&b);
        a--;
        siz=b-a;
        for(j=0,s1=1; siz>1; s1=s1<<1,j++,siz=siz>>1);
        printf("%d\n",ma(maxv[j][a],maxv[j][b-s1])-mi(minv[j][a],minv[j][b-s1]));
    }
    return 0;
}
