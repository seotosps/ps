#include <stdio.h>
#define INFILE "input.txt"
#define OUTFILE "output.txt"
#define MAXM 100
#define MAXN 100
#define MAXQ 40000
#define INF 100000000
int n, m, tn, tm;
int table[MAXN+2][MAXM+2]= {0,};
int matrix[MAXN+2][MAXM+2][4], trace[MAXN+2][MAXM+2];
int queue[MAXQ][3], qfront, qrear;
int dx[]= {-1,1,0,0}, dy[]= {0,0,-1,1}, neg[]= {1,0,3,2};
int input(void) {

    int i, j;
    scanf( "%d %d %d %d", &m, &n, &tm, &tn);
    for(i=0; i<n; i++)
        for(j=0; j<m; j++)
            scanf("%d", &table[i+1][j+1]);
    tm++;
    tn++;
    return 0;
}
inline int qpush(int n, int m, int d) {
    queue[qfront][0] = n;
    queue[qfront][1] = m;
    queue[qfront][2] = d;
    qfront = (qfront+1)%MAXQ;
    return 0;
}
inline int qpop(int*n, int*m, int*d) {
    *n = queue[qrear][0];
    *m = queue[qrear][1];
    *d = queue[qrear][2];
    qrear = (qrear+1)%MAXQ;
    return 0;
}
int process(void) {
    int i, j, k;
    int cn, cm, cd;
    int tmp;
    for(i=0; i<n+2; i++)
        for(j=0; j<m+2; j++)
            for(k=0; k<4; k++)
                matrix[i][j][k] = INF;
    qfront = qrear = 0;
    matrix[tn][tm][0] = matrix[tn][tm][1] = matrix[tn][tm][2] = matrix[tn][tm][3]=0;
    qpush(tn, tm, 0);
    qpush(tn, tm, 1);
    qpush(tn, tm, 2);
    qpush(tn, tm, 3);
    while(qfront != qrear) {
        qpop(&cn, &cm, &cd);
        for(k=0; k<4; k++) {
            if(table[cn+dy[k]][cm+dx[k]] && k!=neg[cd]) {
                tmp = matrix[cn][cm][cd] + (cd==k ? 0 : 1);
                if(matrix[cn+dy[k]][cm+dx[k]][k] > tmp) {
                    matrix[cn+dy[k]][cm+dx[k]][k] = tmp;
                    qpush(cn+dy[k], cm+dx[k], k);
                }
            }
        }
    }
    for(i=0; i<n+2; i++) {
        for(j=0; j<m+2; j++) {
            trace[i][j] = 0;
            for(k=1; k<4; k++)
                if(matrix[i][j][trace[i][j]] > matrix[i][j][k])
                    trace[i][j] = k;
        }
    }
    return 0;
}
int output(void) {
    FILE* fp;
    printf("%d\n", matrix[1][1][trace[1][1]]);
    return 0;
}
int main(void) {
    input();
    process();
    output();
    return 0;
}
