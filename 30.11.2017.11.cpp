//� ���������� ������� �������� � ���������� � �������� �� N ������������ ���������, ���������:
//C���� ������������� ��������� ������� ������������� ����� �� ������������� ��������

#include <iostream>
#include <Windows.h>
#include <stdlib.h>

using namespace std;

main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    cout<<"������� ������ �������: ";
    int n;
    cin>>n;
    int *x = new int [n];

    cout<<endl;

    for (int i=0;i<n;i++)
    {
        cout<<"������� �����: ";
        cin>>x[i];
    }

    cout<<endl;
    int max=x[0];
    int pmax=0;
    for (int i=0;i<n;i++)
        if (max<x[i]) {max=x[i];pmax=i;}

    int S=0;
    for (int i=0;i<pmax;i++)
        if (x[i]>0) S+=x[i];

    cout<<"��� ������: ";
    for (int i=0;i<n;i++)
        cout<<x[i]<<" ";

    cout<<endl<<"����� ������������� ��������� ������������� �� ������������� �������� �������: "<<S<<endl;

    system("PAUSE");
}

