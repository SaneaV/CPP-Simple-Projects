//���������� ���������� ������ ����� � ������ �������

#include <iostream>

using namespace std;

main()
{
    setlocale (0,"");
    int n=0,m=0,x[10][30];
    cout<<"������� N: ";
    cin>>n;
    cout<<"������� M: ";
    cin>>m;
    int chet;
    for (int i=0; i<n; i++)
    {
        chet=0;
        for (int j=0; j<m; j++)
        {
            cout<<"������� �����: ";
            cin>>x[i][j];
            if(x[i][j]%2==0) chet++;
        }
        cout<<"� ���� ������ ������ �����: "<<chet<<endl;
    }

    for (int i=0; i<n; i++)
    {
        for (int j=0; j<m; j++)
            cout<<x[i][j]<<"\t";
        cout<<endl;
    }
}
