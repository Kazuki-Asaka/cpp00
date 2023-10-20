#include "PhoneBook.hpp"

int main() {
    PhoneBook address_book;

    address_book.InitCount();
    while(1) {
        std::cout << "order ";
        std::string InputOrder;
        // std::cin >> InputOrder;
        std::getline(std::cin, InputOrder);
        if (std::cin.eof()) {
            break ;
        }
        if (InputOrder == "ADD")
            address_book.Add();
        else if (InputOrder == "EXIT")
            break ;
        else if (InputOrder == "SEARCH")
            address_book.Print();
    }
}

