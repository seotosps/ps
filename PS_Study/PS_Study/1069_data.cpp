
#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<time.h>
#define MAX 1000001
#define MUL 1000
int data[0xffffff];
char buffer1[200],buffer2[200];
int main()
{
	// 입력데이터 만들기
	int count;


	char str[200]="This school is one of 20 Science High Schools in Korea. It is a 28 year old co-ed public high school. All of our students live on campus in the dormitory. Our school has consistently been ranked amongst the top schools in students achievement. In addition to our high university admissions rate, our students have also won many prizes in various math and science competitions.";
	srand((unsigned)time(NULL));

	for(count=1;count<=10;count++){
        FILE *out;
		sprintf(buffer1,"data%03d.in",count);
		out=freopen(buffer1,"w+",stdout);
        int temp1=0,i,j;
        for(i=1;i<=24;i++){
            j=rand()%2;
            temp1<<=1;
            temp1|=j;
        }

		printf("%d\n",temp1);

		fclose(out);
	}


	for(count=1;count<=10;count++)
	{
		// 입력데이터 입력받기
		FILE *in,*out;
		sprintf(buffer1,"data%03d.in",count);
		in=freopen(buffer1,"r",stdin);
		sprintf(buffer2,"data%03d.out",count);
		out=freopen(buffer2,"w+",stdout);

        int n, i=2,j,tc=0;
        scanf("%d",&n);
        if(n>2){
            for(i=3;i*i<n;i+=2){
                if(!data[i]){
                    for(j=2;j*i<=n;j++)
                        data[i*j]=1 ;
                }
            }
           for(i=3;i<=n;i=i+2){
                if(!data[i]){
                        tc++;
                }
            }
            printf("%d",tc+1);
        }
        else printf("1");



		fclose(in);
		fclose(out);
	}

	return 0;
}
