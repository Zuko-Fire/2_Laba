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

string Integer::output()
{
	return this->num;
}