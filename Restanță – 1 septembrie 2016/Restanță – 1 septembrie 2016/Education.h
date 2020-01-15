#pragma once
#include "Comanda.h"
#include <string>
using namespace std;

class Education:public Comanda
{
public:
	Education(int a = 0, int b = 0, int c = 0);
	void Edu_trivia(std::string);
	void Edu_lectie(std::string, int);



	Education(const Education& other)
		: Comanda(other)
	{
	}

	Education(Education&& other) noexcept
		: Comanda(std::move(other))
	{
	}

	Education& operator=(const Education& other)
	{
		if (this == &other)
			return *this;
		Comanda::operator =(other);
		return *this;
	}

	Education& operator=(Education&& other) noexcept
	{
		if (this == &other)
			return *this;
		Comanda::operator =(std::move(other));
		return *this;
	}
};

