#include "Functions.h"

void printLenght(std::string word, long forbLenght) { 
	// ошибка линковки. Опредение(int) и реализация(long) с разным интерфейсом. 
	// фактически не находится реализация c параметром int
	if (word.length() == forbLenght)
		throw BadLengthException();
	std::cout << "Длина слова \"" << word << "\" равна " << word.length() << std::endl;
}

int setForbiddenLenght() {
	int forbLenght = 0;
	while (forbLenght <= 0 && std::cin.fail()) // семантическая ошибка. Нужно ||
	{
		if (std::cin.fail())
		{
			std::cin.clear();
			std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		}
		std::cout << "Введите запретную длину : ";
		std::cin >> forbLenght;
	}
	return forbLenght;
}

std::string inputWord() {
	std::string word;
	std::cout << "Введенное слово : ";
	std::cin >> word;
	return word;
}