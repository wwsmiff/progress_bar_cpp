#pragma once
#include <iostream>
#include <vector>

class progressBar
{
	public:
		/* Takes in a char for filling up the bar and the size fo the bar */
		progressBar(char fillChar, unsigned int size);
		void end();
		/* Fills the bar upto a given number */
		void fillUpCells(unsigned int cells);
		/* Fills the bar one by one */
		void fillUp();
	private:
		unsigned int size = 0;
		unsigned int pos = 1;
		char c;
		std::vector <char> bar;
};
