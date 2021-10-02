#include <iostream>
#include "../include/functions.hpp"
#include "../include/material.hpp"
#include <ncurses.h>



using std::cout;
using std::endl;


int main()
{
	bool exit = false;
	int ch;

	initscr();
	raw();
	keypad(stdscr, TRUE);
	noecho();
	do
	{
		printw("Type any character to see it in bold\n");
		ch = getch();

		if(ch == KEY_F(1)){
			exit = true;

			printw("F1 Key Pressed");
		}
		else
		{
			printw("the pressed key is ");
			attron(A_BOLD);
			printw("%c", ch);
			attroff(A_BOLD);

		}

	} while (!exit);
	
	





refresh();
//getch();
endwin();

	
}




