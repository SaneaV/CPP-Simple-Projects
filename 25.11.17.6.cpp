/*
��������� �������:
n 0 0 0 ... n*0
0 n 0 0 ... n*0
0 0 n 0 ... n*0
0 0 0 n ... n*0
*/

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


    /*for (int i=0; i<n; i++)
    {
        for (int j=0; j<n; j++)
        {
            cout<<"������� ����� ������� ��� "<<i<<" ������� "<<j<<" �������: ";
            cin>>mat[i][j];
        }
    }*/

    int p=1;
    for (int i=0;i<n;i++)
    {
        for (int j=0;j<m;j++)
        {if (i==j) mat[i][j]=p++;
        else mat[i][j]=0;}
    }

    for (int i=0;i<n;i++)
    {
        for (int j=0;j<m;j++)
        cout<<mat[i][j]<<"\t";
        cout<<endl;
    }
}
