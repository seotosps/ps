/*
Prob No.696 : �ָ��ٱ��ȸ(Small) [CH02.2.Algorithm(Design)]
Time Limit(Test case) : 1000(ms)
Total Submit : 193    Accepted : 112
The Champion of this Problem (C++) : gs13068


Background
GSHS���� n���� �л����� �ָ��ٱ� ��ȸ�� �ߴ�.

�� �л��� �̸��� ��ȣ�� �Ҹ��� 1������ n�������� n���� �л����� ��ȸ�� �����Ͽ���.

�ٴ� ������ �ڽ��� ��ȣ(�̸�) ������ �ڴ�.

sutekine�������� �� �л��� �ָ��ٱ� �Ÿ��� ��������� ������ ����ߴ�.

5���� �л��� ������ ��ȸ ����� ������ ���Ҵ�.


1�� �л�  ��� 2m    ������� 1��

2�� �л�  ��� 1m75  ������� 2��

3�� �л�  ��� 1m98  ������� 2��

4�� �л�  ��� 2m15  ������� 1��

5�� �л�  ��� 1m83  ������� 4��



�� ����� ��ü ������ ������ �ߴµ� ���ڱ� �� ���� ��ũ�� ������ ���Ҵ�.

��!!! ����� ��� ��������. ���� ���� �л� ��ȣ�� ���� ���̴�.

��, 5���� �л��� ���� ������ 1 2 2 1 4��� �ڷ� �ۿ� ���� �ʾҴ�.

��ȸ�� �ٽ� ���� ���� �ʹ� �����Ƽ� sutekine �������� �Ӹ��� ����� �ߴ�.

�Ӹ��� �� �Ἥ �� ������ ��ü 1������ 5������ �л����� ��ȣ�� ���ϴ� ������ ���Ҵ�.

4 1 3 5 2

�� 4���� 1��, 1���� 2�� 3���� 3�� 5���� 4�� 2���� 5���̶�� �ǹ��̴�.

���� ������ �̿��Ͽ� ��ü������ ���ϴ� ���α׷��� �ۼ��Ͻÿ�.
Input
ù ��° �ٿ� ������ �� n�� �Էµȴ�. (n�� 2,000������ �ڿ���)
�� ��° �ٿ� n���� ���� ������ �������� ���еǾ� �Էµȴ�.
Output
���� ���� 1�� ���� n�������� ��ȣ�� �� �ٿ� �ϳ��� ����Ѵ�.
IO Example
�Է�
5
1 2 2 1 4

���
4
1
3
5
2 
*/
#include<iostream>
#include<vector>
#define MAX 20001
using namespace std;
vector<int> rk;
int cr[MAX],p,n,i;
int main()
{
	cin>>n;
	rk.push_back(0);
	for(i=1;i<=n;i++){
		cin>>cr[i];
		if(i>cr[i])
		{
			vector<int>::iterator it=rk.begin();
			rk.insert(it+cr[i],i);
		}
		else rk.push_back(i);
	}
	 
	for(i=1;i<=n;i++)
		cout<<rk[i]<<endl;
	return 0;
}