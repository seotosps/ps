#include<stdio.h>
#include<string.h>
struct s1{
	int num;
	char name[10];
}t1,t2;

int main(){

	struct s1 t3;
	t1.num = 10;
	strcpy(t1.name,"abc");

	t2=t1;
	

//	t3.name=t1.name;

	printf("%d %s\n",t1.num,t1.name);
	printf("%d %s\n",t2.num,t2.name);
	printf("%d %s\n",t3.num,t3.name);

	return 0;
}


	