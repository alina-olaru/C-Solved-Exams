#pragma once
class Referinta
{
private:
	int format;
	//1 tiparit,2 online
public:

	Referinta();
	int get_format() const;
	void set_format(int format);
	virtual void citire();
	virtual void afisare();
};

