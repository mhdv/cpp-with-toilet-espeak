#include <iostream>
#include <stdlib.h>
#include <sstream>

void karaoke(std::string seq){
	std::string toilet = "toilet -t -f mono12 -F gay ";
	std::string espeak = "espeak -s 260 -v pl ";
	std::string tmp = toilet + "\"" + seq + "\"";
	system(tmp.c_str());
	tmp = espeak + "\"" + seq + "\"";
	system(tmp.c_str());
}

int main(int argc, char *argv[]){

	std::string yourtext;
	if(static_cast<std::string>(argv[1])=="-f") return 0;
	for(int i=1; i<argc; ++i){
		yourtext+=" " + static_cast<std::string>(argv[i]);
	}
	std::istringstream iss(yourtext);
	std::string word;
	while(iss >> word){
		karaoke(word);
	}

	return 0;
}