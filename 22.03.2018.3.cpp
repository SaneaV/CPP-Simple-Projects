//��������� ������������ ��������� ���������. ���� ��� ������� A(n,m) � B(n,m).
//��������� ������� C(n,m), ��������� �������:
//C(i,j)=������� �������������� A(i,j) � B(i,j)

#include <iostream>
#include <cmath>

using namespace std;

void InputArray (int x[20][20],int n, int m)
{
    for (int i=0;i<n;i++)
    {
        for (int j=0;j<m;j++)
        {
            cout<<"������� �����: ";
            cin>>x[i][j];
        }
    }
}

void ShowArray (int x[20][20], int n, int m)
{
    for (int i=0;i<n;i++)
    {
        for (int j=0;j<m;j++)
            cout<<x[i][j]<<" ";
        cout<<endl;
    }
}

void CArray(int x[20][20], int y[20][20], int z[20][20], int n, int m)
{
    for (int i=0;i<n;i++)
    {
        for (int j=0;j<m;j++)
        {
            z[i][j]=sqrt(x[i][j]*y[i][j]);
        }
    }
}

int main()
{
    setlocale(LC_ALL,"RUS");
    int n1,m1;
    int a[20][20];
    int b[20][20];
    int d[20][20];

    cout<<"������� ���������� �����: ";
    cin>>n1;
    cout<<"������� ���������� ��������: ";
    cin>>m1;

    cout<<"\n���� ������ �������: "<<endl;
    InputArray(a,n1,m1);
    cout<<"\n���� ������ �������: "<<endl;
    InputArray(b,n1,m1);

    cout<<"\n����� ������ �������: "<<endl;
    ShowArray(a,n1,m1);
    cout<<"\n����� ������ �������: "<<endl;
    ShowArray(b,n1,m1);

    cout<<"\n�� ������� ��������������: "<<endl;
    CArray(a,b,d,n1,m1);
    ShowArray(d,n1,m1);


}
