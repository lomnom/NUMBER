// Your First C++ Program

#include <iostream>
#include<sstream>  
int main() {
	long NUMBER;
	NUMBER=0;
	for(;;) {
		std::cout << std::to_string(NUMBER)+"\n";
		std::cout << "-"+std::to_string(NUMBER)+"\n";
		NUMBER+=1;
	}
    return 0;
}
