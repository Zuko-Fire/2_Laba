#include "Binary.h"
#include"Decimal.h"
#include <iostream>
#include <string>
#include<cmath>
#include <bit>

using std::stoi;
using std::cout;
using std::cin;
using std::endl;
using std::string;
int Binary::toDecimal(string binary)
{
	string s1, s2;
	s1 = "0";
	s2 = "1";
	int num = 0;
	for (int i = 0; i < binary.length(); i++)
	{
		if (binary.at(i) == s2.at(0))

			num += pow(2, binary.length() - i-1);


		else
			num += 0;
	}
	return(num);
}
Binary::Binary(string num)
	: Integer(num){}
Binary::Binary(Binary& obj)
	:Integer(obj.num)
{
	
}
void Binary::input_num(Integer& obj)
{
	this->num = obj.output();
}
Integer Binary::operator+(Integer&obj)
{	
	
	int bin1(0); 
	int bin2 (0);
	bin1 = stoi("0b" + this->num);
	bin2 = stoi("0b" + obj.output());
	Integer resualt("0");
	resualt.input_num(std::to_string( bin1 + bin2));
	return resualt;
	
}
