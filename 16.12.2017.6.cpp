//���� ����� � �����.
//�������� ���������, ������� ���������� ����������� �� ������ ����� � ������
//��� ������������� ������ �� ����� ��������� ����� ������ ������� ����� � ������,
//� ��������� ������ �������������� ���������

#include <iostream>
#include <cstring>
#include <stdio.h>

using namespace std;

main()
{
    setlocale (LC_ALL,"Russian");

    cout<<"������� ������: ";

    char s1[1000];
    gets(s1);
    char ch;

    cout<<"������� �����: ";
    cin>>ch;

    if (strchr(s1,ch)==0) cout<<"����� ����� � ������ ���";
    else cout<<strchr(s1,ch)-s1+1;

}
