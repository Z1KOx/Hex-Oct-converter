#include "converter.h"

void convertHexadecimal()
{
	char userInput{};
	while (true)
	{
		system("CLS");
		std::cout << "Dec to Hex(1) or Hex to Dec(2) or Exit(3)\n";

		while (true)
		{
			std::cout << "> ";
			std::cin >> userInput;

			if (userInput == '1')
			{
				system("CLS");
				int decimalInput{};
				std::cout << "Enter decimal: ";
				std::cin >> std::dec >> decimalInput;

				if(!std::cin)
				{
					std::cin.clear();
					std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
				}

				std::cout << std::dec << decimalInput << " in hex is [" << std::hex << "0x" << decimalInput << "]\n";
				std::cout << "Press a key to continue...\n";
				system("pause>null");
				break;
			}
			else if (userInput == '2')
			{
				system("CLS");
				int hexadecimalInput{};
				std::cout << "Enter hexadecimal: ";
				std::cin >> std::hex >> hexadecimalInput;

				if(!std::cin)
				{
					std::cin.clear();
					std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
				}

				std::cout << "0x" << std::hex << hexadecimalInput << " in decimal is [" << std::dec << hexadecimalInput << "]\n";
				std::cout << "Press a key to continue...\n";
				system("pause>null");
				break;
			}
			else if(userInput == '3')
			{
				system("CLS");
				std::cout << "Thanks for using my converter!\n";
				exit(0);
			}

			std::cin.clear();
			std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
			
		}
	}
}

void convertOctal()
{
	char userInput{};
	while (true)
	{
		system("CLS");
		std::cout << "Dec to Oct(1) or Oct to Dec(2) or Exit(3)\n";

		while (true)
		{
			std::cout << "> ";
			std::cin >> userInput;

			if (userInput == '1')
			{
				system("CLS");
				int decimalInput{};
				std::cout << "Enter decimal: ";
				std::cin >> std::dec >> decimalInput;

				if(!std::cin)
				{
					std::cin.clear();
					std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
				}

				std::cout << std::dec << decimalInput << " in oct is [" << std::oct << decimalInput << "]\n";
				std::cout << "Press a key to continue...\n";
				system("pause>null");
				break;
			}
			else if (userInput == '2')
			{
				system("CLS");
				int OctalInput{};
				std::cout << "Enter Octal: ";
				std::cin >> std::oct >> OctalInput;

				if(!std::cin)
				{
					std::cin.clear();
					std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
				}

				std::cout << "0x" << std::oct << OctalInput << " in decimal is [" << std::dec << OctalInput << "]\n";
				std::cout << "Press a key to continue...\n";
				system("pause>null");
				break;
			}
			else if (userInput == '3')
			{
				system("CLS");
				std::cout << "Thanks for using my converter!\n";
				exit(0);
			}

			std::cin.clear();
			std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		}
	}
}