#include <iostream>
#include <string>
#include <algorithm>

char ToUpper (char cX) { return toupper(cX); }

int main(int argc, char **argv)
{
	std::ifstream ifds;
	std::string str;
	std::string str1;


	std::getline(std::cin, str);
	if (std::cin.eof())
	{
		std::cout << "EOF" << std::endl;
		std::clearerr(stdin);
		std::cin.clear();
	}
	std::cin >> str1;
	//std::getline(std::cin, str1);
	std::cout << str1;
	//std::cout << str1;
}

// #include <iostream>

// using namespace std;

// int main(void)
// {
//     char c, d;
//     cout << "Enter a char: " << endl;
//     cin >> c;
//     std::clearerr(stdin);
//     cout << "\nEnter another char: " << endl;
//     cin >> d;

//     cout << "\n\nc = '" << c << "' and d = '" << d << "'\n\n";

//     return 0;
// }
