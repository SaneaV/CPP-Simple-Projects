//���� ������ ��������. ���������� ����� ����� ��������� �������� "+,-,*"

#include <iostream>
#include <cstring>
#include <stdio.h>
#include <windows.h>

using namespace std;

main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    cout<<"������� �����������: ";

    char str[1000];
    gets(str);

    int n=strlen(str);
    int k=0;

    for (int i=0;i<n;i++)
    {
        if (str[i]=='-' or str[i]=='+' or str[i]=='*') k++;
    }

    cout<<endl<<"���������� ��������� (+-*): "<<k;
}
