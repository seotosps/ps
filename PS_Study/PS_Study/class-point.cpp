#include<stdio.h>
struct person{
    int sn,age;
    char name[10];
};
void f(struct person *sp,int n){
    for(int i=0;i<n;i++)
        printf("%d %d %s\n",sp[i].sn,sp[i].age,sp[i].name);

}
int main(){
    int n;    struct person p[20];
    scanf("%d",&n);
    for(int i=0;i<n;i++)
        scanf("%d %d %s",&p[i].sn,&p[i].age,p[i].name);
    f(p,n);
    return 0;
}
