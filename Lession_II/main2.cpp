#include <iostream>

 	using minutes = int;
 	
 	typedef int seconds;
 	
using namespace std;

int main () {

	// 1 Задание
	int x {2};
	int y {1};
		
	y = x * 3;
	
	std::cout << "1 Задание 2 урока\n\n";
	std::cout << y; // Как сделать перенос в одну строчку? /n  пробовал 
        std::cout << "\n";
             
        unsigned i = 42;
  	  	
  	std::cout << i;
	std::cout << "\n";
	
		
	char l = 71;
	int  p = l;
	
	std::cout << p;
	std::cout << "\n";
	
	bool isGameRunning = true;
	
	std::cout << isGameRunning;
	std::cout << std::boolalpha << isGameRunning;
	std::cout << sizeof(isGameRunning); //  в одном буле 1 бит
	std::cout << "\n";
	
	std::cout << (false && true);
	std::cout << "\n\n";

	
	// 2 Задание в main2_2.cpp
       std::cout << "2 Задание 2 урока в main2_2.cpp\n\n";
     

	return 0;		
}
