#include "Book.h"

Book::Book(
    int id, 
    std::string title, 
    std::string author, 
    std::string genre, 
    std::string description, 
    std::string publicationDate, 
    int quantity
) : id(id), title(title), author(author), genre(genre), description(description), publicationDate(publicationDate), quantity(quantity) {}

