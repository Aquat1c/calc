#include <Windows.h>

#include <iostream>
#include <clocale>


using namespace std;

float a, b, c;
char d;
int p;
int main()
{
    SetConsoleOutputCP(1251);

    while (p != 2)
    {
        cout << "Будь-яка цифрова клавіша - Калькулятор \n 2 - Вихід \n";
        cin >> p;
        switch (p)
        {
        case 1:
        {
            cout << "Перше число: ";
            cin >> a;
            cout << "Дія над числами: ";
            cin >> d;
            cout << "Друге число:  ";
            cin >> b;
            if (d == '+')
                c = a + b;
            if (d == '-')
                c = a - b;
            if (d == '*')
                c = a * b;
            if (d == '/')
                c = a / b;
            if (b == 0 && d == '/')
                cout << "На 0 ділити не можна." << endl;
             
                cout << "Результат =" << c << endl;

        }
        case 2:
        {
            cout << "Робота з програмою закінчена" << endl;

            break;

        }
        }
    }
}
