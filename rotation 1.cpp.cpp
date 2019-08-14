#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<math.h>
#define pi 3.14
using namespace std;

int main()
{
   int gd=0,gm,i,k,j,x1,y1,x2,y2,x3,y3,x4,y4,x;
   float val=pi/180,a,b,sum;
    initgraph(&gd,&gm,"");
    printf("Enter the co-ordinates of the square\n");
    scanf("%d%d%d%d%d%d%d%d",&x1,&y1,&x2,&y2,&x3,&y3,&x4,&y4);
    printf("Enter the angle for rotation\n");
    scanf("%d",&x);
    a=sin(x*val);
    b=cos(x*val);
    printf("%f %f\n",a,b);
    int p[4][3]={x1,y1,1,x2,y2,1,x3,y3,1,x4,y4,1};
    float t[3][3]={b,a,0,-a,b,0,0,0,1};
    float c[4][3];
    rectangle(x1,y1,x3,y3);
    for(i=0;i<4;i++)
    {
        for(j=0;j<3;j++)
        {
            sum=0.0;
            for(k=0;k<3;k++)
            {
                sum=sum+(float)p[i][k]*t[k][j];
            }
            c[i][j]=sum;
        }
    }
    for(i=0;i<4;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%f ",c[i][j]);
        }
        printf("\n");
    }
   printf("The rotated co-ordinates of the square are\n");
    printf("(%f,%f)\n(%f,%f)\n(%f,%f)\n(%f,%f)\n",c[0][0],c[0][1],c[1][0],c[1][1],c[2][0],c[2][1],c[3][0],c[3][1]);

    rectangle(c[0][0],c[0][1],c[2][0],c[2][1]);
    getch();
    closegraph();
}
