//���� ������� �(n,m). ���������� ���������� ��������� ������ ��� X (X - �������� � ����������)

#include <iostream>
#include <stdlib.h>
#include <windows.h>

using namespace std;

main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    int n,m;

    cout<<"������� ���������� �����: ";
    cin>>n;
    cout<<"������� ���������� ��������: ";
    cin>>m;

    int mat[n][m];

    int x;

    cout<<"������� �������� \"X\": ";
    cin>>x;

    cout<<endl;

    int k=0;

    for (int i=0; i<n; i++)
    {
        for (int j=0; j<m; j++)
        {
            cout<<"������� �����: ";
                cin>>mat[i][j];
                if (mat[i][j]>x) k++;
            }
    }

                cout<<endl;

                for (int i=0;i<n;i++)
            {
                for (int j=0;j<m;j++)
                cout<<mat[i][j]<<"\t";
                cout<<endl;
            }

                cout<<endl<<"���������� �����, ������ ��� ���� ( \"X\" = "<<x<<" ): "<<k<<endl;


                        system("PAUSE");
        }
