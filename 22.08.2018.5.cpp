//���� ���������� ������� ����� ����� �������� N*N (N - ������ � ����������). �������� ������� �� ����� ����� �������� � ������������ ����������.

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
        A[i]=new int [n];

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
    int min = A[0][0];

    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            if(min>A[i][j])
                min = A[i][j];
        }
    }


    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            if(A[i][j]==min)
            {
                for(int p=n-1; p>=i; p--)
                {
                    for(int q=m; q>j; q--)
                    {
                        A[p][q] = A[p][q-1];
                    }
                }
                m++;

                for(int p=0; p<n; p++)
                {
                    for(int q=0; q<m; q++)
                    {
                        if(q==j+1)
                        {
                            A[p][q] = 0;
                        }
                    }
                }
            }
        }
    }


    cout<<endl<<endl;

    cout<<"�������� ��� �������: "<<endl<<endl;

    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
            cout<<A[i][j]<<" ";
        cout<<endl;
    }

}
