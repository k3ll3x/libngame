#include "ngame.h"

int main(){
	srand(time(NULL));
	initscr();
	if(initcolors()){
		return -1;
	}
	init_pair(1,rcolor(),rcolor());
	attron(COLOR_PAIR(1));
	line(0,0,getmaxx(stdscr),getmaxy(stdscr),'*');
	init_pair(2,rcolor(),rcolor());
	attron(COLOR_PAIR(2));
	rectangle(getmaxx(stdscr)/2,getmaxy(stdscr)/2,(getmaxx(stdscr)/2)+5,(getmaxy(stdscr)/2)+5,'@');
	init_pair(3,rcolor(),rcolor());
	attron(COLOR_PAIR(3));
	putch(rand()%getmaxx(stdscr),rand()%getmaxy(stdscr),'#');
	init_pair(4,rcolor(),rcolor());
	attron(COLOR_PAIR(4));
	puttxt(rand()%getmaxx(stdscr),rand()%getmaxy(stdscr),"timemachine");
	puttxt(rand()%getmaxx(stdscr),rand()%getmaxy(stdscr),"@elmapachesonico");
	puttxt(rand()%getmaxx(stdscr),rand()%getmaxy(stdscr),"soundcloud: Fred Kelder");

	getch();

	while(1){
		//int id=domran(20);
		int id=rand()%100;
		init_pair(id,rcolor(),rcolor());
		attron(COLOR_PAIR(id));
		putch(domran(getmaxx(stdscr)),domran(getmaxy(stdscr)),rchar());
		refresh();
	}

	endg();
	return 0;
}
