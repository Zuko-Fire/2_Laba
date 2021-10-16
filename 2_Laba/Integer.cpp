#include <iostream>
#include "Integer.h"
using std::cout;
using std::endl;
using std::cin;
void Integer::input()
{
	cout << "Please enter the first number" << endl;
	cin >> this->num1;
	cout << "Please enter the second number" << endl;
	cin >> this->num2;
}
void Integer::output(int result)
{
	cout << result << endl;
	this->num1 = 0;
	this->num2 = 0;
}
void Integer::summation()
{
	input();
	output(num1 + num2);
}
void Integer::subtraction()
{
	input();
	output(num1 - num2);
}
void Integer::multiplication()
{
	input();
	output(num1 * num2);
}
void Integer::division()
{
	input();
	try
	{
		if (num2 == 0)throw 1;
		output(num1 / num2);
	}
	catch(int exception)
	{
		cout << "Attention! There was an exception number: " << exception;
	}
}
int Integer::summation(int num1, int num2)
{
	return (num1 + num2);
}
int Integer::subtraction(int num1, int num2)
{
	
	return (num1 - num2);
}
int Integer::multiplication(int num1, int num2)
{
	return (num1 * num2);
}
int Integer::division(int num1, int num2)
{
	
	try
	{
		if (num2 == 0)throw 1;
		return(num1 / num2);
	}
	catch (int exception)
	{
		cout << "Attention! There was an exception number: " << exception;
	}
}
