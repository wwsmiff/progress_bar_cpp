#include "../include/ProgressBar.hpp"
#include <unistd.h>

unsigned int micros = 1000000; // microseconds to seconds

int main()
{
	ProgressBar foo('.', '#', 30); 

	foo.done = 0;
	foo.todo = foo.getSize();

	std::cout << "Doing a task" << std::endl;

	for(int i = 0; i < foo.getSize(); i++)
	{
 		foo.done++;		
		usleep(0.1 * micros); // A delay of 0.1 second(s)
		foo.fillUp();
		foo.displayPercentage();
		std::cout << " | ";
		foo.displayTasksDone();	
	}

	foo.end();

	std::cout << "Done!" << std::endl;

	return 0;
}
