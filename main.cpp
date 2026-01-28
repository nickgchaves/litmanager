#include "book.h"
#include "book_utils.h"
#include <iostream>
#include <vector>

// forward declarations
void displayMenu();

int main()
{

    std::cout << "Hello! Welcome to my book tracker :)" << std::endl;
	std::cout << "Here you can track what books you've read, as well as rate and review them!" << std::endl;

    std::vector<Book> userLibrary;

    bool runProgram = true;
    while(runProgram)
    {
        displayMenu();
	    int menuOption;
	    std::cin >> menuOption;

        switch(menuOption)
        {
            case 1:
                std::cout << "Test 1" << std::endl;
                break;
            case 2:
                std::cout << "Test 2" << std::endl;
                break;
            case 3:
                std::cout << "Test 3" << std::endl;
                break;
            case 0:
                std::cout << "Test 0" << std::endl;
                runProgram = false;
                break;
        };
    }

	return 0;
}

void displayMenu()
{

	std::cout << "---Please select from the options below---" << std::endl;
    std::cout << "1.) Add new book" << std::endl;
    std::cout << "2.) Update existing book" << std::endl;
    std::cout << "3.) Delete existing book" << std::endl;
    std::cout << "0.) Quit program" << std::endl;
	std::cout << "I would like option #" << std::endl;

}
