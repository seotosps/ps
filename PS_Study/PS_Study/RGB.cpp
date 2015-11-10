#include <stdio.h>

#define WIDTH 1024

#define HEIGHT 768

#define HEADER 54


unsigned char R[HEIGHT][WIDTH],G[HEIGHT][WIDTH],B[HEIGHT][WIDTH];

int main( )

{

    FILE *fp1 = fopen("1024x768.bmp","rb");     //읽을 bmp 파일

    FILE *fp2 = fopen("1024x768_x.bmp","wb"); //만들 bmp 파일

    int i, j;

    for(i=0; i<HEADER; i++)  //bmp 파일 헤더를 그~대로 복사.. 54바이트까지 bmp 파일 정보가 들어가 있습니다.

        putc(getc(fp1), fp2);



    for(i=0; i<HEIGHT; i++)  //RGB 컬러가 역으로 배치되어서 8비트씩 BGR 순서대로 기록되어있습니다.

        for(j=0; j<WIDTH; j++)

        {

            B[i][j]=getc(fp1);

            G[i][j]=getc(fp1);

            R[i][j]=getc(fp1);

        }


    //이 정도 부분에서 배열 가지고 작업!! 하면 여러 가지 필터나 효과등을 마구 만들어 낼 수 있다.


    for(i=0; i<HEIGHT; i++)

        for(j=0; j<WIDTH; j++)

        {

                putc(B[i][j],fp2);

                putc(G[i][j],fp2);
                if(i<30){
                     R[i][j]=0;
                }
                putc(R[i][j],fp2);

        }

    return 0;

}
