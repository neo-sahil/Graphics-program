#include<stdio.h>
#include<graphics.h>
#include<conio.h>

using namespace std;
int main()
{
    int gd=0,gm,r,xc,yc,i,d,x=0,y;
    initgraph(&gd,&gm,"");

    printf("Enter the radius of the circle\n");
    scanf("%d",&r);
    printf("Enter the center co-ordinates of the circle\n");
    scanf("%d%d",&xc,&yc);

    d=1-r;
    y=r;

    while(x<=y)
    {
        if(d<0)
        {
            x=x+1;
            d=d+2*x+3;
            putpixel(xc+x,yc+y,4);//a,b
            putpixel(xc+y,yc+x,4);//b,a
            putpixel(xc-x,yc+y,4);//-a,b
            putpixel(xc-y,yc+x,4);//-b,a
            putpixel(xc+x,yc-y,4);//a,-b
            putpixel(xc-x,yc-y,4);//-a,-b
            putpixel(xc+y,yc-x,4);//b,-a
            putpixel(xc-y,yc-x,4);//-b,-a
        }
        else
        {
            x=x+1;
            y=y-1;
            d=d+2*x-2*y+5;
            putpixel(xc+x,yc+y,4);//a,b
            putpixel(xc+y,yc+x,4);//b,a
            putpixel(xc-x,yc+y,4);//-a,b
            putpixel(xc-y,yc+x,4);//-b,a
            putpixel(xc+x,yc-y,4);//a,-b
            putpixel(xc-x,yc-y,4);//-a,-b
            putpixel(xc+y,yc-x,4);//b,-a
            putpixel(xc-y,yc-x,4);//-b,-a
        }
    }

    getch();
    closegraph();
}
