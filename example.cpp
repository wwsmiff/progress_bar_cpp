#include "pb.h"
#include <unistd.h>

unsigned int micros = 1000000; // microseconds to seconds

int main()
{
    progressBar foo('#', 30); // Initializing a bar of size 30.
	
	std::cout << "Doing a task..." << std::endl; // Printing "Doing a task..." to the console

    for(int i = 0; i < 29; i++)
    {
        usleep(0.1 * micros); // a delay of 0.1 second(s) (for UNIX systems)
        foo.fillUp(); // calling fillUp()
    } 

    foo.end(); // Ending foo;

	std::cout << "Done!" << std::endl; // Printing "Done!" to the console

    return 0;
}
