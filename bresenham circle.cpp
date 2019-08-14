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

    d=3-2*r;
    y=r;

    while(x<=y)
    {
        if(d<0)
        {
            x=x+1;
            d=d+4*x+6;
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
            d=d+4*x-4*y+10;
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
