#include<stdio.h>
char a[2000],b[2000];
char* add(int a[2000],b[2000]){
  char c[2000];
  int alen,blen;
  alen=strlen(a);
  blen=strlen(b);
  for(;alen>=0 && blen>=0;){

  }
  while(alen>=0){

  }
  while(blen>=0){

  }

}
char* sub(){
  if(a[0]=='-'){

  }
  else if(b[0]=='-'){

  }
}
int main(){
  scanf("%s\n%s",a,b);
  if(a[0]=='-' && b[0]=='-'){
      printf("-%s",add(&a[1],&b[1]));

  }
  else if(a[0]=='-' || b[0]=='-'){

  }
  else{
      printf("%s",add());
  }
  return 0;
}
