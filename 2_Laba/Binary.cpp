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
	void Binary::input()
	{
		string num1, num2;
		this->num1 = 0;
		this->num2 = 0;
		cout << "Please enter the first numbker" << endl;
		cin >> num1;
		cout << "Please enter the second number" << endl;
		cin >> num2;
		this->num1 = toDecimal(num1);
		this->num2 = toDecimal(num2);
	}
	void Binary::output(int result)
	{
		cout << result << endl;
		string result1,result2;
		while(true)
		{
			if ((result % 2) != 0)
			{
				result1 += "1";
			}
			else
			{
				result1 += "0";
			}
			result = result / 2;
			if (result == 1)
				break;
			if (result == 0)
				break;
		}
		result1 +="1";
		for (int i = result1.length() - 1; i>= 0;i--)
		{
			result2 += result1.at(i);
		}
		cout << result2 << endl;
		cout << "1.convert to decimal" << endl;
		int i = 0;
		cin >> i;
		if (i == 1)
		{
			cout << toDecimal(result2) << endl;
		}
	}
