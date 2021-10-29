#pragma once
#include"Integer.h"
#include<string>
using std::string;
class Binary: public Integer/*Реализация наследования класса Integer классом Binary*/
{public:
	Binary(Binary&);
	Binary(string num);
	void input_num(Integer&)override;
	//vo input_num(Binary&);
	Integer operator+ (Integer& obj)override;
	Integer operator- (Integer& obj)override;
	Integer operator* (Integer& obj)override;
	Integer operator/ (Integer& obj)override;
	public:int toDecimal(string binary);//Метод перевода в десятичную систему счисления
};

