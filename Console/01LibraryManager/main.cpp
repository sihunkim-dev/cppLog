#include <iostream>
#include "Book.h"
#include "LibraryManager.h"

int main(){
    LibraryManager libraryManager;

    std::cout<<"Console Library Manager"<<std::endl;

    while(true){
        short choice;

        std::cout<<"1. Add Book"<<std::endl;
        //Add book : user input(name, author, isbn, date, quantity )-> create book object -> add to vector container-> Json file save
        //ID : should be auto incremented
        std::cout<<"2. Print Books"<<std::endl;
        std::cout<<"3. Delete Book"<<std::endl;
        std::cout<<"4. Search Book"<<std::endl;
        std::cout<<"5. Update Book"<<std::endl;
        std::cout<<"6. Exit"<<std::endl;

        std::cout<<"Enter Number:";
        std::cin>>choice;
        switch(choice){
            case 1:
                break;
            case 6:
                std::cout<<"Exiting..."<<std::endl;
                break;
        }

        return 0;
    }

}