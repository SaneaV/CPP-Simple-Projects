//���� ���������� ������� ����� ����� �������� N*N (N - ������ � ����������). �������� ������� �� ����� ����� �������� � ����������� ������ ���������.

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


    int pmin = 0;
    int S = 0;
    int Smin = INT_MAX;


    for(int j = 0 ; j < m ; j++)
    {
        S = 0;
        for(int i = 0 ; i < n ; i++)
        {
            S+=A[i][j];

        }
        if(Smin>S)
        {
            Smin=S;
            pmin=j;

        }
    }

    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            if(pmin==j)
            {
                for(int p=n-1; p>=i; p--)
                {
                    for(int q=m; q>j; q--)
                    {
                        A[p][q] = A[p][q-1];

                    }
                }
                m++;

                for(int p=i; p<n; p++)
                {
                    for(int q=j; q<m; q++)
                    {
                        if(q==(pmin+1))
                        {
                            A[p][q]=0;
                        }
                    }
                }
                i=n;
                j=m;
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
