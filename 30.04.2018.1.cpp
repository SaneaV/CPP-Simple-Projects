//���� �� ������ �����������. ����������������� ���������, ������ � �������.

#include <iostream>
#include <windows.h>
#include <iomanip>
#include <stdio.h>

using namespace std;

enum ConsoleColor
{
    Black = 0,
    Blue = 1,
    Green = 2,
    Cyan = 3,
    Red = 4,
    Magenta = 5,
    Brown = 6,
    LightGray = 7,
    DarkGray = 8,
    LightBlue = 9,
    LightGreen = 10,
    LightCyan = 11,
    LightRed = 12,
    LightMagenta = 13,
    Yellow = 14,
    White = 15
};



int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);

    SetConsoleTextAttribute(hConsole, (WORD) ((Black << 4) | Yellow));
    cout<<setw(40)<<"����� ����������!"<<endl;
    char Name[20];
    cout<<"������� ���� ���: ";
    SetConsoleTextAttribute(hConsole, (WORD) ((Black << 4) | 13));
    gets(Name);

    Sleep(1000);
    system("cls");

    SetConsoleTextAttribute(hConsole, (WORD) ((Black << 4) | 9));
    cout<<"������ ������: "<<endl<<"\n����������� ��� ����� �: "<<endl<<"1. � ��������."<<endl<<"2. � ��������."<<endl<<"3. � �������.";
    int x;
    int Score=0;
    cout<<endl<<endl<<"��� �����: ";
    cin>>x;
    cout<<endl;
    SetConsoleTextAttribute(hConsole, (WORD) ((Black << 4) | 12));
    if (x==3)
    {
        Score+=1;
        SetConsoleTextAttribute(hConsole, (WORD) ((Black << 4) | 2));
        cout<<"�� �������."<<endl<<"��� ����: "<<Score;
    }
    else
        cout<<"�� �� �������."<<endl<<"��� ����: "<<Score;

    Sleep(1000);
    system("cls");

    SetConsoleTextAttribute(hConsole, (WORD) ((Black << 4) | 9));
    cout<<"������ ������: "<<endl<<"\n� ���������� ������: "<<endl<<"1. ������."<<endl<<"2. �������."<<endl<<"3. �������������.";
    cout<<endl<<endl<<"��� �����: ";
    cin>>x;
    cout<<endl;
    SetConsoleTextAttribute(hConsole, (WORD) ((Black << 4) | 12));
    if (x==2)
    {
        SetConsoleTextAttribute(hConsole, (WORD) ((Black << 4) | 2));
        Score+=1;
        cout<<"�� �������."<<endl<<"��� ����: "<<Score;
    }
    else
        cout<<"�� �� �������."<<endl<<"��� ����: "<<Score;

    Sleep(1000);
    system("cls");

    SetConsoleTextAttribute(hConsole, (WORD) ((Black << 4) | 9));
    cout<<"������ ������: "<<endl<<"\n����� ���������� �� ������, ����������: "<<endl<<"1. ��������� ���������� �����."<<endl<<"2. ��������� ���������� �����."<<endl<<"3. ������ �� ������.";
    cout<<endl<<endl<<"��� �����: ";
    cin>>x;
    cout<<endl;
    SetConsoleTextAttribute(hConsole, (WORD) ((Black << 4) | 12));
    if (x==2)
    {
        SetConsoleTextAttribute(hConsole, (WORD) ((Black << 4) | 2));
        Score+=1;
        cout<<"�� �������."<<endl<<"��� ����: "<<Score;
    }
    else
        cout<<"�� �� �������."<<endl<<"��� ����: "<<Score;

    Sleep(1000);
    system("cls");

    SetConsoleTextAttribute(hConsole, (WORD) ((Black << 4) | 9));
    cout<<"�������� ������: "<<endl<<"\n��������������� ����� �������? "<<endl<<"1. ��"<<endl<<"2. ���."<<endl<<"3. � �� ����.";
    cout<<endl<<endl<<"��� �����: ";
    cin>>x;
    cout<<endl;
    SetConsoleTextAttribute(hConsole, (WORD) ((Black << 4) | 12));
    if (x==1)
    {
        SetConsoleTextAttribute(hConsole, (WORD) ((Black << 4) | 2));
        Score+=1;
        cout<<"�� �������."<<endl<<"��� ����: "<<Score;
    }
    else
        cout<<"�� �� �������."<<endl<<"��� ����: "<<Score;

    Sleep(1000);
    system("cls");

    SetConsoleTextAttribute(hConsole, (WORD) ((Black << 4) | 9));
    cout<<"����� ������: "<<endl<<"\n��������������� ����� ������: "<<endl<<"1. ��� ������ ������ - ��� �����."<<endl<<"2. ��� ������ ���� �� �����."<<endl<<"3. ��� ������ ���� �� ���� 6 ������.";
    cout<<endl<<endl<<"��� �����: ";
    cin>>x;
    cout<<endl;
    SetConsoleTextAttribute(hConsole, (WORD) ((Black << 4) | 12));
    if (x==3)
    {
        SetConsoleTextAttribute(hConsole, (WORD) ((Black << 4) | 2));
        Score+=1;
        cout<<"�� �������."<<endl<<"��� ����: "<<Score;
    }
    else
        cout<<"�� �� �������."<<endl<<"��� ����: "<<Score;

    Sleep(1000);
    system("cls");

    SetConsoleTextAttribute(hConsole, (WORD) ((Black << 4) | 14));
    cout<<"����������� "<<Name<<", �� ������ ����!"<<endl;
    cout<<"��� ���������: "<<Score<<endl;
    if (Score==0)
    {
        SetConsoleTextAttribute(hConsole, (WORD) ((Black << 4) | 7));
        cout<<"�� ����� ����� ������ �����������.";
    }
    if (Score==1)
    {
        SetConsoleTextAttribute(hConsole, (WORD) ((Black << 4) | 4));
        cout<<"�� ����� ������ �����������.";
    }
    if (Score==2)
    {
        SetConsoleTextAttribute(hConsole, (WORD) ((Black << 4) | 2));
        cout<<"���� ������ � ����������� ����� �� ���� � �����.";
    }
    if (Score==3)
    {
        SetConsoleTextAttribute(hConsole, (WORD) ((Black << 4) | 3));
        cout<<"��� ����� ������� ���������� � �� ������ �����������.";
    }
    if (Score==4)
    {
        SetConsoleTextAttribute(hConsole, (WORD) ((Black << 4) | 14));
        cout<<"�� ������ ������ �����������.";
    }
    if (Score==5)
    {
        SetConsoleTextAttribute(hConsole, (WORD) ((Black << 4) | 10));
        cout<<"�� ������� ������ �����������.";
    }

    SetConsoleTextAttribute(hConsole, (WORD) ((Black << 4) | 15));
        cout<<endl<<endl;
        system("pause");


}
