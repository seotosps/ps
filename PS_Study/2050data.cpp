
#include<iostream>
#include<math.h>
#include<time.h>
#define MAX 10000000
int incount, indata[200][200], sacnt=0, sasize=0, samax=0;
void f(int x,int y){
    sacnt++;
    indata[x][y]=0;
    if(indata[x][y+1] ==1 && y+1<=n) f(x,y+1);
    if(indata[x][y-1] ==1 && y-1>0) f(x,y-1);
    if(indata[x+1][y] ==1 && x+1<=n) f(x+1,y);
    if(indata[x-1][y] ==1 && x-1>0) f(x-1,y);

}
int main()
{
	// 입력데이터 만들기
	int count=1;
	char buffer1[200],buffer2[200],flag[101]={0};
	srand(time(NULL));
	for(;count<=20;count++){
		FILE *out;

		sprintf(buffer1,"data%02d.in",count);
		out=freopen(buffer1,"w+",stdout);
        int n;
        n=rand()%100+1;
        printf("%d\n",n);
        for(int i=1;i<=n;i++){
            for(j=1;j<=n;j++){
                    int k=rand()%2;
                    printf("%d ",k);
            }
            printf("\n");
        }

		fclose(out);
	}


	for(count=1;count<=20;count++)
	{
		// 입력데이터 입력받기
		FILE *in,*out;


		sprintf(buffer1,"data%02d.in",count);
		in=freopen(buffer1,"r",stdin);
				// 출력데이터 만들기
		sprintf(buffer2,"data%02d.out",count);
		out=freopen(buffer2,"w+",stdout);

        scanf("%d",&incount);
        for(int i=1;i<=incount;i++)
            for(int j=1;j<=incount;j++)
                scanf("%d",&indata[i][j]);
        for(int i=1;i<=incount;i++){
            for(int j=1;j<=incount;j++){
                    if(indata[i][j]==1){
                        sasize
                        f(i,j);
                        if(sacnt>samax) samax=sacnt;
                        sacnt=0;
                    }
            }
        }
        printf("%d





		//실제 프로그램 accept


		fclose(in);
		fclose(out);
	}
	return 0;
}
