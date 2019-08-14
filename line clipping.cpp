#include<stdio.h>
#include<conio.h>
#include<graphics.h>
using namespace std;

int main()
{
    int WXmin,WYmin,WXmax,WYmax,x1,y1,x2,y2;
    int gd=0,gm,a,b,c,d;

    printf("Enter the lower left corner coordinates of window:\n");
    scanf("%d%d",&WXmin,&WYmin);
    printf("Enter the upper right corner coordinates of window:\n");
    scanf("%d%d",&WXmax,&WYmax);

    printf("Enter the first coordinate of the line\n");
    scanf("%d%d",&x1,&y1);
    printf("Enter the second coordinate of the line\n");
    scanf("%d%d",&x2,&y2);

    if(x1>=WXmin && x1<=WXmax)
        a=1;
    else
        a=0;
    if(y1>=WYmin && y1<=WYmax)
        b=1;
    else
        b=0;

    if(a==1 && b==1)
        a=1;
    else
        a=0;

    if(x2>=WXmin && x2<=WXmax)
        c=1;
    else
        c=0;
    if(y2>=WYmin && y2<=WYmax)
        d=1;
    else
        d=0;

    if(c==1 && d==1)
        c=1;
    else
        c=0;

    if(a==1 && c==1)
        printf("Line is completely inside the window\n");
    else if(a==0 && c==0)
        printf("Line is completely outside the window\n");
    else
        printf("Line is partially inside the window\n");

    initgraph(&gd,&gm,"");
    rectangle(WXmin,WYmin,WXmax,WYmax);
    line(x1,y1,x2,y2);
    getch();
    closegraph();
}
