#pragma once
#include <string>

class Book{
private:
	std::string title;
    std::string author;
    std::string pubDate; // book publish date
    std::string startReadDate;
    std::string endReadDate;
    std::string readStatus;

public:
    Book();
    Book(std::string t, std::string a, std::string pDate, std::string sReadDate, std::string eReadDate, std::string rStatus );

    // setter methods
    void setTitle(std::string newTitle);
    void setAuthor(std::string newAuthor);
    void setPubDate(std::string newPubDate);
    void setStartReadDate(std::string newStartReadDate);
    void setEndReadDate(std::string newEndReadDate);
    void setReadStatus(int newReadStatus);

    // getter methods
    std::string getTitle() const;
    std::string getAuthor() const;
    std::string getPubDate() const;
    std::string getStartReadDate() const;
    std::string getEndReadDate() const;
    std::string getReadStatus() const;
};
