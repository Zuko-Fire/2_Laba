#pragma once
#include"Integer.h"
#include<string>
using std::string;
class Binary: public Integer/*���������� ������������ ������ Integer ������� Binary*/
{
	Binary(string num);
	Integer operator+ (Integer& obj)override;
	Integer operator- (Integer& obj)override;
	Integer operator* (Integer& obj)override;
	Integer operator/ (Integer& obj)override;
	public:int toDecimal(string binary);//����� �������� � ���������� ������� ���������
};

