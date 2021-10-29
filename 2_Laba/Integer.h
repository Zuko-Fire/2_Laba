#pragma once
#include <string>
using std::string;
class Integer 
{
protected:
	string num = "0";
public:
	Integer(string num);
	Integer(Integer&);
	void input_num(string num);
	virtual void input_num(Integer&);
	virtual Integer operator + (Integer& obj);
	virtual Integer operator - (Integer& obj);
	virtual Integer operator * (Integer& obj);
	virtual Integer operator / (Integer& obj);
	string output();
	//string output(Integer&);



};

