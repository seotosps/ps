#include<iostream>
#include<math.h>
#include<time.h>
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
		out=freopen(buffer1,"w+",stdout);

		int n;
		while(!flag[n]) n=rand()%100+1;
		flag[n]=1;
		printf("%d",n);
		fclose(out);
	}


	for(count=1;count<=20;count++)
	{
		// �Էµ����� �Է¹ޱ�
		FILE *in,*out;


		sprintf(buffer1,"data%02d.in",count);
		in=freopen(buffer1,"r",stdin);

		int n;
		scanf("%d",&n);



		// ��µ����� �����
		sprintf(buffer2,"data%02d.out",count);
		out=freopen(buffer2,"w+",stdout);

		//���� ���α׷� accept

		int i,j,k=1,temp=0;
		for(i=1;i<=n;i++){
			temp=k++;
			for(j=0;j<n;j++){
				printf("%d ",temp);
				temp+=n;
			}
			printf("\n");
		}

		fclose(in);
		fclose(out);
	}
	return 0;
}
