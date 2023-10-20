#ifndef PHONEBOOK_CPP
#define PHONEBOOK_CPP

// #include <iostream>
// #include <srring>

#include "Contact.hpp"

class PhoneBook {
    size_t  count;
    size_t  print_count;
    Contact book[8];

public:
    void    InitCount();
    void    Add();
    void    Print();
private:
    void    AddFname();
    void    AddLname();
    void    AddNickname();
    void    AddAddress();
    void    AddCount();
    void    AddDarkestSecret();
};

#endif