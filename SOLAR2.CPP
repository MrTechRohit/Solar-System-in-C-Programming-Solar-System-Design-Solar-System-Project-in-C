//__________ WELCOME ALL OF YOU ON ROHIT TECH STUDY CHANNEL _______________//
//--------------- C++ PROGRAM TO SOLAR SYSTEM ANIMATION -------------------//

/*........................................................................*/

#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<dos.h>
#include<math.h>
int main()
{
int hit=1,sun_r,x,y,mer_r,ven_r, ear_r,mar_r, jup_r,sat_r,ura_r, nep_r,t=0;
int gd=DETECT, gm;

initgraph(&gd, &gm,"C:\\TC\\bgi");

do
{
cleardevice();

//For Sun
sun_r=30;
setcolor(YELLOW);
setfillstyle(SOLID_FILL,YELLOW);
circle(300,200,sun_r);
floodfill(300,200,YELLOW);
settextstyle(0,0,0);
setcolor(1);
outtextxy(290,195,"SUN");

//orbit for Mercury
setcolor(WHITE);
ellipse(300,200,0,360,50,20);

//TO Mercury
mer_r=5;
setcolor(6);
x=300+50*cos(360-t*0.92047);
y=200+20*sin(360-t*0.92047);
setfillstyle(SOLID_FILL,6);
circle(x,y,mer_r);
floodfill(x,y,6);
setcolor(9);
outtextxy(x+6,y,"MERCURY");

//orbit for Venus
setcolor(WHITE);
ellipse(300,200,0,360,80,30);

//To Venus
ven_r=6;
setcolor(5);
x=300+80*cos(360-t*0.750047);
y=200+30*sin(360-t*0.750047);
setfillstyle(SOLID_FILL,5);
circle(x,y,ven_r);
floodfill(x,y,5);
setcolor(9);
outtextxy(x+7,y,"VENUS");

//ORBIT TO EARTH
setcolor(WHITE);
ellipse(300,200,0,360,110,40);

//TO EARTH
ear_r=11;
setcolor(10);
x=300+110*cos(360-t*0.6056);
y=200+40*sin(360-t*0.6056);
setfillstyle(SOLID_FILL,10);
circle(x,y,ear_r);
floodfill(x,y,10);
setcolor(9);
outtextxy(x+12,y,"EARTH");

//MARS ORBIT
setcolor(WHITE);
mar_r=8;
ellipse(300,200,0,360,140,50);

//TO MARS
setcolor(4);
setfillstyle(SOLID_FILL,4);
x=300+140*cos(360-t*0.4057);
y=200+50*sin(360-t*0.4057);
circle(x,y,mar_r);
floodfill(x,y,4);
setcolor(9);
outtextxy(x+9,y,"MARS");

//ORBIT JUPITER
setcolor(WHITE);
ellipse(300,200,0,360,180,70);

//TO JUPITER
jup_r=15;
setcolor(8);
setfillstyle(SOLID_FILL,8);
x=300+180*cos(360-t*0.25047);
y=200+70*sin(360-t*0.25047);
circle(x,y,jup_r);
floodfill(x,y,8);
setcolor(9);
outtextxy(x+16,y,"JUPITER");

//ORBIT SATURN
setcolor(WHITE);
ellipse(300,200,0,360,200,90);

//TO SATURN
sat_r=14;
setcolor(5);
setfillstyle(SOLID_FILL,5);
x=300+200*cos(360-t*0.12047);
y=200+90*sin(360-t*0.12047);
circle(x,y,sat_r);
floodfill(x,y,5);
setcolor(9);
outtextxy(x+15,y,"SATURN");

//ORBIT URANUS
setcolor(WHITE);
ellipse(300,200,0,360,220,110);

//TO URANUS
ura_r=13;
setcolor(3);
setfillstyle(SOLID_FILL,3);
x=300+220*cos(360-t*0.0409);
y=200+110*sin(360-t*0.0409);
circle(x,y,ura_r);
floodfill(x,y,3);
setcolor(9);
outtextxy(x+14,y,"URANUS");

//ORBIT NEPTUNE
setcolor(WHITE);
ellipse(300,200,0,360,240,120);

//TO NEPTUNE
nep_r=12;
setcolor(9);
setfillstyle(SOLID_FILL,9);
x=300+240*cos(360-t*0.01145);
y=200+120*sin(360-t*0.01145);
circle(x,y,nep_r);
floodfill(x,y,9);
setcolor(9);
outtextxy(x+13,y,"NEPTUNE");

settextstyle(1,0,4);
setcolor(GREEN);
outtextxy(80,5,"Created by:- ROHIT TECH STUDY");

settextstyle(1,0,5);
setcolor(14);
outtextxy(160,400,"SOLAR SYSTEM");

delay(150);

t++;
if(kbhit())
{
hit =0;
break;
}
}
while(hit);

getch();
closegraph();
return(0);
}


/*_________________ I HOPE YOU LIKE THIS PROGRAMMING _____________________*/

//.............. LIKE  ....... SHARE ......... SUBSCRIBE .................//




