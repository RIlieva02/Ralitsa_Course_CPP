//
//  main.cpp
//  littleLibrary
//
//  Created by Ralitsa Toneva on 19.11.23.
//

#include <iostream>

int main() {
 
    std::string book1 = "Anna Karenina";
    std::string book2 = "Madame Bovary";
    std::string book3 = "War and Peace";
    std::string book4 = "The Great Gatsby";
    std::string book5 = "Lolita";
    std::string book6 = "Middlemarch";
    std::string book7 = "The Adventures of Huckleberry Finn";
    std::string book8 = "The Stories of Anton Chekhov";
    std::string book9 = "In Search of Lost Time ";
    std::string book10 = "Hamlet";
    
    const int size  = 10;
    std::string library[size];
    std::string requestedBook;
    int count = 0;
    int quantity[size] = {4, 6, 3, 5, 2, 1, 0, 0, 3, 0};
    
    library[0] = book1;
    library[1] = book2;
    library[2] = book3;
    library[3] = book4;
    library[4] = book5;
    library[5] = book6;
    library[6] = book7;
    library[7] = book8;
    library[8] = book9;
    library[9] = book10;
   
    for (int i = 0; i < size; i++){
        std::cout << library[i] << std::endl;
    }
    
    std::cout << "Please white the book you want: ";
    std::cin >> requestedBook;
    
    while (count < size){
        if (requestedBook == library[count]){
            if (quantity[count] > 0){
                std::cout << "The book has been successfully saved!" << std::endl;
                quantity[count] -= 1;
            std::cout << quantity[count] << " pieces left" << std::endl;
            }
            else if (quantity[count] == 0){
                std::cout << "Sorry, but the book is not available at the moment!" << std::endl;
            }
            else {
                std::cout << "Sorry, an error occurred!" << std::endl;
            }
        }
        else {
            
            // std:: cout << "Sorry, there is no such book in the library!" << std::endl;
            
        }
        count++;
    }
    
    return 0;
}
