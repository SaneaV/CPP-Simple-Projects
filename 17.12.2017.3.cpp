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
    gets(str);

    char c;
    int n=0;
    int m=strlen(str)-1;
    char str2[255];
    strcpy(str2,str);

    while (n<m)
    {
        c=str[n];
        str[n]=str[m];
        str[m]=c;
        n++;
        m--;
    }

    cout<<endl;

    if (strcmp(str,str2)==0) cout<<"����� �������� �����������!";
    else cout<<"����� �� �������� �����������!";

    cout<<endl<<endl;
}
