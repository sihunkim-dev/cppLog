#include <iostream>
#include <limits>
#include <string>
#include "Book.h"
#include "LibraryManager.h"

int main(){
    LibraryManager libraryManager;

    std::cout<<"Console Library Manager"<<std::endl;

    while(true){
        short choice;
        std::string name, author, genre,description, publishedDate;
        int quantity;

        std::cout<<"1. Add Book"<<std::endl;
        //Add book : user input(name, author, isbn, date, quantity )-> create book object -> add to vector container-> Json file save
        //ID : should be auto incremented
        std::cout<<"2. Print Books"<<std::endl;
        // Page : 5 books per page
        std::cout<<"3. Delete Book"<<std::endl;
        std::cout<<"4. Search Book"<<std::endl;
        std::cout<<"5. Update Book"<<std::endl;
        std::cout<<"6. Exit"<<std::endl;

        std::cout<<"Enter Number:";
        if(!(std::cin>>choice)){
            std::cin.clear(); // clear the error flag
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // discard invalid input
            std::cout<<"Invalid input. Please enter a number."<<std::endl;
            continue; // skip the rest of the loop and prompt for input again
        }

        if(choice == 6){
            break;
        }

        switch(choice){
            case 1:
                std::cout<<"Enter Book Name: "<<std::endl;
                std::cin>>std::ws;
                std::getline(std::cin, name);

                std::cout<<"Enter Author Name: "<<std::endl;
                std::getline(std::cin, author);

                std::cout<<"Enter Genre: "<<std::endl;
                std::getline(std::cin, genre);

                std::cout<<"Enter Description: "<<std::endl;
                std::getline(std::cin, description);

                std::cout<<"Enter Publication Date: "<<std::endl;
                std::getline(std::cin, publishedDate);

                std::cout<<"Enter Quantity: "<<std::endl;
                std::cin>>quantity;
                //if cin =! integer type -> error handling 
                
                libraryManager.addBook(Book(name, author, genre, description, publishedDate, quantity));
                
                break;
            case 2:
                libraryManager.printBook();
                std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
                std::cin.get(); // Wait for user input before continuing
                break;

            case 3:
                int deleteBookId;
                std::cout<<"Enter Book ID to delete: "<<std::endl;
                std::cin>>deleteBookId;
                libraryManager.removeBook(deleteBookId);
                std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
                std::cin.get(); // Wait for user input before continuing
                break;

            case 4:
                int searchBookId;
                libraryManager.printBook(); // Print all books before searching

                std::cout<<"Enter Book ID to search: "<<std::endl;
                std::cin>>searchBookId;
                libraryManager.searchBook(searchBookId);
                std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
                std::cin.get(); // Wait for user input before continuing
                break;

            default:
                std::cout<<"Invalid choice. Please enter a number between 1 and 6."<<std::endl;
                break;
        }
    }

}

/*///////////////

Input Buffer Issue
When using std::cin to read input, it leaves a newline character in the input buffer after reading. This can cause issues when you try to read a string with std::getline() after using std::cin. To fix this, you can use std::cin.ignore() to clear the input buffer before reading the string.


*////////////////


