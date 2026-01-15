#include "book.h"
#include <iostream>
#include <vector>

void displayMenu(){
    std::cout << "Hello! Welcome to my book tracker :)" << std::endl;
	std::cout << "Here you can track what books you've read, as well as rate and review them!" << std::endl;
	std::cout << "---Please select from the options below---" << std::endl;
	std::cout << "1. Add new book\n2. Update existing book\n3. Delete existing book"<< std::endl;
	std::cout << "I would like option # ";

}

int main(){

	int menuOption;
    std::vector<Book> userLibrary;

	std::cin >> menuOption;
	
    switch(menuOption){
		case 1:
            break;
        case 2:
            break;
        case 3:
            break;
        case 4:
            break;
	};

	return 0;
}
