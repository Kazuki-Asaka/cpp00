#include "Contact.hpp"

void	Contact::SetFirstname(std::string first_name) {
	this -> first_name = first_name;
}

void	Contact::SetLastname(std::string last_name) {
	this -> last_name = last_name;
}

void	Contact::SetNickname(std::string nickname) {
	this -> nickname = nickname;
}

void	Contact::SetPhonenumber(std::string phone_number) {
	this -> phone_number = phone_number;
}

void	Contact::SetDarkestSsecret(std::string darkest_secret) {
	this -> darkest_secret = darkest_secret;
}

void	Contact::PrintCharacter(std::string input) {
	if (input.size() > 10) {
		for (size_t i = 0; i < 9; i++) {
			std::cout << input[i];
		}
		std::cout<< "." <<"|";
	}
	else {
		for (size_t i = 0; i < 10 - input.size();i++) {
			std::cout << " ";
		}
		std::cout << input << "|";
	}
}
void	Contact::Print(size_t i) {
	std::cout <<"         " << i << "|";
	PrintCharacter(first_name);
	PrintCharacter(last_name);
	PrintCharacter(nickname);
	std::cout << std::endl;
}

void	Contact::Print_ALL() {
	std::cout << "first_name "<< first_name << std::endl;
	std::cout << "last_name " << last_name << std::endl;
	std::cout << "nickname "<< nickname << std::endl;
	std::cout << "phone_number " << phone_number << std::endl;
	std::cout << "darkest_secret " << darkest_secret << std::endl;
}