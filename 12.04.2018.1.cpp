//�������� �������, ������� ������� � ������ �������� n ��������, ������� � ������� p. ����� Return;

#include <iostream>
#include <stdio.h>
#include <windows.h>
#include <cstring>

using namespace std;

char Str(char STROKA[])
{
    cout<<"������� ������: ";
    gets(STROKA);

    int POZITION, KOLICHESTVO;
    int n = strlen(STROKA);

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

    for (int i=0; i<n; i++)
    {
        if (i == POZITION)
        {
            int j = i;
            do
            {
                STROKA[j] = STROKA[j + KOLICHESTVO];
                j++;
            }
            while (STROKA[j + KOLICHESTVO]);
            STROKA[j] = '\0';
        }
    }


    return STROKA[0];
}

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    char String[250];

    Str(String);

    cout<<endl<<"���� ������ � ����� �������: ";
    for (int i=0; i<strlen(String); i++)
    {
        cout<<String[i];
    }

}
