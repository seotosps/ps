#include<stdio.h>

int Hash_A[110000], Hash_B[110000];

int main() {

	//freopen("p2.in", "r", stdin);
	//freopen("p2.out", "w", stdout);
	
	int n;
	int A[15] = {0}, B[15] = {0};
	int s, i;
	int fakecnt = 0;

	scanf("%d", &n);
	for(s=1 ; s<=n ; s++) {
		scanf("%d", &A[s]);
		Hash_A[A[s]]++;
	}
	for(s=1 ; s<=n ; s++) {
		scanf("%d", &B[s]);
		Hash_B[B[s]]++;
	}

	for(i=1 ; i<=n ; i++) {
		if(Hash_A[i] > 2 || Hash_B[i] > 2) {
			printf("-1");
			return 0;
		}
		else if(Hash_A[i] + Hash_B[i] > 2) {
			printf("-1");
			return 0;
		}
	}

	for(i=1 ; i<=n ; i++) {
		if(Hash_A[i] == 2) 
			fakecnt++;
		if(Hash_B[i] == 2)
			fakecnt++;
	}

	printf("%d", fakecnt);

	return 0;
}