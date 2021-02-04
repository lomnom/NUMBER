// Your First C++ Program

#include <iostream>
#include<sstream> 
#include <string> 
int main() {
	long NUMBER;
	std::string NUM;
	NUMBER=0;
	for(;;) {
		NUM=std::to_string(NUMBER);
		std::cout << NUM+", -"+NUM+"\n";
		NUMBER+=1;
	}
    return 0;
}
