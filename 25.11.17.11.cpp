//������� �������������� ������ �������

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

   int S=0;

    for (int i=0; i<n; i++)
    {
        for (int j=0; j<m; j++)
        {
            cout<<"������� ����� ������� ��� "<<i<<" ������� "<<j<<" �������: ";
            cin>>mat[i][j];
        }
    }

    for (int i=0;i<n;i++)
    {S=0;
        for (int j=0;j<m;j++)
           {
              S+=mat[i][j];
              }
              S/=n;
           cout<<"� "<<i<<" ������ ������� ��������������: "<<S<<endl;
    }


}
