
#include<iostream>
#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<time.h>
#include<algorithm>
#define MAX 1000001
#define MUL 1000
using namespace std;
int main()
{
	// 입력데이터 만들기
	int count=1;
    char buffer1[200],buffer2[200];
	srand((unsigned)time(NULL));

	for(;count<=20;count++){
		FILE *out;
		sprintf(buffer1,"data%02d.in",count);
		out=freopen(buffer1,"w+",stdout);
		int temp1,i=1,j,k,n;
		temp1=0;
		for(i=1;i<7;i++){
            k=rand()%2;
            temp1<<=1;
            temp1|=k;
        }
        cout<<temp1<<endl;
        n=temp1;
        temp1=0;
        int da[10000]={0};
        for(j=1;j<=n;j++){
            do{
                for(i=1;i<=7;i++){
                    k=rand()%2;
                    temp1<<=1;
                    temp1|=k;
                }
            }while(da[temp1]);
            cout<< temp1<<" ";
            temp1=0;
        }
		fclose(out);
	}

	for(count=1;count<=20;count++)
	{
		// 입력데이터 입력받기
		FILE *in,*out;
		sprintf(buffer1,"data%02d.in",count);
		in=freopen(buffer1,"r",stdin);
		sprintf(buffer2,"data%02d.out",count);
		out=freopen(buffer2,"w+",stdout);

        int i,j,k,data[1000],n;
        cin>>n;

        for(i=0;i<n;i++){
            cin>>data[i];
        }
        sort(data,data+n);
        for(i=0;i<n;i++){
            cout<<data[i]<<" ";
        }



		fclose(in);
		fclose(out);
	}

	return 0;
}
