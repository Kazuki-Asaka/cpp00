#include "PhoneBook.hpp"

PhoneBook::PhoneBook() {
	this -> count = 0;
	this -> print_count = 0;
}

void	PhoneBook::Add() {
		if (!AddFname())
			return ;
		if(!AddLname())
			return ;
		if (!AddNickname())
			return ;
		if (!AddAddress())
			return ;
		if (!AddDarkestSecret())
			return ;
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

bool	PhoneBook::AddFname() {
	std::string	first_name;

	std::cout << "first_name ";
	if (!std::getline(std::cin, first_name)) {
		if (std::cin.eof()) {
			std::cin.clear();
			std::clearerr(stdin);
			std::cout << std::endl;
			return (false);
		}
		else {
			std::cerr << "input error" << std::endl;
			std::exit(1);
		}
	}
	book[count].SetFirstname(first_name);
	return (true);
}

bool	PhoneBook::AddLname() {
	std::string	last_name;

	std::cout << "last_name ";
	if (!std::getline(std::cin, last_name)) {
		if (std::cin.eof()) {
			std::cin.clear();
			std::clearerr(stdin);
			std::cout << std::endl;
			return (false);
		}
		else {
			std::cerr << "input error" << std::endl;
			std::exit(1);
		}
	}
	book[count].SetLastname(last_name);
	return (true);
}

bool	PhoneBook::AddNickname() {
	std::string nick_name;

	std::cout << "nickname ";
	if (!std::getline(std::cin,nick_name)) {
		if (std::cin.eof()) {
			std::cin.clear();
			std::clearerr(stdin);
			std::cout << std::endl;
			return (false);
		}
		else {
			std::cerr << "input error" << std::endl;
			std::exit(1);
		}
	}
	book[count].SetNickname(nick_name);
	return (true);
}

bool	PhoneBook::AddAddress() {
	std::string address;

	std::cout << "phone_number ";
	if (!std::getline(std::cin, address)) {
		if (std::cin.eof()) {
			std::cin.clear();
			std::clearerr(stdin);
			std::cout << std::endl;
			return (false);
		}
		else {
			std::cerr << "input error" << std::endl;
			std::exit(1);
		}
	}
	book[count].SetPhonenumber(address);
	return (true);
}

bool	PhoneBook::AddDarkestSecret() {

	std::string	darkest_secret;

	std::cout << "darkest secret ";
	if (!std::getline(std::cin, darkest_secret)) {
		if (std::cin.eof()) {
			std::cin.clear();
			std::clearerr(stdin);
			std::cout << std::endl;
			return (false);
		}
		else {
			std::cerr << "input error" << std::endl;
			std::exit(1);
		}
	}
	book[count].SetDarkestSsecret(darkest_secret);
	return (true);
}

void	PhoneBook::Print() {
	if (print_count == 0) {
		std::cout << "empty book" << std::endl;
		return ;
	}
	for (size_t i = 0; i < print_count; i++) {
		book[i].Print(i);
	}
	size_t index;

	std::cout << "index ";
	std::cin >> index;
	if (std::cin.eof()) {
		std::cin.ignore();
		std::cin.clear();
		std::clearerr(stdin);
		std::cout << std::endl;
		return ;
	}
	if (std::cin.fail()) {
		std::cin.clear();
		std::cout << "error index" << std::endl;
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		// std::cin.ignore();
		return ;
	}
	std::cin.ignore();
	if (0 <= index && index <= print_count) {
		book[index].Print_ALL();
	}
	else {
		std::cout << index << " is not found" << std::endl;
	}
}