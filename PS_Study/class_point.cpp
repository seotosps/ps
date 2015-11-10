/*
7
5 <<<<<
5 >>>>>
2 ><
3 >><
9 >><<><><<
11 ><><>><<>><
4 >><<

illegal
illegal
legal
illegal
illegal
illegal
legal

*/
#include<stdio.h>
#include<stack>
using namespace std;
char a[200];
int l[200];
int ans[200];
stack<char> s;
int main()
{
    int n,i,j;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&l[i]);
        scanf("%s",a);
        for(j=0;j<l[i];j++)
        {
            if(a[j]=='>')
                s.push(a[j]);
            else
            {
                if(s.empty()==1)
                {
                    ans[i]=1;
                    break;
                }
                else
                    s.pop();
            }
        }
        if(s.empty()==0)
            ans[i]=1;
        while(!s.empty()) s.pop();
    }
    for(i=0;i<n-1;i++)
    {
        if(ans[i]==0)
            printf("legal\n");
        else
            printf("illegal\n");
    }
    if(ans[n-1]==0)
        printf("legal");
    else
        printf("illegal");
    return 0;
}
