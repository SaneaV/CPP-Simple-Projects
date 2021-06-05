//���� �������
//����� �������
//���������� �����
//���������� ������������� � ������ ������
//���������� ������,  ������� �������� ������������ �������� �������
//�������, ��������� �� -1,0,1 (� ����������� �� ������, ������ ���� ����� ����.
//�������, ��������� �� ���� ���� �������� ������������� ������
//���� ������� �, �������� ������� ������� �� ��������� (p,q)

#include <iostream>
#include <cmath>

using namespace std;

main()
{
    setlocale (LC_ALL,"Russian");
    cout<<"������� ���������� �����: ";
    int n,m,mat[20][20];
    cin>>n;
    cout<<"������� ���������� ��������: ";
    cin>>m;

    for (int i=0; i<n; i++)
    {
        for (int j=0; j<n; j++)
        {
            cout<<"������� ����� ������� ��� "<<i<<" ������� "<<j<<" �������: ";
            cin>>mat[i][j];
        }

    }
    cout<<"\n\n";
    int S=0,k=0,kstr,min, x[20],pol=0;

    for (int i=0; i<n; i++)
    {
        kstr=0;
        for (int j=0; j<m; j++)
        {
            S+=mat[i][j];//����� �������
            if (mat[i][j]==0) k++;//���������� �����
            if (mat[i][j]>0) kstr++;//���������� ������������� � ������ ������

        }
        cout<<"���������� ������������� ��������� � "<<i<<" ������: "<<kstr<<endl;

    }
    cout<<"\n\n\n";
    cout<<"����� �������: "<<S<<endl;
    cout<<"������� ��������� � ����� �������: "<<k<<endl;

    for (int i=0; i<n; i++)
    {
        int min=mat[i][0];
        pol++;
        for (int j=0; j<m; j++)
        {
            if (mat[i][j]>min)
            {
                min=mat[i][j];      //���������� ������, � ������� ���������� ������������ �������� ����� �������
                x[i]=mat[i][j];
            }
        }
    }


    cout<<"\n���������� ������ �� ������������ ��������� �������: "<<endl;
    for (int i=0; i<pol; i++)
    {
        cout<<x[i]<<" ";
    }

    int matz[20][20];
    for (int i=0; i<n; i++)
    {
        for (int j=0; j<m; j++)
            matz[i][j]=mat[i][j];

    }

    for (int i=0; i<n; i++)
    {
        for (int j=0; j<n; j++)
        {
            if (mat[i][j]>0)
            {
                mat[i][j]=1;
            }
            else if (mat[i][j]<0)
            {
                mat[i][j]=-1;
            }
            else
            {
                mat[i][j]=0;
            }
        }
    }

    cout<<"\n\n�������, ��������� �� -1,0,1 (� ����������� �� ������, ������ ���� ����� ����."<<endl;
    for (int i=0; i<n; i++)
    {
        for (int j=0; j<m; j++)
            cout<<mat[i][j]<<"\t";
        cout<<endl;
    }

    cout<<"\n\n�������� ����� �������(c ���� �� ���������): "<<endl;
    int b[20][20];
    for (int i=0; i<n; i++)
    {
        for (int j=0; j<m; j++)
        {
            cout<<"������� ����� ������� ��� "<<i<<" ������� "<<j<<" �������: ";
            cin>>b[i][j];
        }
    }

    int c[20][20];
    for (int i=0; i<n; i++)
    {
        for (int j=0; j<m; j++)
        {
            c[i][j]=matz[i][j]+b[i][j];
        }
    }

    cout<<"\n\n����� �������� ������� � �����: "<<endl;

    for (int i=0; i<n; i++)
    {
        for (int j=0; j<m; j++)

            cout<<c[i][j]<<"\t";
        cout<<endl;

    }

    cout<<"\n\n������ �������� ������� ������: "<<endl;
    cout<<"������� ����� ������, ������� �� �������: ";
    int q=0,p=0,t;
    cin>>p;
    cout<<"������� ����� ������, �� ������� �� �������: ";
    cin>>q;


    for (int i=0; i<n; i++)
    {
        for (int j=0; j<m; j++)

        {
            t=matz[q][j];
            matz[q][j]=matz[p][j];
            matz[p][j]=t;
        }
    }

    for (int i=0; i<n; i++)
    {
        for (int j=0; j<m; j++)
            cout<<matz[i][j]<<"\t";
        cout<<endl;
    }

}
