//���� ��� �������, ����� �� ������� ��������������

#include <iostream>
#include <cmath>

using namespace std;

main()
{
    setlocale (LC_ALL,"Russian");
    cout<<"������� ���������� �����: ";
    int n,m,mat[20][20];
    cin>>n;
    cout<<"������� ���������� ��������: ";
    cin>>m;

    for (int i=0; i<n; i++)
    {
        for (int j=0; j<n; j++)
        {
            cout<<"������� ����� ������� ��� "<<i<<" ������� "<<j<<" �������: ";
            cin>>mat[i][j];
        }
    }

    cout<<"\n\n������ �������:"<<endl;
    int mat1[20][20];


    for (int i=0; i<n; i++)
    {
        for (int j=0; j<m; j++)
        {
            cout<<"������� ����� ������� ��� "<<i<<" ������� "<<j<<" �������: ";
            cin>>mat1[i][j];
        }
    }

    for (int i=0;i<n;i++)
    {
        for (int j=0;j<m;j++)
        {
            mat1[i][j]=sqrt(mat1[i][j]*mat[i][j]);

        }
    }

    cout<<"\n\n������� ��������������: "<<endl;
        for (int i=0;i<n;i++)
    {
        for (int j=0;j<m;j++)
            cout<<mat1[i][j]<<"\t";
            cout<<endl;

    }

}
