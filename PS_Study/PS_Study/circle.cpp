
#include<iostream>
#include<math.h>
#include<time.h>
#include<stdlib.h>
#include<cstdio>
#include<string.h>
#include<stack>
#define MAX 10000000
using namespace std;

int main() {
    // �Էµ����� �����
    int count=1;
    char buffer1[200],buffer2[200];
   // srand(time(NULL));
    for(count=1; count<=10; count++) {
        // �Էµ����� �Է¹ޱ�

        sprintf(buffer1,"data%02d.in",count);
        freopen(buffer1,"r",stdin);
        // ��µ����� �����
        sprintf(buffer2,"data%02d.out",count);
        freopen(buffer2,"w+",stdout);

        stack<int> s;
        int i=0, len=0, t=0, q=0, w=0;
        char str[500]= {0};
        while(!s.empty()) s.pop();
        scanf("%s", str);
        len = strlen(str);
        for(i = 0 ; i < len ; i++) {
            if ( str[i] == '(' )	q++;
            if ( str[i] == ')' )	w++;
        }
        if (q!= w) {
            printf( "not match" );
           continue;
        }
        for(i = 0 ; i < len ; i++)
            if ( str[i] == '(' )
                s.push(i);
            else if ( str[i] == ')' ){
                if ( s.empty() ) {
                    printf( "not match" );
                    break;
                } else {
                    t = s.top();
                    s.pop();
                    printf( "%d %d\n", t, i );
                }
            }

        //���� ���α׷� accept


    }
    return 0;
}

