//��� �����, �������� ���������, ������� �������� � �� �����
//"a" �� ����� "�", ���� ����� "�" ��������� �� �������� �������
//� ����� "�", ���� ����� "�" ��������� �� ������ �������.

#include <iostream>
#include <stdio.h>
#include <cstring>

using namespace std;

main()
{
    setlocale(LC_ALL,"Russian");

    cout<<"������� ������: ";

    char str[1000];
    gets(str);

    for (int i=0;i<strlen(str); i++)
    {
        if (str[i]=='a' and i%2==0) str[i]='e';
        if (str[i]=='a' and i%2!=0) str[i]='o';
    }

    puts(str);
}
