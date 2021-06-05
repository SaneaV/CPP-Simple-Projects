//���� ���������� ������� ����� ����� �������� N*N (N � ������ � ����������). ������� ��� ������ �������, ������� �������� ����������� �������.

#include <iostream>
#include <cstdlib>
#include <stdlib.h>

using namespace std;

main()
{
    setlocale (LC_ALL, "Russian");

    int n=0,m=0;

    cout<<"���� ������� ����� (N*N), ������ �������� ��� \"N\": ";

    while (!(cin>>n))//������ �������� � ���� ��� �� �����, �� ���� �� ����������(! - not)
    {
        cout<<"������, �� ����� ���-�� �� ��. "<<endl;
        cin.clear();//������� �����
        cin.sync();//������� ������ �� �������
        cout<<"������ �������� ��� \"N\": \n";
    }

    m=n;//����������� �������� n ��� m. ���������� ��� ����������� ������������� (� ��. n--)


    int mat[n][m];//������ ������� ��������� N*N

    cout<<endl;

    cout<<"�� ������ ������ ���� �������� ��� ��������������� ��������: \n"<<endl;
    cout<<"������ ������ - 1 "<<endl;
    cout<<"��������������� �������� - 2 "<<endl;
    cout<<"\n�������� ������� ���������� �������: ";

    int vib;

    while (!(cin>>vib) or vib>2 or vib<1)//������ �������� � ���� ��� �� �����, �� ���� �� ����������(! - not)
    {
        cout<<"������, �� ����� ���-�� �� ��. "<<endl;
        cin.clear();//������� �����
        cin.sync();//������� ������ �� �������
        cout<<"�������� ������� ���������� �������: ";
    }

    switch(vib)
    {
    case 1:
    {
        //���� ��������� ������� �������������
        for (int i = 0 ; i < n ; i++ )
        {
            for (int j = 0 ; j < m ; j++ )
            {
                cout<<"������� �����: ";
                cin>>mat[i][j];
            }
        }break;
    }

    case 2:
    {
        //���� ��������� ������� ��������
        for (int i = 0 ; i < n ; i++ )
        {
            for (int j = 0 ; j < m ; j++ )
            {
                mat[i][j] = (rand() % 100)-10;; // ������ ������� ���������� ����� �� -10 �� 89

            }
        }break;
    }
    }

    cout << "\n����� ��������� �������:\n\n";
        //����� �������
    for (int i = 0 ; i < n ; i++ )
    {
        for (int j = 0 ; j < m ; j++ )
            cout<<mat[i][j]<<"\t";
        cout<<endl;
    }
    cout << "\n\n";


        //����� ������������ ��������
    int min = mat[0][0];

    for (int i = 0 ; i < n ; i++ )
    {
        for (int j = 0 ; j < m ; j++ )
        {
            if (mat[i][j] < min)
            {
                min = mat[i][j];
            }
        }

    }

        //�������� ����� � ����������� ���������
    for (int i = 0 ; i < n ; i++ )
    {
        for (int j = 0 ; j < m ; j++ )
        {
            if (mat[i][j]==min)//��������� �������
            {
                for(int k=i; k<n-1; k++) //���� � ������ ���� ����������� �����, �������� � �� ������
                    for (int g=0; g<m; g++)
                    {
                        mat[k][g]=mat[k+1][g];
                    }
                n--;
                i--;
            }
        }
    }

        //����� �������
    cout << "����� �������� �������\n\n";
    for (int i = 0 ; i < n ; i++ )
    {
        for (int j = 0 ; j < m ; j++ )
            cout<<mat[i][j]<<"\t";
        cout<<endl;
    }
    system ("pause");
    }
