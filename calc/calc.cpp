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
        cout << "����-��� ������� ������ - ����������� \n 2 - ����� \n";
        cin >> p;
        switch (p)
        {
        case 1:
        {
            cout << "����� �����: ";
            cin >> a;
            cout << "ĳ� ��� �������: ";
            cin >> d;
            cout << "����� �����:  ";
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
                cout << "�� 0 ����� �� �����." << endl;
             
                cout << "��������� =" << c << endl;

        }
        case 2:
        {
            cout << "������ � ��������� ��������" << endl;

            break;

        }
        }
    }
}
