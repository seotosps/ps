/*
4�� 2���� �迭�� �Է¹޾� ������հ� ������� 
�׸��� ��ü����� ����ϴ� ���α׷��� �ۼ��Ͻÿ�. 
(�Ҽ��� ���ϴ� ���� �Ѵ�.)

  
16 27
39 100
19 88
61 20

������� 21 69 53 40
������� 33 58
��ü��� 46
*/

#include<stdio.h>

int main(){
	int a[4][2];

	int vs=0, hs1=0,hs2=0, total=0;

	int i,j;

	for(i=0;i<4;i++)
		for(j=0;j<2;j++){
			scanf("%d",&a[i][j]);
			total+=a[i][j];
		}

	printf("������� ");

	for(i=0;i<4;i++)
		printf("%d ",(a[i][0]+a[i][1])/2);
	printf("\n������� ");
	for(i=0;i<4;i++){
		hs1+=a[i][0];
		hs2+=a[i][1];
	}
	printf("%d %d\n",hs1/4,hs2/4);
	printf("��ü��� %d",total/8);
	return 0;
}
