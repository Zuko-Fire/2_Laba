#pragma once
class Integer
{
protected:
	int num1;//����� �������������� ��� ������ ���������� ������ input()
	int num2;//����� �������������� ��� ������ ���������� ������ input()
	virtual void input();//���������� ����� ��� �������� ���� ����� � ������ �� � num1, num2
	virtual void output(int result);//���������� ����� ��� ������ ���������� ������ ������� ����������� �������������� ��������
public:
	virtual void summation();//����� �������� � ���������� ����������� ����� � ������
	virtual void subtraction();//����� ��������� � ���������� ����������� ����� � ������
	virtual void multiplication();//����� �������� � ���������� ����������� ����� � ������
	virtual void division();//����� ������� � ���������� ����������� ����� � ������
	virtual int summation(int num1,int num2);//������������� ����� �������� ���������� ��� ����� � ������������ ���������
	virtual int subtraction(int num1, int num2);//������������� ����� ��������� ���������� ��� ����� � ������������ ���������
	virtual int multiplication(int num1, int num2);//������������� ����� ��������� ���������� ��� ����� � ������������ ���������
	virtual int division(int num1, int num2);//������������� ����� ������� ���������� ��� ����� � ������������ ���������


};

