//� ���������� ������� �������� � ���������� � �������� �� N ������������ ���������, ���������:
//���������� ��������� ������� ������ 0
//����� ��������� ������� ������������� ����� ������������ ��������

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

    cout<<endl;

    int x[n];
    int k=0;
    int min=x[0],pmin=0;

    for (int i=0;i<n;i++)
    {
        cout<<"������� �����: ";
        cin>>x[i];
        if (x[i]==0) k++;
        if (x[i]<min) {min=x[i];pmin=i;}
    }

    int S=0;

    for (int i=pmin;i<n;i++)
        S+=x[i];


    cout<<endl<<"� ����� �������, ���������, ������ ����: "<<k<<endl;
    cout<<endl<<"����� ��������� ������� ������������� ����� ������������ ��������: "<<S<<endl;

    system ("Pause");
}
