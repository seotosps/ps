#include<iostream>
#include<math.h>
#include<time.h>
#include<stdlib.h>
#include<stdio.h>
#define MAX 10000000
int main()
{
	// �Էµ����� �����
	int count=1;
	char buffer1[200],buffer2[200],flag[101]={0};
	srand(time(NULL));
	for(;count<=20;count++){
		FILE *out;

		sprintf(buffer1,"data%02d.in",count);
		out=freopen(buffer1,"w",stdout);

		int n=rand()%40+10;
		printf("%d ",n);
		printf("%d",n/4);
		fclose(out);
	}


	for(count=1;count<=20;count++)
	{
		// �Էµ����� �Է¹ޱ�
		FILE *in,*out;


		sprintf(buffer1,"data%02d.in",count);
		freopen(buffer1,"r",stdin);
				// ��µ����� �����
		sprintf(buffer2,"data%02d.out",count);
		freopen(buffer2,"w",stdout);

		int n,k;
		scanf("%d%d",&n,&k);
		double r,result;
		r=n/2.0;
		n=n-k;
		result=sqrt(r*r-n*n);
		printf("%.2lf",result);

		//���� ���α׷� accept

	}
	return 0;
}

