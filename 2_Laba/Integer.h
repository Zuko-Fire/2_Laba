#pragma once
#include <string>
using std::string;
class Integer
{
protected:
	string num = "0";
public:
	Integer(string num);
	void input_num(string num);
	Integer operator + (Integer& obj);
	Integer operator - (Integer& obj);
	Integer operator * (Integer& obj);
	Integer operator / (Integer& obj);
	void output();

};

