#include "LibraryManager.h"

int LibraryManager::page = 5;

void LibraryManager::addBook(const Book& book){
    /// Add : user input(name, author, isbn, date, quantity )-> create book object -> add to vector container
    
    if(book.getTitle().empty() || book.getDescription().empty() || book.getPublicationDate().empty() || book.getQuantity() <= 0){
        std::cout<<"Invalid input. Please fill all the fields and ensure quantity is greater than 0."<<std::endl;
        return;
    }

    books.push_back(book);
}

void LibraryManager::printBook(){
    if(books.empty()){
        std::cout<<"No books available in the library."<<std::endl;
        return;
    }

    int totalItems = books.size(); //size() returns the number of elements in the vector
    int totalPages = (totalItems + page -1) / page; // Calculate total pages needed
    int firstPage = 1;
    int startIndex = (firstPage - 1) * page; // Calculate the starting index for the current page
    int endIndex = std::min(startIndex + page, totalItems); // Calculate the ending index for the current page


    std::cout<<"======================="<<std::endl;
    for(int i = startIndex; i<endIndex; i++){
        std::cout<<"Book ID: "<<books[i].getBookId()<<std::endl;
        std::cout<<"Title: "<<books[i].getTitle()<<std::endl;
        std::cout<<"Author: "<<books[i].getAuthor()<<std::endl;
        std::cout<<"Genre: "<<books[i].getGenre()<<std::endl;
        std::cout<<"Quantity: "<<books[i].getQuantity()<<std::endl;
    }
    std::cout<<"======================="<<std::endl;
    
}


Book LibraryManager::searchBook(int bookId){
    // Search : user input(id) -> find book object in vector container -> print book info

    for(const auto& book : books){
        if(book.getBookId() == bookId){
            return book;
        }
    }

}

void LibraryManager::removeBook(int bookId){
    //Delete : user Input(id) -> searchBook(bookId) -> if found, remove book object from vector container)

    if(searchBook(bookId).getBookId() == bookId){
        books.erase(books.begin() + (bookId - 1)); // Remove the book from the vector using erase and iterator
    } 

    std::cout<<"Book with ID "<<bookId<<" has been removed."<<std::endl;
}

void LibraryManager::updateBook(int bookId, const Book& updatedBook){
    //Update : user input(id) -> searchBook(bookId) -> if found, user input(new name, author, isbn, date, quantity) -> update book object info in vector container
    if(searchBook(bookId).getBookId() == bookId){
        for(auto& book : books){
            if(book.getBookId() == bookId){
                book = updatedBook; // Update the book information
                std::cout<<"Book with ID "<<bookId<<" has been updated."<<std::endl;
                return;
            }
        }
    } else {
        std::cout<<"Book with ID "<<bookId<<" not found. Update failed."<<std::endl;

    }
}