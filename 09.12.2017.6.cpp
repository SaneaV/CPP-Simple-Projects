//���� ������������� ������� ������������ ����� �������� N*M (N,M- ������ � ����������).
//��������� ��������� � ��� ���� ��� ����� � ��� ������� �������, ������� �������� ������ ������������� �����.�

#include <iostream>

using namespace std;

main()
{
    setlocale(LC_ALL,"Russian");

    cout<<"������� ���������� �����: ";
    int n;
    cin>>n;
    cout<<"������� ���������� ��������: ";
    int m;
    cin>>m;


    int a[20][20];

    for (int i=0; i<n; i++)
    {
        for (int j=0; j<m; j++)
        {
            cout<<"������� �����: ";
            cin>>a[i][j];
        }

    }

    int k=0;

    for (int i=0; i<n; i++)
    {
        k=0;
        for (int j=0;j<m;j++)
        {
            if (a[i][j]>0) k++;
            if (k==m) {for (int j=0;j<m;j++)
                {
                    a[i][j]=a[i][j]*2;
                }
            }
        }
    }

    for (int i=0;i<n;i++)
    {
        for (int j=0;j<m;j++)

            cout<<a[i][j]<<"\t";
            cout<<endl;

    }
}
