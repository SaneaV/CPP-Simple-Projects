//����� ������� �������������� ������������� ��������� ������� ������� �������

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
    cout<<"������� ���������� ��������: ";
    cin>>m;

    cout<<endl;
    int mat[n][m];

    for (int i=0; i<n; i++)
        for (int j=0; j<m; j++)
        {
            cout<<"������� �����: ";
            cin>>mat[i][j];

        }

        cout<<endl;
    int S=0,k=0;
    for (int j=0; j<m; j++)
    {
        S=0;
        k=0;
        for (int i=0; i<n; i++)
        {
            if (mat[i][j]>0)
            {
                S+=mat[i][j];
                k++;
            }
        }
        cout<<"������� �������������� "<<j<<" �������: "<<S/k<<endl;
    }

    cout<<endl;

    for (int i=0; i<n; i++)
    {
        for (int j=0; j<m; j++)
            cout<<mat[i][j]<<"\t";
        cout<<endl;
    }

    cout<<endl;
    system ("PAUSE");


}
