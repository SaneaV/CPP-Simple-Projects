//����������� ������� ������� ��������� � ����� ������ ����

#include <iostream>
#include <cmath>
#include <stdlib.h>

using namespace std;

main()
{
    setlocale (LC_ALL,"Russian");
    cout<<"������� ���������� �����: ";
    int n,m,mat[20][20];
    cin>>n;
    cout<<"������� ���������� ��������: ";
    cin>>m;
//���� �������:
    for (int i=0; i<n; i++)
    {
        for (int j=0; j<m; j++)
        {
            mat[i][j]=rand()%100;
        }
    }

//����� ������� ������������ ����� �������:
    int p=0,q=0;
    int min=mat[0][0];
    for (int i=0; i<n; i++)
    {
        for (int j=0; j<m; j++)
        {
            if (mat[i][j]<min)
            {
                min=mat[i][j];
                p=i;
                q=j;
            }
        }
    }
//������ �������

    int temp;
    for (int i=0; i<n; i++)
    {
        for (int j=0; j<m; j++)
        temp = mat[n-1][0];//���������� ��������� ������ ������� ����
        mat[n-1][0] = mat[p][q];//� ����� ������ ���� ��������� ��� ����������� �������
        mat[p][q] =temp;//�� �����, ��� ��������� ����������� ������� ��������� ������� ������ ������� ����
    }

//������� �������
    for (int i=0; i<n; i++)
    {
        for (int j=0; j<m; j++)
            cout<<mat[i][j]<<"\t";
        cout<<endl;
    }




}
