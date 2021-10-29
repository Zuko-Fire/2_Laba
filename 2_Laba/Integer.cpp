#include "Integer.h"
#include <string>
#include <iostream>
using std::string;
Integer::Integer(string num)
{
	this->num = num;
}
Integer::Integer(Integer& obj)
{
	this->num = obj.num;
}
void Integer::input_num(string num)
{
	this->num = num;
}
void Integer::input_num(Integer& obj)
{
	this->num = obj.num;
}
string Integer::output()
{
	return this->num;
}
