#include<stdio.h>
#include<graphics.h>//must be included for every graphics program
#include<conio.h>
#include<dos.h> //for including delay function.

void main()
{
 int gd=DETECT,gm;
 initgraph(&gd,&gm,"C:\\TurboC3\\BGI");

 putpixel(50,50,WHITE);
 line(100,70,200,100);
 circle(230,50,50);
 rectangle(300,40,400, 100);
 ellipse(90,350,0,360,30,20);

 getch();
}