#pragma once
#include"Integer.h"
#include<string>
using std::string;
class Binary: public Integer/*���������� ������������ ������ Integer ������� Binary*/
{public:
	Binary(Binary&);
	Binary(string num);
	void input_num(Integer&)override;
	//vo input_num(Binary&);
	Integer operator+ (Integer& obj)override;
	Integer operator- (Integer& obj)override;
	Integer operator* (Integer& obj)override;
	Integer operator/ (Integer& obj)override;
	public:int toDecimal(string binary);//����� �������� � ���������� ������� ���������
};

