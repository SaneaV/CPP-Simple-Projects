#include <iostream>

using namespace std;

main()
{
    setlocale(LC_ALL,"Russian");
    int mat[100][100];

    int n,m;

    cout<<"������� ���������� �����: ";
    while (!(cin>>n))//������ �������� � ���� ��� �� �����, ���������� ���� (! - not)
        {
            cout<<"������, �� ����� ���-�� �� ��. "<<endl;
            cin.clear();//������� �����
            cin.sync();//������� ������ �� �������
            cout<<"\n������� ���������� �����: ";
        }


        cout<<"������� ���������� ��������: ";
    while (!(cin>>m))//������ �������� � ���� ��� �� �����, ���������� ���� (! - not)
        {
            cout<<"������, �� ����� ���-�� �� ��. "<<endl;
            cin.clear();//������� �����
            cin.sync();//������� ������ �� �������
            cout<<"\n������� ���������� ��������: ";
        }


    cout<<endl<<endl;

    //��������� �������
    for (int i=0; i<n; i++)
    {
        for (int j=0; j<m; j++)
        {
            cout<<"������� �����: ";
            cin>>mat[i][j];
        }

    }

    cout<<endl<<endl<<"�������� �������: "<<endl;

    for (int i=0; i<n; i++)
    {
        for (int j=0; j<m; j++)
            cout<<mat[i][j]<<" ";
        cout<<endl;
    }

    cout<<endl<<endl;


    int t=0;

    //����������� ����������

    for (int i=0; i<m; i++)
    {
        for (int j=0; j<m-1-i; j++)
        {
            if (mat[0][j] > mat[0][j+1])//��������� ������ ������ �������
            {
                for (int q=0; q<n; q++) //������������ ������� � ������������ �������
                {
                    t = mat[q][j];
                    mat[q][j]=mat[q][j+1];
                    mat[q][j+1]=t;
                }
            }
        }
    }



    cout<<"��������� �������: "<<endl;
    for (int i=0; i<n; i++)
    {
        for (int j=0; j<m; j++)
            cout<<mat[i][j]<<" ";
        cout<<endl;
    }

}

