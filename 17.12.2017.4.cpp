//���� ������ ��������S,���������� �������� �� 250 ��������.
//�������� ���������, ������� �������� �������� �� ������ �S������������.
//������� �����������: �COJOC�, �CAZAC�, �POTOP�, �ROTOR�.

#include <iostream>
#include <stdio.h>
#include <cstring>
#include <windows.h>

using namespace std;

main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    cout<<"������� �����: ";

    char str[255];
    char str2[255];
    gets(str);

    strcpy(str2,str);

    char x;

    for (int i=0; i<(strlen(str)/2); i++)
    {
        x = str[i];
        str[i]=str[(strlen(str)-1)-i];
        str[(strlen(str)-1)-i]=x;
    }


    cout<<endl;

    if (strcmp(str,str2)==0) cout<<"����� �������� �����������!";
    else cout<<"����� �� �������� �����������!";

    cout<<endl<<endl;
}
