#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <iostream>
#include <string>

class Contact {
private:
	std::string first_name;
	std::string last_name;
	std::string nickname;
	std::string phone_number;
	std::string darkest_secret;
	void	PrintCharacter(std::string input);

public:
	void	SetFirstname(std::string first_name);
	void	SetLastname(std::string last_name);
	void	SetNickname(std::string nickname);
	void	SetPhonenumber(std::string phone_number);
	void	SetDarkestSsecret(std::string darkest_secret);
	void	Print(size_t i);
	void	Print_ALL();
};
#endif