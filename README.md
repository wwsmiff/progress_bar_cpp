# A Progress Bar for C++

### This is a simple library for progress bars in c++.

## The output of examples/example.cpp:
![](gifs/example.gif)

## Documentation:

- Initializing a progress bar - `ProgressBar name(char notDoneChar, char doneChar,unsigned int size)`, notDoneChar is what the bar will be filled with before it starts to do a process, doneChar is what the progress bar will fill up while a process is being done. size is the size of the     bar.
- `fillUp()` - Fills the bar by 1 everytime it is called.
- `fillUpCells(int cells)` - Fills the bar upto a given number.
- `displayPercentage()` - Displays the percentage of work done.
- `displayTasksDone()` - Displays number of tasks done out of the number of taks to be done eg.`(1 / 28)`
- `end()` - Call this function before printing anything to the terminal and when the bar is no longer needed.

## Try it yourself:
- example.cpp - You can do it by using `make example` assuming you haven't moved any files. Use `./example` to run it.
- practical_example.cpp - You can do it by using `make practical` assuming you haven't moved any files and you do have the development version of libcurl installed.   Use `./practical` to run it.
  ### To install libcurl:
    #### Debian: `sudo apt install libcurl4-openssl-dev`
    #### Arch: `sudo pacman -S curl`
- And finally You can use `make clean` to clean the .o files and the executables 
