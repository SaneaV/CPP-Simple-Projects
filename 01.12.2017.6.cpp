//� ���������� �������, �������� � ���������� � ��������� �� N ������������ ���������
//����� ������������� ��������
//������������ ��������� �������, ������������� ����� ������ � ������ ������� ���������

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
    int max=x[0];
    int pmax=0;

    for (int i=0; i<n; i++)
    {
        cout<<"������� �����: ";
        cin>>x[i];
    }

    for (int i=0; i<n; i++)
    {
        if (max<x[i])
        {
            max=x[i];
            pmax=i;
        }
    }

    int pfirst=0;

    for (int i=0; i<n; i++)
    {
        if (x[i]==0)
        {
            pfirst=i;
            i=n;
        }
    }

    int psecond=0;

    for (int i=pfirst+1; i<n; i++)
    {
        if (x[i]==0)
        {
            psecond=i;
            i=n;
        }
    }

    int S=1;

    for (int i=pfirst+1; i<psecond; i++)
    {
        S*=x[i];
    }


    cout<<"������� ������������� ��������: "<<pmax<<endl;
    cout<<"������������ ����� ������ � ������ ����: "<<S<<endl;

    system ("Pause");

}
