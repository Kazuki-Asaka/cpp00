#include "PhoneBook.hpp"

void	PhoneBook::InitCount() {
	this -> count  = 0;
	this -> print_count = 0;
}

void	PhoneBook::Add() {
		AddFname();
		AddLname();
		AddNickname();
		AddAddress();
		AddDarkestSecret();
		AddCount();
}

void	PhoneBook::AddCount() {
	this -> count += 1;
	if (this -> count == 8) {
		this -> count = 0;
	}
	if (print_count < 8)
		this -> print_count += 1;
}

void	PhoneBook::AddFname() {
	std::string	first_name;

	std::cout << "first_name ";
	// std::cin >> first_name;
	std::getline(std::cin, first_name);
	book[count].SetData_Firstname(first_name);
}

void	PhoneBook::AddLname() {
	std::string	last_name;

	std::cout << "last_name ";
	// std::cin >> last_name;
	std::getline(std::cin, last_name);
	book[count].SetData_Lastname(last_name);
}

void	PhoneBook::AddNickname() {
	std::string nick_name;

	std::cout << "nickname ";
	std::getline(std::cin,nick_name);
	// std::cin >> nick_name;
	// if (std::cin.fail())
	// 	return ;
	// if (std::cin.fail())
	// 	return;
	book[count].Setdata_Nickname(nick_name);
}

void	PhoneBook::AddAddress() {
	std::string address;

	std::cout << "phone_number ";
	// std::cin >> address;
	std::getline(std::cin, address);
	book[count].Setdata_Phonenumber(address);
}

void	PhoneBook::AddDarkestSecret() {

	std::string	darkest_secret;
	std::cout << "darkest secret ";
	// std::cin >> darkest_secret;
	std::getline(std::cin, darkest_secret);
	book[count].Setdata_darkest_secret(darkest_secret);
}

void	PhoneBook::Print() {
	for (size_t i = 0; i < print_count; i++) {
		book[i].Print(i);
	}
	size_t index;
	std::cout << "index ";
	std::cin >> index;
	// std::getline(std::cin, index);
	// if (std::cin.fail()) {
	// 	std::cout << "error" << std::endl;
	// 	std::cin.clear();
	// 	return ;
	// }
	std::cin.ignore();
	if (0 <= index && index <= print_count) {
		book[index].Print_ALL();
	}
	else {
		std::cout << index << " is not found" << std::endl;
	}
}