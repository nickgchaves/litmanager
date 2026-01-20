#include "book.h"
#include "book_utils.h"
#include <iostream>
#include <vector>

void displayMenu();

int main(){

    std::vector<Book> userLibrary;
    displayMenu();

	int menuOption;
	std::cin >> menuOption;
	
    switch(menuOption){
		case 1:
            break;
        case 2:
            break;
        case 3:
            break;
        case 0:
            break;
	};

	return 0;
}

void displayMenu(){
    std::cout << "Hello! Welcome to my book tracker :)" << std::endl;
	std::cout << "Here you can track what books you've read, as well as rate and review them!" << std::endl;
	std::cout << "---Please select from the options below---" << std::endl;
    std::cout << "1.) Add new book" << std::endl;
    std::cout << "2.) Update existing book" << std::endl;
    std::cout << "3.) Delete existing book" << std::endl;
    std::cout << "0.) Quit program" << std::endl;
	std::cout << "I would like option # ";

}
