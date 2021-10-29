//Лабараторная работа №2
//Вариант 14
#include <iostream>
#include "Binary.h"
#include "Decimal.h"
#include <string>
using std::cout;
using std::endl;
using std::cin;
using std::string;
int main()
{system("chcp 1251");
    Binary b("101");
    Binary a("001");
    Binary result("000");
     a+b
    
    
    
    /*while (true)
    {
        int i;
        cout << "Выберите систему счисления" << endl;
        cout << "1.Десятичная" << endl;
        cout << "2.Двоичная" << endl;
        cin >> i;
        if (i == 1)
        {
            while (i!=5)
            {
                cout << "1.Сложение" << endl;
                cout << "2.Вычитание" << endl;
                cout << "3.Умножение" << endl;
                cout << "4.Деление" << endl;
                cout << "5.Назад" << endl;
                cout << "6.Выход" << endl;
                cin >> i;
                switch (i)
                {
                case(1):
                {   int num1, num2;
                    cout << "Введите первое число" << endl;
                    cin >> num1;
                    cout << "Введите второе число" << endl;
                    cin >> num2;
                    cout << decimal.summation(num1, num2) << endl;
                    break;

                }
                case(2):
                {
                    int num1, num2;
                    cout << "Введите первое число" << endl;
                    cin >> num1;
                    cout << "Введите второе число" << endl;
                    cin >> num2;
                    cout << decimal.subtraction(num1, num2) << endl;
                    break;
                }
                case(3):
                {
                    int num1, num2;
                    cout << "Введите первое число" << endl;
                    cin >> num1;
                    cout << "Введите второе число" << endl;
                    cin >> num2;
                    cout << decimal.multiplication(num1, num2) << endl;
                    break;
                }
                case(4):
                {
                    int num1, num2;
                    cout << "Введите первое число" << endl;
                    cin >> num1;
                    cout << "Введите второе число" << endl;
                    cin >> num2;
                    cout << decimal.division(num1, num2) << endl;
                    break;
                }
                case(5):
                {
                    break;
                }
                case(6):
                {
                    return 0;
                }

                }
            }

        }
        if (i==2)
        {
            while (i != 6)
            {
                cout << "1.Сложение" << endl;
                cout << "2.Вычитание" << endl;
                cout << "3.Умножение" << endl;
                cout << "4.Деление" << endl;
                cout << "5.Перевод в десятичную систему счисления" << endl;
                cout << "6.Назад" << endl;
                cout << "7.Выход" << endl;
                cin >> i;
                switch (i)
                {
                case(1):
                {
                    binary.summation();
                    break;

                }
                case(2):
                {
                    binary.subtraction();
                    break;
                }
                case(3):
                {
                    binary.multiplication();
                    break;
                }
                case(4):
                {
                    binary.division();
                    break;
                }
                case(5):
                {   cout << "Введите число" << endl;
                    string dec;
                    cin >> dec;
                    cout << binary.toDecimal(dec) << endl;
                    break;
                }
                case(6):
                {
                    break;
                }
                case(7):
                {
                    return 0;
                }

                }
            }
        }

    }*/
 
}
