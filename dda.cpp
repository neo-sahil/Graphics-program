#include<stdio.h>
#include<conio.h>
#include<graphics.h>
using namespace std;

int main()
{
    int gm=0,gd;
    int x1,x2,y1,y2,l,i;
    float m,j,k;
    initgraph(&gm,&gd,"");

    printf("Enter co-ordinates of the line\n");
    scanf("%d%d%d%d",&x1,&y1,&x2,&y2);

    j=y2-y1;
    k=x2-x1;
    m=j/k;

    if(abs(x2-x1)>abs(y2-y1))
    {
        l=abs(x2-x1);
    }
    else
    {
        l=abs(y2-y1);
    }

    for(i=1;i<=l;i++)
    {
        putpixel(x1,y1,RED);
        x1=x1+1;
        y1=m*x1;
        delay(100);
    }
    putpixel(50,100,5);
    getch();
    closegraph();

}
