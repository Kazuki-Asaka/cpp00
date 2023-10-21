#ifndef PHONEBOOK_CPP
#define PHONEBOOK_CPP

// #include <iostream>
// #include <srring>

#include "Contact.hpp"

class PhoneBook {
	size_t	count;
	size_t  print_count;
	Contact book[8];

public:
	PhoneBook();
	void	Add();
	void	Print();
private:
	bool	AddFname();
	bool	AddLname();
	bool	AddNickname();
	bool	AddAddress();
	bool	AddDarkestSecret();
	void	AddCount();
};

#endif