#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<graphics.h>
void main()
{
	int x,y,x1,y2,dx,dy,l,gd=DETECT,gm,k;
	initgraph(&gd,&gm"C\\TC\\bgi")
	printf("enter x1 and y1=");
	scanf("%d%d",&x1,&y1);
	printf("enter x2 and y2=");
	scanf("%d%d",&x2,&y2);
	dx=x2-x1;
	dy=y2-y1;
	if(abs(dx)>abs(dy))
		l=dx;
	else
		l=dy;
	int xins=dx/l;
	int yins=dy/l;
	x=x1;
	y=y1;
	for(k=1;k<l;K++)
	{
		putpixel(x,y,red)
		x=x+xins;
		y=y+yins;
	}
	closegraph();
	getch();
}
