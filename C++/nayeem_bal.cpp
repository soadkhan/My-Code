#include <graphics.h>
#include <conio.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <dos.h>

const int pi=3.1415927;     /*part of the initial sinewave drawing */

void main()
  {
  void drawstar();
  int graphdriver, graphmode, errorcode, i;
  double swing, width, crest, ypos;

  graphdriver = DETECT;
  initgraph(&graphdriver, &graphmode, "C:\\TC\\BGI");
  errorcode = graphresult();
  if (errorcode != grOk)
    {
    printf("Graphics System Error: %s\n",grapherrormsg (errorcode));
    exit(1);
    }
  ypos = getmaxy() /2;
  crest = getmaxy() /4;
  width = getmaxx();
  for (i=0; i<width; i++)
    {
    swing=crest*sin(10*pi*i/width);
    putpixel(i, ypos+swing, RED);
    putpixel(i, ypos-swing, BLUE);
    }
  sleep(2);
  drawstar();
  closegraph();
  }
void drawstar()
  {
  cleardevice();   //NOT clrscr();
  setcolor(BLACK);
  int x,y;
  int half1[] = {120,20, 106,40, 80,40, 93,60, 80,80, 106,80, 120,100, 134,80, 160,80, 147,60, 160,40, 134,40, 120,20};
  fillpoly(13, half1);
  setcolor(BLUE);
  settextstyle(TRIPLEX_FONT, HORIZ_DIR, 2);
  outtextxy(190,20, "... and a bright star shone in the East");
  setcolor(RED);
  settextstyle(GOTHIC_FONT, HORIZ_DIR, 8);
  outtextxy(33,30, "Merry Christmas");
  settextstyle(GOTHIC_FONT, HORIZ_DIR, 6);
  outtextxy(95,120, "and Happy Holidays");
/*  outtextxy(190,90, "to Everyone at"); */
/*  settextstyle(GOTHIC_FONT, HORIZ_DIR, 8); */
/*  outtextxy(30,120, "  This  Home"); */
  getch();
  }
