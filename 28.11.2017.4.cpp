//��������� ����� ������������ � ������������� ��������

#include <iostream>

using namespace std;

main()
{
    setlocale (LC_ALL,"Rus");
    int n,m,x[20][20];
    cout<<"������� ���������� �����: ";
    cin>>n;
    cout<<"������� ���������� ��������: ";
    cin>>m;
    for (int i=0;i<n;i++)
        for (int j=0;j<m;j++)
    {
        cout<<"������� �����: ";
        cin>>x[i][j];
    }
    int max=x[0][0];
    int min=x[0][0];
    for (int i=0;i<n;i++)
    {
       for (int j=0;j<m;j++)
            {if (min>x[i][j]) min=x[i][j];
            if (max<x[i][j]) max=x[i][j];
            }
    }
    cout<<"����� ������������� � ������������ �������� �������: "<<min+max;



}
