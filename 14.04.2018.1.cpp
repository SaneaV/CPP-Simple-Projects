//�������� �������, ������� ������� � ������ �������� n ��������, ������� � ������� p. ����� Void;

#include <iostream>
#include <stdio.h>
#include <windows.h>
#include <cstring>

using namespace std;

void Str(char *STROKA, int &x, int &y)
{
    int LenghtSTR = strlen(STROKA);

    for (int i=0; i<LenghtSTR; i++)
    {
        if (i == x)
        {
            int j = i;
            do
            {
                STROKA[j] = STROKA[j + y];
                j++;
            }
            while (STROKA[j + y]);
            STROKA[j] = '\0';
        }
    }

}

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    char String[250];

    cout<<"������� ������: ";
    gets(String);

    int n = strlen(String);
    int POZITION, KOLICHESTVO;

    cout<<endl<<"������� �������, � ������� ������� �������� ��������: ";
    while (!(cin>>POZITION) or POZITION<=0 or POZITION>n)//������ �������� � ���� ��� �� �����, ���������� ���� (! - not)
    {
        cout<<"������, �� ����� ���-�� �� ��.\n ";
        cin.clear();//������� �����
        cin.sync();//������� ������ �� �������
        cout<<"\n��������� ����: ";
    }
    POZITION--;

    cout<<endl<<"������� ���������� ��������, ������� ���������� �������: ";
     while (!(cin>>KOLICHESTVO) or KOLICHESTVO<=0 or KOLICHESTVO>n)//������ �������� � ���� ��� �� �����, ���������� ���� (! - not)
    {
        cout<<"������, �� ����� ���-�� �� ��.\n ";
        cin.clear();//������� �����
        cin.sync();//������� ������ �� �������
        cout<<"\n��������� ����: ";
    }

    Str(String,POZITION,KOLICHESTVO);

    cout<<endl<<"���� ������ � ����� �������: ";
    for (int i=0; i<strlen(String); i++)
    {
        cout<<String[i];
    }

}
