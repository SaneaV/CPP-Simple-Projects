//���� ������� �(n,m). ���������� ���������� ������������� ��������� ������� � ������ ������

#include <iostream>
#include <stdlib.h>
#include <windows.h>

using namespace std;

main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    int n,m;

    cout<<"������� ���������� �����: ";
    cin>>n;
    cout<<"������� ��������� ��������: ";
    cin>>m;

    int x[n][m];
    int k=0;

    for (int i=0;i<n;i++)
    {
        k=0;
        for (int j=0;j<m;j++)
            {
                cout<<"������� �����: ";
                cin>>x[i][j];
                if (x[i][j]<0) k++;
            }
            cout<<endl<<"� "<<i<<" ������: "<<k<<" ������������� ��������/��."<<endl<<endl;

    }

system ("Pause");
}
