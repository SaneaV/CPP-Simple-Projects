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

    int n=strlen(s1);
    int k=0;
    int p=0;

    for (int i=0;i<n;i++)
    {
        if (s1[i]==ch) {p=i;k++;break;}
    }
    if (k==0) cout<<"����� ����� � ������ ���.";
    else cout<<"������� ����� �����: "<<p+1;
}
