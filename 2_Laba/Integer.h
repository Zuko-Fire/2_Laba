#pragma once
class Integer
{
protected:
	int num1;//Число использующееся для записи результата вызова input()
	int num2;//Число использующееся для записи результата вызова input()
	virtual void input();//Внутренний метод для полученя двух чисел и записи их в num1, num2
	virtual void output(int result);//Внутренний метод для вывода результата работы методов реализующих арефметические операции
public:
	virtual void summation();//Метод суммации с внутренней реализацией ввода и вывода
	virtual void subtraction();//Метод вычитания с внутренней реализацией ввода и вывода
	virtual void multiplication();//Метод уможения с внутренней реализацией ввода и вывода
	virtual void division();//Метод деления с внутренней реализацией ввода и вывода
	virtual int summation(int num1,int num2);//Перегруженный метод суммаций получающий два числа и возвращающий результат
	virtual int subtraction(int num1, int num2);//Перегруженный метод вычитания получающий два числа и возвращающий результат
	virtual int multiplication(int num1, int num2);//Перегруженный метод умножения получающий два числа и возвращающий результат
	virtual int division(int num1, int num2);//Перегруженный метод деления получающий два числа и возвращающий результат


};

