#include<stdio.h>
#include<string.h>
// args[1] = �Էµ�������, args[2]=������ args[3]= �����
int main(int argc, char *args[]){
    int strcnt, k,n;
    char users[100]="0",ans[100]="0";
   FILE * f_indata=fopen(args[1],"r");
   FILE * f_answer=fopen(args[2],"r");
   FILE * f_user=fopen(args[3],"r");


   fclose(f_indata);
   fclose(f_answer);
   fclose(f_user);
  return 0;
}

