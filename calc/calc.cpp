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
        cout << "����-��� ������� ������ - ����������� \n 2 - ����� \n";
        cin >> p;

        if (p == 2)
        {
            cout << "������ � ��������� ��������" << endl;

            break;

        }
        else
        
        {
            cout << "����� �����: ";
            cin >> a;
            cout << "ĳ� ��� �������: ";
            cin >> d;
            cout << "����� �����:  ";
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
        cout << "���������= " << c << endl;

        }
    }

