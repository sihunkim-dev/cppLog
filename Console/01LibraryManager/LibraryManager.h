#pragma once
#include "Book.h"
#include<iostream>
#include <vector>

class LibraryManager{
    private:
        static int page;

        std::vector<Book> books;
    public:
        void addBook(const Book& book); // OK
        void removeBook(int bookId); 
        Book searchBook(int bookId); 
        void printBook(); // OK
        void updateBook();
};

