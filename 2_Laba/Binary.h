#pragma once
#include"Integer.h"
#include<string>
using std::string;
class Binary: public Integer/*���������� ������������ ������ Integer ������� Binary*/
{
	Integer operator+ (Integer& obj)override;
	Integer operator- (Integer& obj)override;
	Integer operator* (Integer& obj)override;
	Integer operator/ (Integer& obj)override;
	public:int toDecimal(string binary);//����� �������� � ���������� ������� ���������
};

