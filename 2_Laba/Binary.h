#pragma once
#include"Integer.h"
#include<string>
using std::string;
class Binary: public Integer/*Реализация наследования класса Integer классом Binary*/
{

	void input()override;//Переопределение метода input()
	void output(int result)override;//Переопределение методаoutput()
	public:int toDecimal(string binary);//Метод перевода в десятичную систему счисления
};

