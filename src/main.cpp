#include "converter.h"

int main()
{
	char userInput{};
	std::cout << "What you want to convert Hexadecimal(1) or Octal(2) or Exit(3)\n";

	while (true)
	{
		std::cout << "> ";
		std::cin >> userInput;

		switch (userInput)
		{
		case '1':
			system("CLS");
			convertHexadecimal();
			break;
		case '2':
			system("CLS");
			convertOctal();
			break;
		case '3':
			system("CLS");
			std::cout << "Thanks for using my converter!\n";
			return 0;
		default:
			std::cin.clear();
			std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
			break;
		}
	}

	return 0;
}