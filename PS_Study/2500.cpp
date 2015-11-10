
#include<iostream>
using namespace std;
int containers[26];
int n, k;
int selected[10000][26], temp[26]; // 경우의 수를 10000개 이하로 설정함
int o;
void input()
{
	cin >> n >> k;
	char s;
	for(int i=0;i<=n-1;i++)
	{
		cin >> s;
		containers[(int)s-97]++; // 컨테이너 종류의 수를 센다.
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
			containers[i]--; // 컨테이너 종류에 따른 개수를 하나씩 감소
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
	back(0,0); // 초기값을 0으로 시작
	output();
	return 0;
}
