#pragma once
#include <string>

class Book{
private:
	std::string title;
    
public:
    // setter methods
    void setTitle(std::string newTitle){
        title = newTitle;
    }

    // getter methods
    std::string getTitle(){
        return title;
    }
};
