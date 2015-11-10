#include<stdio.h>
int main(){
  FILE *in,*out;
  //in= fopen("army.in","r");
  out = fopen("army.out","r");
  int cnt=0;
  char tmp[100];
  int r, n;
  do{
    //fscanf(in,"%d%d",&r,&n);
    fscanf(out,"%d",&n);
    if(r==-1) break;
    sprintf(tmp,"army%03d.out",cnt);
    freopen(tmp,"w",stdout);
    printf("%d",n);
    /*
    for(int i=1;i<=n;i++){
      int k;
      fscanf(in,"%d",&k);
      printf("%d ",k);
    }
    */
    cnt++;
  }while(cnt!=100);
  return 0;
}
