//���� ������������� ������������� �������. ����� ���������� �����, ������� �������������� ��������� ������� ������ �������� ��������.

#include <iostream>
#include <windows.h>

using namespace std;

int main()
{
    setlocale(LC_ALL,"RUS");

    int n,m;
    cout<<"������� ���������� �����: ";
    cin>>n;
    cout<<"������� ���������� ��������: ";
    cin>>m;

    int **A=new int *[n];
    for (int i=0; i<n; i++)
        A[i]=new int [m];

    for(int i=0; i<n; i++)
        for(int j=0; j<m; j++)
        {
            cout<<"������� �����: ";
            cin>>A[i][j];
        }

    system("cls");

    cout<<"����������� ��� �������: "<<endl<<endl;

    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
            cout<<A[i][j]<<" ";
        cout<<endl;
    }

    cout<<endl<<endl;
    cout<<"������� �����: ";
    int k;
    cin>>k;

    int S=0;
    int Str = 0;

    for(int i=0;i<n;i++)
    {
        S=0;
        for(int j=0;j<m;j++)
        {
           S+=A[i][j];
        }
        if((S/(m-1)<k)) Str++;
    }

    cout<<"���������� �����, ������� �������������� ��������� ������� ������ "<<k<<" - "<<Str<<endl;

    cout<<endl<<endl;

    cout<<"�������� ��� �������: "<<endl<<endl;

    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
            cout<<A[i][j]<<" ";
        cout<<endl;
    }

}
