#pragma once
#include <string>

class Book{
    private:
        int id;
        std::string title;
        std::string author;
        std::string genre;
        std::string description;
        std::string publicationDate;
        int quantity;
    public:
        Book(
            int id, 
            std::string title, 
            std::string author, 
            std::string genre, 
            std::string description, 
            std::string publicationDate, 
            int quantity
        );

        int getId() const;
        std::string getTitle() const;
        std::string getAuthor() const;
        std::string getGenre() const;
        std::string getDescription() const;
        std::string getPublicationDate() const;
        int getQuantity() const;
};