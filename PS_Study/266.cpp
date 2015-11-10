/*
Prob No.266 : Number Triangles (숫자 삼각형) [CH03.1.USACO(Train#1)]

Time Limit(Test case) : 1000(ms)
Total Submit : 9    Accepted : 9
Background

아래 그림과 같은 숫자로 된 삼각형이 있다. 

맨 위에서 출발하여 왼쪽이나 오른쪽 대각선 아래로만 이동가능 하다고 할 때, 얻을 수 있는 최대값을 구하는 프로그램을 작성하시오. 

     7 
    3 8 
   8 1 0 
  2 7 4 4 
 4 5 2 6 5 

위 그림의 경우에는 7 - 3 - 8 - 7 - 5의 경로로 이동하면 30을 얻을 수 있고 이 것이 최대값이다.
Input

첫 번째 줄에 행의 수를 나타내는 R(단 1000이하의 자연수)이 주어진다. 
다음 줄 부터 R줄에 걸쳐서 각 i+1번 째 줄에는 i개의 정수가 공백으로 구분되어 입력된다. 단, 이 값은 100이하의 자연수또는 0이다.
Output

얻을 수 있는 최대값을 출력한다.
IO Example

입력 
5 
7 
3 8 
8 1 0 
2 7 4 4 
4 5 2 6 5 

출력 
30 
*/
#include<cstdio>
int a[1001],b[1001],c[10001],x,y;
main(){int n,i,j;for(scanf("%d",&n),i=1;i<=n;i++){for(j=1;j<=i;)scanf("%d",&a[j++]);for(j=1;j<=i;j++){x=a[j]+b[j];y=a[j]+b[j-1];if(x>y)c[j]=x;else c[j]=y;}for(j=1;j<=n;)b[j]=c[j++];}for(j=0,i=1;i<=n;i++)if(j<b[i])j=b[i];printf("%d",j);}
