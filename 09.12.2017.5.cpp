//���� ������������� ���������� �������. �
//����� ����� ��������� � ��� ��������, ������� �������� ���� �� ���� ������������� �������.
#include <iostream>

using namespace std;

main()
{
    setlocale(LC_ALL,"Russian");

    cout<<"������� ������ �������: ";
    int n;
    cin>>n;

    int m=n;

    int a[20][20];

    for (int i=0; i<n; i++)
    {
        for (int j=0; j<m; j++)
        {
            cout<<"������� �����: ";
            cin>>a[i][j];
        }

    }

    int S=0;
    for (int i=0; i<n; i++)
    {
        S=0;
        for (int j=0; j<m; j++)
        {
            if (a[i][j]<0)
            {
                for (int i=0; i<m; i++)
                {
                    S+=a[i][j];
                }
                i++;
                cout<<endl<<"����� ����� �������: "<<S<<endl;
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
