
#include<iostream>
using namespace std;
int containers[26];
int n, k;
int selected[10000][26], temp[26]; // ����� ���� 10000�� ���Ϸ� ������
int o;
void input()
{
	cin >> n >> k;
	char s;
	for(int i=0;i<=n-1;i++)
	{
		cin >> s;
		containers[(int)s-97]++; // �����̳� ������ ���� ����.
	}
}
void back(int pre, int cnt)
{
	if(cnt == k)
	{
		for(int i=0;i<=cnt-1;i++)
		{
			selected[o][i] = temp[i];
		}
		o++;
		return;
	}
	for(int i=pre;i<=25;i++)
	{
		if(containers[i] > 0)
		{
			containers[i]--; // �����̳� ������ ���� ������ �ϳ��� ����
			temp[cnt] = i;
			back(i,cnt+1);
			temp[cnt] = 0;
			containers[i]++; //
		}
	}
}
void output()
{
	cout << o << endl;
	for(int i=0;i<=o-1;i++)
	{
		for(int j=0;j<=k-1;j++)
			cout << char(selected[i][j]+97) << " ";
		cout << endl;
	}
}
int main()
{
	input();
	back(0,0); // �ʱⰪ�� 0���� ����
	output();
	return 0;
}
