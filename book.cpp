#include "book.h"

Book::Book(){
    title = "Unknown";
    author = "Unknown";
    pubDate = "Unknown";
    startReadDate = "Unknown";
    endReadDate = "Unknown";
    readStatus = "Unknown";
}

Book::Book(std::string newTitle, std::string newAuthor, std::string newPubDate, 
    std::string newStartReadDate, std::string newEndReadDate, std::string newReadStatus){
        
    title = newTitle;
    author = newAuthor;
    pubDate = newPubDate;
    startReadDate = newStartReadDate;
    endReadDate = newEndReadDate;
    readStatus = newReadStatus;
}

// setter methods
void Book::setTitle(std::string newTitle){
    title = newTitle;
}
void Book::setAuthor(std::string newAuthor){
    author = newAuthor;
}
void Book::setPubDate(std::string newPubDate){
    pubDate = newPubDate;
}
void Book::setStartReadDate(std::string newStartReadDate){
    startReadDate = newStartReadDate;
}
void Book::setEndReadDate(std::string newEndReadDate){
    endReadDate = newEndReadDate;
}
void Book::setReadStatus(int newReadStatus){
    switch(newReadStatus){
        case 1: readStatus = "To-Read"; break;
        case 2: readStatus = "Reading"; break;
        case 3: readStatus = "Have Read"; break;
        case 4: readStatus = "Did Not Finish"; break;
        default: readStatus = "To-Read"; 
    }
}

// getter methods
std::string Book::getTitle() const{
    return title;
}
std::string Book::getAuthor() const{
    return author;
} 
std::string Book::getPubDate() const{
    return pubDate;
} 
std::string Book::getStartReadDate() const{
    return startReadDate;
}
std::string Book::getEndReadDate() const{
    return endReadDate;
}
std::string Book::getReadStatus() const{
    return readStatus;
}