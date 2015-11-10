/*
Prob No.496 : 건초더미 [CH03.2.USACO(Bronze)]

Time Limit(Test case) : 1000(ms)
Total Submit : 19    Accepted : 15
Background

농부 존은 N개(1<=N<=10,000)의 건초더미를 같은 높이로 맞추어 놓았다. 

하지만 젖소들이 몇몇 건초더미에서 다른 건초더미들로 옮겨놓았다. 따라서 더 이상 각 건초더미의 높이는 같지 않다. 

모든 건초더미의 높이가 주어질 때 모든 건초의 높이를 처음과 같이 모두 같게 만들기 위해서 옮겨야 하는 최소 건초더미의 수를 구하는 프로그램을 작성하시오.
Input

첫 번째 줄에는 파일의 개수가 주어진다. 
두 번째 줄부터 N줄에 걸쳐서 각 파일의 키가 한 줄에 하나씩 입력된다. 각 값은 10,000을 넘지 않는다.
Output

옮겨야 하는 건초더미의 최소값을 출력한다.
IO Example

입력 
4 
2 
10 
7 
1 

출력 
7 

* 설명 : 3개의 건초를 2번 더미에서 1번 더미로, 2개의 건초를 2번 더미에서 4번으로 2개를 3번에서 4번 건처로 옮기면 모두 높이가 5가 된다. 더 이상 줄일 수 있는 방법은 없다. 

USACO 2011 December Contest, Bronze Division 
*/
#include<cstdio>
int n,s,d[10001],i=1,t;
main(){for(scanf("%d",&n);i<=n;i++){scanf("%d",&d[i]);s+=d[i];}t=s/n;for(s=0,i=1;i<=n;i++)if(t-d[i]>0)s+=t-d[i];printf("%d",s);}