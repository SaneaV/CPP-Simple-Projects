//�������� ���������, ������� ���������� ����� "�" ����� ������ ������ "�", ������� ��� �� ������ "�" ��������� ������.

#include <iostream>
#include <stdio.h>
#include <cstring>


using namespace std;

main()
{
    setlocale (LC_ALL,"Rus");

    cout<<"��������� �������� ������ � ����������� �������!!!"<<endl<<endl;
    cout<<"������� �����������: ";

    char s[255];
    char s2[255];

    gets(s);

    int i=0,j=0;

    int n=strlen(s);

    for (int i=0; i<n; i++)
    {
        if (s[i-1]=='n' and s[i]=='a')
        {
            strncpy(s2,s,i);
            s2[i] = NULL;
            strcat(s2,"o");
            strcat(s2,s+i);
        }
    }
    cout<<"\n��� �������� ���� ����� �� ������: "<<s2<<"\n";
}

