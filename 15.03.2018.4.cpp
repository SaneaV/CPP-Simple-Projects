//�������. ������ ������� � ����� � �����.

#include <iostream>

using namespace std;

int MassiveInput(int x[20][20], int z, int y)
{
    for (int i=0;i<z;i++)
    {
        for (int j=0;j<y;j++)
        {
            cout<<"������� �����: ";
            cin>>x[i][j];
        }
    }
    return x[20][20];
}

int MassiveOutput (int x[20][20], int z, int y)
{
    for (int i=0;i<z;i++)
    {
        for (int j=0;j<y;j++)
            cout<<x[i][j]<<" ";
            cout<<endl;
    }
    return x[20][y];
}

float Sum(int x[20][20], int z, int y)
{
    int S=0;
    for (int i=0;i<z;i++)
    {
        for (int j=0;j<y;j++)
        {
            S+=x[i][j];
        }
    }
    return S;
}

main()
{
    setlocale (LC_ALL, "RUS");
    int n, m;
    cout<<"������� ���������� �����: ";
    cin>>n;
    cout<<"������� ���������� ��������: ";
    cin>>m;
    int S=0;

    int Mas[20][20];

    MassiveInput (Mas,n,m);

    cout<<endl<<"����� �������: "<<endl;

    MassiveOutput (Mas,n,m);

    cout<<endl<<"����� �������: "<<Sum(Mas,n,m);



}
