#ifndef BOOK_H
#define BOOK_H

#include <iostream>
#include <string>
using namespace std;

class book
{
public:
    book();
    ~book();
    
    void set_book_info(int bookNum, string bookNAme, string bookAuthor);
    int get_book_number();
    string get_book_name();
    string get_book_author();

private:
    int book_number;
    string book_name;
    string author_name;
};

#endif // BOOK_H
