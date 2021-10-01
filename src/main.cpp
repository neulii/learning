#include <iostream>
#include "../include/functions.hpp"
#include "../include/material.hpp"
#include <curses.h>



using std::cout;
using std::endl;


int main()
{
	
	initscr();
	start_color();

init_pair(1, COLOR_GREEN, COLOR_RED); 
  color_set(1, 0);
printw("Hello World !!!");
mvprintw(20,20,"super");
init_pair(1, COLOR_RED, COLOR_BLACK);

refresh();
getch();
endwin();

	
}




