#include<stdio.h>
#include<graphics.h>
#include<conio.h>

using namespace std;
int main()
{
    int gd=0,gm;
    int x1,x2,y1,y2,dx,dy,d,i,y;
    initgraph(&gd,&gm,"");

    printf("Enter the x1 and y1\n");
    scanf("%d%d",&x1,&y1);
    printf("Enter the x2 and y2\n");
    scanf("%d%d",&x2,&y2);

    dx=x2-x1;
    dy=y2-y1;
    printf("%d %d\n",dx,dy);
    y=dy-dx;
    d=(2*dy)-dx;
    printf("d=%d\n",d);

    putpixel(x1,y1,4);

    for(i=1;i<=dx;i++)
    {
        if(d<0)
        {
           x1=x1+1;
           y1=y1;
           d=d+(2*dy);
           printf("d=%d (%d,%d)\n",d,x1,y1);
           putpixel(x1,y1,4);
        }
        else
        {
            x1=x1+1;
            y1=y1+1;
            d=d+(2*y);
            printf("d=%d (%d,%d)\n",d,x1,y1);
            putpixel(x1,y1,4);
        }
    }
     putpixel(20,10,4);
     putpixel(30,18,4);
    getch();
    closegraph();
}
