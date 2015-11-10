#include<stdio.h>
#include<string.h>
char db[2][120],is[30];
int islen,dblen;
int ans[30][120][2];
int f(int fsize, int dolpos, int dol){
    if(ans[fsize][dolpos][dol]) return ans[fsize][dolpos][dol];
    if(fsize == islen) return 1;
    int sum=0;
    for(int i=dolpos+1;i<dblen;i++)
        if(db[dol][i]==is[fsize]) sum+=f(fsize+1,i,1-dol);
    return ans[fsize][dolpos][dol]=sum;
}
int main(){
    scanf("%s %s %s",is,db[0],db[1]);
    islen = strlen(is);
    dblen = strlen(db[0]);
    printf("%d",f(0,-1,0)+f(0,-1,1));
    return 0;
}

