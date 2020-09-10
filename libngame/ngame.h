#ifndef NGAME_H_
#define NGAME_H_

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <ncurses.h>

//initialize essentials of ncurses:
//colors
int initcolors();
int domran(int r);
int rcolor();
char rchar();
void createColor(int i,int col1,int col2,int r);//i: id number, col1: color one, col2: color two, r: bool: generate random colors? 1 or 0
void setcolors(int i);
//end
void endg();

//draw stuff
void putch(int x, int y,char c);
void puttxt(int x, int y,char * str);
void line(int x1,int y1,int x2,int y2,char c);
void rectangle(int x1,int y1,int x2,int y2,char c);

#endif
