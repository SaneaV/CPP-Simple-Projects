//���� �����. ���� ����� "�" ��� �� ������ "�", �� ����� ���� �������� "�".
//����� - ������

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
    char s2[10000];
    gets(s);

    int j=0,i=0;

    while (i<strlen(s))
    {
        if (s[i]=='n' and s[i+1]=='a')
        {
            s2[j]='n';
            s2[j+1]='o';
            s2[j+2]='a';
            j+=3;
            i+=2;
        }
        else
        {
            s2[j]=s[i];
            j++;
            i++;
        }

    }

    cout<<"\n��� �������� ���� ����� �� ������: "<<s2<<"\n";

}
