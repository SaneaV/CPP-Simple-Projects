//���� ���������� ������� ����� ����� �������� N*N (N � ������ � ����������). ������� ��� ������� �������, ������� �������� ������������ �������.

#include <iostream>
#include <windows.h>

using namespace std;

int main()
{
    setlocale(LC_ALL,"RUS");

    int n;
    cout<<"������� ���������� ����� � ��������: ";
    cin>>n;

    int m = n;

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

    int max = A[0][0];

    for(int i=0; i<n; i++)
        for(int j=0; j<m; j++)
        {
            if(max<A[i][j])
                max = A[i][j];
        }

    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            if(max==A[i][j])
            {
                for(int q=0; q<n; q++)
                {
                    for(int p=j; p<m; p++)
                    {
                        A[q][p] = A[q][p+1];
                    }
                }
                m--;
                j--;
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
