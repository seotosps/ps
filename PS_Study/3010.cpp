#include<stdio.h>
class MousePoint{
private :
    int x;
    int y;
public:
    void SetXY(int nx, int ny);
    void PrintXY();
};
inline void MousePoint::SetXY(int nx, int ny){
    x = nx;
    y=ny;
}
void MousePoint::PrintXY(){
    printf("%d %d",x,y);
}

int main(){
    MousePoint x;
    x.SetXY(10,20);
    x.PrintXY();
    return 0;
}



