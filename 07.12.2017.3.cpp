//���� ������ ��������, ����������, ������� ��� ����������� ����� x(���)

#include <iostream>
#include <stdio.h>
#include <cstring>


using namespace std;

main()
{
    setlocale (LC_ALL,"Rus");

    cout<<"��������� �������� ������ � ����������� �������!!!"<<endl<<endl;
    cout<<"������� �����������: ";

    char s[10000];

    gets(s);

    int k=0;

    for (int i=0;i<strlen(s);i++)
    {
        if (s[i]=='x') k++;
    }

    if (k>0) cout<<"� ����� �����������: "<<k<<" ���� \"�\""<<endl;
    else cout<<"���� \"�\" � ����� ����������� ���."<<endl;
}
