//� ���������� �������, �������� � ���������� � ��������� �� N ������������ ���������
//��������� ����� ��������� ������� � ��������� ��������
//����� ��������� ������� ������������� ����� ������ � ��������� ������������� ���������

#include <iostream>
#include <stdlib.h>
#include <windows.h>

using namespace std;

main()

{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    int n;

    cout<<"������� ������ �������: ";
    cin>>n;

    int x[n];
    int S=0;

    for (int i=0; i<n; i++)
    {
        cout<<"������� �����: ";
        cin>>x[i];
    }

    for (int i=0; i<n; i++)
        if (i%2!=0)
        {
            S+=x[i];
        }

    int pfirst=0, psecond=0;

    for (int i=0; i<n; i++)
    {
        if (x[i]<0)
        {
            pfirst = i;
            break;
        }
    }

    for (int i=0;i<n;i++)
    {
        if (x[i]<0)
        {
            psecond = i;
        }

    }

    int S1=0;
    for (int i=pfirst+1; i<psecond; i++)
        {S1+=x[i];}


    cout<<endl<<"����� ��������� ������� ��� ��������� ��������: "<<S;
    cout<<endl<<"����� ��������� ������� ������������� ����� ������ � ��������� �������������� ����������: "<<S1;

    system ("Pause");
}
