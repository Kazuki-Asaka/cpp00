#include <iostream>
#include <string>
// #include <algorithm>

// int main(int argc, char **argv) {
//     if (argc == 1) {
//         std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
//     }
//     else if (argc > 1) {
//         std::string str;
//         for (size_t i = 1; i < argc; i++) {
//             str = argv[i];
//             // std::transform(str.begin(), str.end(), str.begin(), ::toupper);
//             std::transform(str.begin(), str.end(), str.begin(), (int (*)(int))std::toupper);
//             std::cout << str;
//         }
//         std::cout << std::endl;
//     }
// }

int	main(int argc, char **argv) {
	if (argc == 1) {
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	}
	else if (argc > 1) {
		std::string	str;
		for (size_t i = 1; i < argc; i++) {
			str = argv[i];
			for (size_t j = 0; j < str.size(); j++) {
				std::cout << static_cast<char>(std::toupper(str[j]));
			}
		}
		std::cout << std::endl;
	}
}
