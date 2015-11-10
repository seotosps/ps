#include <stdio.h>
#include <algorithm>
int n, m;
int x[1605], y[1605], r[1605];
int st[45], end[45], maxsum[1605][45];
int px[45], py[45], max[45], cnt;
int path[45], flag;
int answer[45];
int a[45][45];
struct List {
    int count, index;
    bool operator()(List a,List b) {
        return a.count > b.count;
    }
} list[85];
void dfs(int count) {
    int i, j;
    if(count == cnt) {
        flag=1;
        return;
    }
    int maximum = 0;
    for(j=0; j<n; j++) if(x[j] <= px [list[count].index] && py
                              [list[count].index] <= y[j]) {
            if(r[j] - maxsum[j][count+1] > maximum)
                maximum = r[j] - maxsum[j][count+1];
        }
    int min = max[list[count].index];
    for(j=0; j<n; j++) if(x[j] <= px [list[count].index] && py
                              [list[count].index] <= y[j]) {
            if(min > r[j]) min = r[j];
        }
    for(i=maximum; i<=min; i++) {
        for(j=0; j<n; j++) if(x[j] <= px [list[count].index] && py
                                  [list[count].index] <= y[j]) r[j] -= i;
        path[count] = i;
        dfs(count+1);
        if(flag) return;
        path[count] = 0;
        for(j=0; j<n; j++) if(x[j] <= px [list[count].index] && py
                                  [list[count].index] <= y[j]) r[j] += i;
    }
}
int main() {
    int i,j;
    scanf("%d %d",&m,&n);
    for(i=1; i<=m; i++) for(j=1; j<=m; j++) a[i][j] = 1e9;
    for(i=0; i<n; i++) {
        scanf("%d %d %d",&x[i],&y[i],&r[i]);
        if(a[ x[i] ][ y[i] ] != 1e9) {
            if(a[ x[i] ][ y[i] ] !=
                    r[i]) {
                printf("NONE\n");
                return 0;
            }
            n--;
            i--;
        } a
        [ x[i] ][ y[i] ] = r[i];
    }
    int flagg;
    for(;;) {
        flagg = 0;
        for(i=0; i<n; i++) for(j=0; j<n; j++) if(x[i] == x[j] && y[i]
                        < y[j]) x[j] = y[i] + 1, r[j] = r[j] - r[i], flagg = 1;
        for(i=0; i<n; i++) for(j=0; j<n; j++) if(y[i] == y[j] && x[i]
                        > x[j]) y[j] = x[i] - 1, r[j] = r[j] - r[i], flagg = 1;
        for(i=0; i<n; i++) {
            if(x[i] > y[i]) {
                for(j=i; j<n-1; j++) x[j] =
                        x[j+1], y[j] = y[j+1], r[j] = r[j+1];
                n--;
            }
        }
        if(flagg == 0) break;
    }
    for(i=0; i<n; i++) st[x[i]] = 1,end[y[i]] = 1;
    int X, Y;
    X = 1;
    for(i=1; i<=m; i++) {
        if(st[i]) X = i;
        if(end[i] || st[i+1]) Y = i, px[cnt] = X, py[cnt] = Y,
                                                   max[cnt++] = Y-X+1, X = Y+1;
    }
    for(i=0; i<n; i++)
        for(j=0; j<cnt; j++)
            if(x[i] <= px[j] && py[j] <= y[i]) {
                list[j].count ++;
                if(max[j] > r[i]) max[j] = r[i];
            }
    for(i=0; i<cnt; i++) list[i].index = i;
    std::sort(list, list+cnt, List());
    for(i=0; i<n; i++)
        for(j=cnt-1; j>=0; j--)
            if(x[i] <= px[list[j].index] && py[list[j].index]
                    <= y[i]) maxsum[i][j] = maxsum[i][j+1] + max[list[j].index];
            else maxsum[i][j] = maxsum[i][j+1];
    dfs(0);
    if(flag == 0) {
        printf("NONE\n");
    } else {
        for(i=0; i<cnt; i++) for(j = px[list[i].index]; j <=
                                     py[list[i].index] && path[i]; j++) answer[j] = 1, path[i] --;
        for(i=1; i<=m; i++) printf((answer[i])?"#":"-");
    }
    return 0;
}
