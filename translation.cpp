#include<conio.h>
#include<stdio.h>
#include<graphics.h>
using namespace std;

int main()
{
    int gd=0,gm,i,k,j,sum,x1,y1,x2,y2,x3,y3,x4,y4,xt,yt;
    initgraph(&gd,&gm,"");
    printf("Enter the co-ordinates of the square\n");
    scanf("%d%d%d%d%d%d%d%d",&x1,&y1,&x2,&y2,&x3,&y3,&x4,&y4);
    printf("Enter the co-ordinates where you want to translate\n");
    scanf("%d%d",&xt,&yt);
    int p[4][3]={x1,y1,1,x2,y2,1,x3,y3,1,x4,y4,1};
    int t[3][3]={1,0,0,0,1,0,xt,yt,1};
    int c[4][3];
    rectangle(x1,y1,x3,y3);

    for(i=0;i<4;i++)
    {
        for(j=0;j<3;j++)
        {
            sum=0;
            for(k=0;k<3;k++)
            {
                sum=sum+p[i][k]*t[k][j];
            }
            c[i][j]=sum;
        }
    }
    for(i=0;i<4;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d ",c[i][j]);
        }
        printf("\n");
    }
    x1=c[0][0];y1=c[0][1];
    x2=c[1][0];y2=c[1][1];
    x3=c[2][0];y3=c[2][1];
    x4=c[3][0];y4=c[3][1];

    printf("The translated co-ordinates of the square are\n");
    printf("(%d,%d)\n(%d,%d)\n(%d,%d)\n(%d,%d)\n",x1,y1,x2,y2,x3,y3,x4,y4);

    rectangle(x1,y1,x3,y3);
    getch();
    closegraph();
}
