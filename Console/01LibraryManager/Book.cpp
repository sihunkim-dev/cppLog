#include "Book.h"

int Book::nextId = 1;

Book::Book(
    std::string title, 
    std::string author, 
    std::string genre, 
    std::string description, 
    std::string publicationDate, 
    int quantity
){ 
    this->bookId = nextId++; // assign bookId and increment nextId for the next book
    this->title = title;
    this->author = author;  
    this->genre = genre;
    this->description = description;
    this->publicationDate = publicationDate;
    this->quantity = quantity;

}

int Book::getBookId() const{
    return bookId;
}

std::string Book::getTitle() const{
    return title;
}

std::string Book::getAuthor() const{
    return author;
}
std::string Book::getGenre() const{
    return genre;
}
std::string Book::getDescription() const{
    return description;
}
std::string Book::getPublicationDate() const{
    return publicationDate;
}
int Book::getQuantity() const{
    return quantity;
}
