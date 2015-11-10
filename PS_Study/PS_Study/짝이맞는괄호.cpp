
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
    // 입력데이터 만들기
    int count=1;
    char buffer1[200],buffer2[200],flag[101]= {0};
   // srand(time(NULL));
    for(count=1; count<=10; count++) {
        // 입력데이터 입력받기
        FILE *in,*out;

        sprintf(buffer1,"data%02d.in",count);
        in=freopen(buffer1,"r",stdin);
        // 출력데이터 만들기
        sprintf(buffer2,"data%02d.out",count);
        out=freopen(buffer2,"w+",stdout);

        stack<int> s;
        int i, len, t, q, w;
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
            return 0;
        }
        for(i = 0 ; i < len ; i++)
            if ( str[i] == '(' )
                s.push(i);
            else if ( str[i] == ')' )
                if ( s.empty() ) {
                    printf( "not match" );
                    break;
                } else {
                    t = s.top();
                    s.pop();
                    printf( "%d %d\n", t, i );
                }

        //실제 프로그램 accept


        fclose(in);
        fclose(out);
    }
    return 0;
}
