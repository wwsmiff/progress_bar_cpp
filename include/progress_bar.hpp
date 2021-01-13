#pragma once
#include <iostream>
#include <vector>

class progressBar
{
	public:
		/* Takes in a char for filling up the bar and the size fo the bar */
		progressBar(char fillChar, unsigned int size);
		/* Fills the bar upto a given number */
		void fillUpCells(unsigned int cells);
		/* Fills the bar one by one */
		void fillUp();
		/* Ends the bar */
		void end();

	private:
		unsigned int size = 0;
		unsigned int pos = 1;
		char c;
		std::vector <char> bar;
};
