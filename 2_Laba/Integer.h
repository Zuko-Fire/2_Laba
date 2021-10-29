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
	virtual Integer operator + (Integer& obj);
	virtual Integer operator - (Integer& obj);
	virtual Integer operator * (Integer& obj);
	virtual Integer operator / (Integer& obj);
	string output();



};

