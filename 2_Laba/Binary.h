#pragma once
#include"Integer.h"
#include<string>
using std::string;
class Binary: public Integer/*���������� ������������ ������ Integer ������� Binary*/
{

	void input()override;//��������������� ������ input()
	void output(int result)override;//��������������� ������output()
	public:int toDecimal(string binary);//����� �������� � ���������� ������� ���������
};

