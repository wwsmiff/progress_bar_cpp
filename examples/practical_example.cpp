#include <iostream>
#include <curl/curl.h>
#include "../include/progress_bar.hpp"

int main()
{
	progressBar bar('.', '=', 30);

	std::cout << "Downloading onedark.vim from https://raw.githubusercontent.com/joshdick/onedark.vim/master/colors/onedark.vim" << std::endl;

	CURL *downloader = curl_easy_init();
	FILE *file = fopen("onedark.vim", "w");
	CURLcode result;
	std::string url = "https://raw.githubusercontent.com/joshdick/onedark.vim/master/colors/onedark.vim";
	const char *URL = url.c_str();
	curl_easy_setopt(downloader, CURLOPT_URL, URL);
	bar.fillUpCells(10);	
	curl_easy_setopt(downloader, CURLOPT_WRITEDATA, file);
	bar.fillUpCells(20);	
	result = curl_easy_perform(downloader);
	fclose(file);
	bar.fillUpCells(30);	
	curl_easy_cleanup(downloader);

	bar.end();
	std::cout << "Done" << std::endl;

	return 0;
}
