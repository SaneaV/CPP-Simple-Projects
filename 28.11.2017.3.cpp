//����� ������� �������������� ������������ ��������� ������ ������ �������

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
    int S=1;
    for (int i=0;i<n;i++)
    {
        S=1;
        for (int j=0;j<m;j++)
            {
                S*=x[i][j];
            }
            S/=m;
            cout<<"������� �������������� ����������� "<<i<<": "<<S<<endl;
    }

}
