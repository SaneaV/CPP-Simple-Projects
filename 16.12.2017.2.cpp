//�������� � ������ ������ ��� ��������� ����� �� �������. �������� ������ � ���������� ������.

#include <iostream>
#include <cstring>
#include <stdio.h>
#include <iomanip>

using namespace std;

main()
{
    setlocale (LC_ALL,"Russian");

    cout<<"������� ������: ";

    char s1[1000];
    gets(s1);


    int n=strlen(s1);

    for (int i=0;i<n;i++)
    {
        if (s1[i]>='a' and s1[i]<='z') s1[i]=toupper(s1[i]);
    }

    puts(s1);
}
