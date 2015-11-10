#include<cstdio>
int N = 5000, status[5001];
int main() {
	int i, j;
	for( i = 3; i*i <= N; i += 2 ) {
		if( status[i] == 0 ) {

			for( j = i * i; j <= N; j += i + i )
				status[j] = 1; 
		}
	}
	printf("2 ");
	for( i = 3; i <= N; i += 2 ) {
		if( status[i] == 0 ) printf("%d ", i);
	}
	return 0;
}