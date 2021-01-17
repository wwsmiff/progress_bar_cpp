#pragma once
#include <iostream>
#include <vector>
#include <stdio.h>
#include <string>

class ProgressBar
{
	public:
		/* Takes in a char for filling up the bar and the size fo the bar */
		ProgressBar(char notDoneChar, char doneChar, unsigned int size);
		void end();
		
		/* Fills the bar upto a given number */
		void fillUpCells(unsigned int cells);
		
		/* Fills the bar one by one */
		void fillUp();
		
		/* Displays the percentage beside the bar */
		void displayPercentage();
	
		unsigned int todo = 0;
		unsigned int done = 0;
		
		/* Shows tasks done out of the tasks to be done */
		void displayTasksDone();

	private:
		unsigned int size = 0;
		unsigned int pos = 1;
		char c;
		char ch;
		std::vector <char> bar;
};
