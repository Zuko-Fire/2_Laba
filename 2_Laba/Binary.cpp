#include "Binary.h"
#include"Decimal.h"
#include <iostream>
#include <string>
#include<cmath>
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
Integer Binary::operator+(Integer&obj)
{
	for (int i = std::min(this->num.length(), obj.output().length()) - 1; i > -1;i--) 
	{
		if(this ->num.at(i) == 1 and obj.output().at(i) == 1 )
		{
			
		}
	}
}
