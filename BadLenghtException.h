#pragma once

#include <exception>

class BadLengthException : public std::exception {

public:
	const char* what() const override;
};

