#include "include/progress_bar.hpp"
/* Defining the constructor */
progressBar::progressBar(char fillChar, unsigned int size)
{
	c = fillChar;
	size = size;
	bar.push_back('[');
	for(int i = 1; i < size; i++)
	{
		bar.push_back('.');
	}
	bar.push_back(']');
}

/* Defining fillUpCells */
void progressBar::fillUpCells(unsigned int cells)
{
	for(int i = 1; i < cells; i++)
	{
		bar[i] = c;
		std::cout << "\r";
		for(int i = 0; i < bar.size(); i++)
		{
			std::cout << bar[i] << std::flush;
		}
	}

}

/* Defining fillUp */
void progressBar::fillUp()
{
	bar[pos] = c;
	pos++;
	
	std::cout << "\r";
	
	for(int i = 0; i < bar.size(); i++)
	{
		std::cout << bar[i] << std::flush;
	}

	float percent = ((float)pos / (float)(bar.size() - 1)) * 100;
	std::cout << (int)percent << '%';
}

void progressBar::end()
{
	std::cout << std::endl;
}
