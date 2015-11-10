#include <stdio.h>
int main( ){
    int a, b, c, sn;
    char m[3]={'A','B','C' };
    char n[10]="AABBACBBC";
    for(a=0; a<=2; a++){
        c=0;
        for(b=0; b<9; b++){
            if(m[a]==n[b]){
                c=c+1;
            }
        }
        printf("%c %d \n", m[a], c);
    }
    return 0;
}
