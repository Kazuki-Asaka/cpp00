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
    void    PrintCharacter(std::string input);

public:
    void    SetData_Firstname(std::string first_name);
    void    SetData_Lastname(std::string last_name);
    void    Setdata_Nickname(std::string nickname);
    void    Setdata_Phonenumber(std::string phone_number);
    void    Setdata_darkest_secret(std::string darkest_secret);
    void    Print(size_t i);
    void    Print_ALL();
};
#endif