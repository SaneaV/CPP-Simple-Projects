//�������� � ������� ��� ����������� �������� ���������� �������

#include <iostream>
#include <stdlib.h>
#include <windows.h>
#include <cmath>

using namespace std;

main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    int n,m;

    cout<<"������� ���������� �����: ";
    cin>>n;
    cout<<"������� ���������� ��������: ";
    cin>>m;

    int x[n][m];

    for (int i=0;i<n;i++)
    {
        for (int j=0;j<m;j++)
        {
            cout<<"������� �����: ";
            cin>>x[i][j];
        }
    }

    for (int i=0;i<n;i++)
    {
        for (int j=0;j<m;j++)
        if (x[i][j]<0) x[i][j]=pow(x[i][j],2);

    }

    cout<<endl<<"���� ������� ��� ����������� �����: "<<endl;

    for (int i=0;i<n;i++)
    {
        for (int j=0;j<m;j++)
            cout<<x[i][j]<<"\t";
        cout<<endl;
    }
    system ("Pause");
}
