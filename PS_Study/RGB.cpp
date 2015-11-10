#include <stdio.h>

#define WIDTH 1024

#define HEIGHT 768

#define HEADER 54


unsigned char R[HEIGHT][WIDTH],G[HEIGHT][WIDTH],B[HEIGHT][WIDTH];

int main( )

{

    FILE *fp1 = fopen("1024x768.bmp","rb");     //���� bmp ����

    FILE *fp2 = fopen("1024x768_x.bmp","wb"); //���� bmp ����

    int i, j;

    for(i=0; i<HEADER; i++)  //bmp ���� ����� ��~��� ����.. 54����Ʈ���� bmp ���� ������ �� �ֽ��ϴ�.

        putc(getc(fp1), fp2);



    for(i=0; i<HEIGHT; i++)  //RGB �÷��� ������ ��ġ�Ǿ 8��Ʈ�� BGR ������� ��ϵǾ��ֽ��ϴ�.

        for(j=0; j<WIDTH; j++)

        {

            B[i][j]=getc(fp1);

            G[i][j]=getc(fp1);

            R[i][j]=getc(fp1);

        }


    //�� ���� �κп��� �迭 ������ �۾�!! �ϸ� ���� ���� ���ͳ� ȿ������ ���� ����� �� �� �ִ�.


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
