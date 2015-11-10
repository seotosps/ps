#include<stdio.h>
#include<string.h>
#include<algorithm>
using namespace std;

struct st
{
    char str[20];
    char change[20];
    int cnt;
}s[1000];

int cmp(struct st m,struct st n)
{
    return m.cnt<n.cnt;
}

void compare(int a,int b)
{
    int t;
    for(t=0;1;t++)
    {
        if(s[a].str[t]<s[b].str[t])
        {
            s[b].cnt++;
            break;
        }
        else if(s[a].str[t]>s[b].str[t])
        {
            s[a].cnt++;
            break;
        }
    }
    return;
}

int main()
{
    int n,i,j,l;
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%s",s[i].change);
        l=strlen(s[i].change);
        for(j=0;j<l;j++)
        {
            if(s[i].change[j]<95)
                s[i].str[j]=s[i].change[j]+32;
            else
                s[i].str[j]=s[i].change[j];
        }
        s[i].cnt=0;
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(i!=j)
            {
                compare(i,j);
            }
        }
    }
    sort(s,s+n,cmp);
    for(i=0;i<n;i++)
    {
        if(i<n-1)
            printf("%s\n",s[i].change);
        else
            printf("%s",s[i].change);
    }
    return 0;
}
