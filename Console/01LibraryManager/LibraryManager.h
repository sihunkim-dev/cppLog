#pragma once;
#include "Book.h"
#include <vector>

class LibraryManager{
    private:
        std::vector<Book> books;
    public:
        void addBook(const Book& book);
        void removeBook();
        void searchBook();
        void printBook();
        void updateBook();
};