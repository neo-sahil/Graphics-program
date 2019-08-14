#include<stdio.h>
#include<conio.h>
#include<graphics.h>
using namespace std;

int main()
{
    int WXmin,WYmin,WXmax,WYmax,x1,y1;
    int gd=0,gm,a,b;

    printf("Enter the lower left corner coordinates of window:\n");
    scanf("%d%d",&WXmin,&WYmin);
    printf("Enter the upper right corner coordinates of window:\n");
    scanf("%d%d",&WXmax,&WYmax);

    printf("Enter the coordinate of the point\n");
    scanf("%d%d",&x1,&y1);

    if(x1>=WXmin && x1<=WXmax)
        a=1;
    else
        a=0;
    if(y1>=WYmin && y1<=WYmax)
        b=1;
    else
        b=0;

    if(a==1 && b==1)
        printf("point is inside the window\n");
    else if(a==0 && b==0)
        printf("point is outside the window\n");

    initgraph(&gd,&gm,"");
    rectangle(WXmin,WYmin,WXmax,WYmax);
    putpixel(x1,y1,4);
    getch();
    closegraph();
}

