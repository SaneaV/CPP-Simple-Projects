//���� ������������� ������� ����� ����� �������� N*M (N,M- ������ � ����������). �������� ������� ������ ����� �������� ��������.

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

    int A[100][100];

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

    int k = n/2;
    n++;

    for(int i=n-1; k<i; i--)
    {
        for(int j=0; j<m; j++)
        {
            A[i][j] = A[i-1][j];
        }
    }

    for(int i=0; i<=k; i++)
    {
        for(int j=0; j<m; j++)
        {
            if(k==i)
            {
                A[i+1][j]=A[0][j];
            }

        }
    }

    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            A[i][j]=A[i+1][j];
        }
    }
    n--;


    cout<<endl<<endl;

    cout<<"�������� ��� �������: "<<endl<<endl;

    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
            cout<<A[i][j]<<" ";
        cout<<endl;
    }

}

