#include "Integer.h"
#include <string>
#include <iostream>
using std::string;
Integer::Integer(string num)
{
	this->num = num;
}
void Integer::input_num(string num)
{
	this->num = num;
}
Integer Integer::operator+(Integer& obj)
{
	string result;
	result = std::stoi (this->num) + std::stoi(obj.num);
	return result;
}
Integer Integer::operator-(Integer& obj)
{
	string result;
	result = std::stoi(this->num) - std::stoi(obj.num);
	return result;
}
Integer Integer::operator*(Integer& obj)
{
	string result;
	result = std::stoi(this->num) * std::stoi(obj.num);
	return result;
}
Integer Integer::operator /(Integer& obj)
{
	string result;
	try {
		if (std::stoi(obj.num) == 0)throw 1;
		result = std::stoi(this->num) / std::stoi(obj.num);
		return result;
		}
		catch(int excep)
		{
			std::cout << "Exception: " << excep << std::endl;
		}
}