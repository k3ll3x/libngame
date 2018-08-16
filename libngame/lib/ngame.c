#include "ngame.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <ncurses.h>

int initcolors(){
	if(has_colors()==FALSE){
		endwin();
		printf("Error, no color supported!\n");
		return -1;
	}
	start_color();
}

int domran(int r){
	return rand()%r;
}

int rcolor(){
	return rand()%8;
}

char rchar(){
	int i=rand()%128;
	return (char)i;
}

//not usable
void createColor(int i,int col1,int col2, int r){
	srand(time(NULL));
	if(r){
		if(col1==col2){
			col1=rand()%8;
			col2=col1;
		}else{
			col1=rand()%8;
			col2=rand()%8;
		}
	}
	init_pair(i,col1,col2);
}

//not usable
void setcolors(int i){
	attron(COLOR_PAIR(i));
}

void endg(){
	getch();
	endwin();
}

void putch(int x,int y,char c){
	move(y,x);
	printw("%c",c);
}

void puttxt(int x, int y,char * str){
	move(y,x);
	printw("%s",str);
}

void line(int x1,int y1,int x2,int y2,char c){
	int dx = x2 - x1;
        int dy = y2 - y1;
        int x=x1;
        for(x;x<x2;x++){
                int y = y1 + dy * (x - x1) / dx;
                move(y,x);
                printw("%c",c);
        }
}

void rectangle(int x1,int y1,int x2,int y2,char c){
	int x,y;
	for(y=y1;y<y2+1;y++){
		for(x=x1;x<x2+1;x++){
			move(y,x);
			printw("%c",c);
		}
	}
}

