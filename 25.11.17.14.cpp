//���� ��� �������, ��������� ������ �������, � ������� ����� ������������ �������� ���� ������

#include <iostream>
#include <cmath>

using namespace std;

main()
{
    setlocale (LC_ALL,"Russian");
    cout<<"������� ���������� �����: ";
    int n,m,a[20][20],b[20][20],c[20][20];
    cin>>n;
    cout<<"������� ���������� ��������: ";
    cin>>m;

    cout<<"������ �������: "<<endl;
    for (int i=0; i<n; i++)
    {
        for (int j=0; j<n; j++)
        {
            cout<<"������� ����� ������� ��� "<<i<<" ������� "<<j<<" �������: ";
            cin>>a[i][j];
        }
    }

    cout<<"\n\n������ �������: "<<endl;
    for (int i=0; i<n; i++)
    {
        for (int j=0; j<m; j++)
        {
            cout<<"������� ����� ������� ��� "<<i<<" ������� "<<j<<" �������: ";
            cin>>b[i][j];
        }
    }

    for (int i=0; i<n; i++)
    {
        for (int j=0; j<n; j++)
        {
            if (a[i][j]>=b[i][j]) c[i][j]=a[i][j];
                else c[i][j]=b[i][j];
        }
    }
cout<<"\n\n������ ������� (��������� �� ������������ ��������� ������ � ������ �������): "<<endl;
    for (int i=0; i<n; i++)
    {
        for (int j=0; j<n; j++)

            cout<<c[i][j]<<"\t";
            cout<<endl;

    }






}
