#include "book.h"
#include <string>
#include <iostream>

using namespace std;

book::book()
{
}

book::~book()
{
}

void book::set_book_info(int bookNum, string bookNAme, string bookAuthor)
{
    book_number = bookNum;
    book_name = bookNAme;
    author_name = bookAuthor;
}
    int book::get_book_number(){
        return book_number;
    }
    string book::get_book_name(){
        return book_name;
    }
    string book::get_book_author(){
        return author_name;
    }

