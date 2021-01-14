/* A simple program to show the practical usage of the progress bar
it uses libcurl to download a vim colorscheme from https://raw.githubusercontent.com/joshdick/onedark.vim/master/colors/onedark.vim */
#include <iostream>
#include <curl/curl.h> 
#include "include/progress_bar.hpp"

int main()
{
	progressBar bar('=', 30); // Initializing a progress bar with a size of 30.

	CURL *downloader = curl_easy_init(); // Initializing curl
	// ------------Dowloading the file---------------
	FILE *file = fopen("onedark.vim", "w"); // opening a file named onedark.vim
	CURLcode result;
	std::string url = "https://raw.githubusercontent.com/joshdick/onedark.vim/master/colors/onedark.vim"; // specifying the URL
	const char *URL = url.c_str(); // converting the url to a c stype string
	curl_easy_setopt(downloader, CURLOPT_URL, URL); // downloading the file
	bar.fillUpCells(10); // filling the bar upto 10 cells	
	curl_easy_setopt(downloader, CURLOPT_WRITEDATA, file); // writing to the file 
	bar.fillUpCells(20); // filling the bar upto a 20 cells
	result = curl_easy_perform(downloader);
	fclose(file); // closing the file
	bar.fillUpCells(30); // filling the bar fully
	curl_easy_cleanup(downloader); // cleaning libcurl

	bar.end();

	return 0;
}

/* NOTE: I hard-coded the values since the file is pretty small to use it in bytes or kilobytes */
