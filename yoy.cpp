#include<stdio.h>
#include<graphics.h>
#include<conio.h>

using namespace std;
int main()
{
    int gd=0,gm;
    initgraph(&gd,&gm,"");
    circle(100,80,20);
    getch();
    closegraph();
}
