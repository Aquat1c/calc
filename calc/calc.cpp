#include <Windows.h>

#include <iostream>
#include <clocale>


using namespace std;

double a, b, c;
char d;
float p;
int main()
{
    SetConsoleOutputCP(1251);

    while (p != 2)
    {
        cout << "Будь-яка цифрова клавіша - Калькулятор \n 2 - Вихід \n";
        cin >> p;

        if (p == 2)
        {
            cout << "Робота з програмою закінчена" << endl;

            break;

        }
        else
        
        {
            cout << "Перше число: ";
            cin >> a;
            cout << "Дія над числами: ";
            cin >> d;
            cout << "Друге число:  ";
            cin >> b;
            if (d == '+')
                c = a + b;

            else if (d == '-')
                c = a - b;
            else if (d == '*')
                c = a * b;
            else if (d == '/')
                c = a / b;


        }
        cout << "Результат= " << c << endl;

        }
    }

