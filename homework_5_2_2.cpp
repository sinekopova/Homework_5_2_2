#include <iostream>

#include <windows.h>

#include "BadLenghtException.h"
#include "Functions.h"


// пример из упражения 3.8.1
int main() {

	SetConsoleCP(1252);
	SetConsoleOutputCP(1252);

	int forbLenght;
	std::string word = ''; // синтаксическая ошибка. некорректная инициализация

	forbLenght = setForbiddenLenght( );

	while (true) {
		word = inputWord();
		try {
			printLenght(word, forbLenght);
		}
		catch (const BadLengthException& ex) {
			std::cout << ex.what() << std::endl;
			return 0;
		}
	}

}
