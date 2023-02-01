#include "BadLenghtException.h"

const char* BadLengthException::what() const
{
	return "Вы ввели слово запретной длины! До свидания";
}
