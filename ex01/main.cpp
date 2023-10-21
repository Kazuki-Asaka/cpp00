#include "PhoneBook.hpp"

int main() {
	PhoneBook address_book;

	while(1) {
		std::cout << "order ";
		std::string InputOrder;

		if (!std::getline(std::cin, InputOrder)) {
			if (std::cin.fail()) {
				break ;
			}
		}
		if (InputOrder == "ADD")
			address_book.Add();
		else if (InputOrder == "EXIT")
			break ;
		else if (InputOrder == "SEARCH")
			address_book.Print();
	}
}

