#include<time.h>
#define MAXN 32
#define K 0.000015
unsigned int map[MAXN+1][MAXN+1];
int getX(int n)
{
	int i, j, rev=0;
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)	if(!map[i][j])	 rev++;
	}
	return rev;
}
int Perturb(int t, int n)
{
	int i;
	if(t<n)
	{
		for(i=0;i<n;i++)
		{
			if(map[t][i]) map[t][i] = 0;
			else map[t][i] = 1;
		}
	}
	else
	{
		for(i=0;i<n;i++)
		{
			if(map[i][t-n]) map[i][t-n] = 0;
			else map[i][t-n] = 1;
		}
	}
	return getX(n);
}
main(void)
{
	double T=1.0;
	char temp[33];
	int n, i, j, X_init, X_update, t, min = 100000;
	unsigned long a = clock();
	srand(time(NULL));
	scanf("%d", &n);
	for(i=0;i<n;i++)
	{
		scanf("%s", temp);
		for(j=0;j<n;j++)	map[i][j] = (temp[j]=='H') ? 1 : 0;
	}
	X_init = getX(n);
	// start of Simulated Annealing
	while(T > 0.0000001)
	{
		for(i=0; i<n*2;i++)
		{
			if(clock() - a > 610000) break;
			t = rand() % (n*2);
			X_update = Perturb(t, n);
			if( exp(X_init-X_update)/(K*T) > ((double)rand() / 32767) ) X_init = X_update;
			else Perturb(t, n);
			if(min > X_init) min = X_init;
		}
		T *= 0.995;
	}
	printf("%d\n", min);
}