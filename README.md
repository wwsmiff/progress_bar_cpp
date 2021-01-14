# A Progress Bar for C++

### This is a simple library for progress bars in c++.

## The output of example.cpp:
![](gifs/progress_bar.gif)

## A practical example (practical_example.cpp):
![](gifs/practical-example.gif)

## Documentation:

- Initializing a progress bar - `progressBar name(char notDoneChar, char doneChar,unsigned int size)`, notDoneChar is what the bar will be filled with before it starts to do a process, doneChar is what the progress bar will fill up while a process is being done. size is the size of the     bar.
- fillUp() - Fills the bar by 1 everytime it is called.
- fillUpCells(int cells) - Fills the bar upto a given number.
- end() - Call this function before printing anything when the bar is no longer needed.
