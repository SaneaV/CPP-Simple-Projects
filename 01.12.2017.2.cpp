//����� � ������ ������ ������� ������������ � ����������� �������� � ��������� �� �� ����� ������� � ���������� �������� ������ �������������

#include <iostream>
#include <windows.h>
#include <stdlib.h>

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

    //���� �������
    for (int i=0;i<n;i++)
    {
        for (int j=0;j<m;j++)
        {
            cout<<"������� �����: ";
            cin>>x[i][j];
        }
    }
    //�������� �� ������������� � ��������������
    for (int i=0;i<n;i++)
    {
    int max=x[i][0];
    int min=x[i][0];
    int p=0, q=0, t=0;
    int p1=0, q1=0, t1=0;
        for (int j=0;j<m;j++)
        {
        if (x[i][j] <= min) {min = x[i][j] ; q = i; p = j; }
        if (x[i][j] >= max) {max = x[i][j] ; q1 = i; p1 = j; }
        }
        //������������� �� 0 ������� ������ ����������� �������
        t = x[i][0];
        x[i][0] = x[q][p];
        x[q][p] = t;

        //������������� �� m-1 ������� ������������ ������� ������
        t1 = x[i][m-1];
        x[i][m-1] = x[q1][p1];
        x[q1][p1] = t1;
    }

    cout<<endl;
    for (int i=0;i<n;i++)
    {
        for (int j=0;j<m;j++)
            cout<<x[i][j]<<"\t";
        cout<<endl;
    }

    system ("Pause");
}
