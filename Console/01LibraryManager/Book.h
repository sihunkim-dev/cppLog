#pragma once
#include <string>

class Book{
    private:
        static int nextId;
        int bookId;

        std::string title;
        std::string author;
        std::string genre;
        std::string description;
        std::string publicationDate;
        int quantity;
    public:
        Book(
            std::string title, 
            std::string author, 
            std::string genre, 
            std::string description, 
            std::string publicationDate, 
            int quantity
        );
        
        int getBookId() const;
        std::string getTitle() const;
        std::string getAuthor() const;
        std::string getGenre() const;
        std::string getDescription() const;
        std::string getPublicationDate() const;
        int getQuantity() const;
};