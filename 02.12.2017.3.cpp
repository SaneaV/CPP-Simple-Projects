//� �������T[1..n] �������� ������� ��������. �������� ���������, ������� ������� �� ����� ������������� �������.�

#include <iostream>
#include <cstring>
#include <windows.h>

using namespace std;

main()
{
    SetConsoleCP(1251);//��� ������ �������� �����
    SetConsoleOutputCP(1251);//��� ����� �������� �����
    int n=0;

    cout<<"��������� ������������ ������� ���� � �������. \n"<<endl;
    cout<<"���������� �������� � ������: ";
    while (!(cin>>n))//������ �������� � ���� ��� �� �����, �� ���� �� ����������(! - not)
    {
        cout<<"������, �� ����� ���-�� �� ��. "<<endl;
        cin.clear();//������� �����
        cin.sync();//������� ������ �� �������
        cout<<"���������� �������� � ������: ";
    }

    char T[100][25];


    cout<<"������� ������ �������� (����� entet): "<<endl;

    for(int i=0; i<n; i++)
        for (int j=0; j<1; j++)
        {
            cout<<i+1<<". ";
            cin>>T[i];

        }

    cout<<endl<<endl<<"�������������� � ������: "<<endl;
    //����� �������
    for(int i=0; i<n; i++)
    {
        for (int j=0; j<1; j++)
            cout<<i+1<<". "<<T[i]<<endl;
    }


    int z=0;

    cout<<endl<<"����������� �������: "<<endl<<endl;
    for (int i=0; i<n; i++)
    {
        for (int k=n; k>i; k--)
        {
            if (strcmp(T[i], T[k])==0)//��������� ������ �� ����������
            {
                cout<<T[i]<<endl;
                z++;
            }

        }
    }
    if (z==0) cout<<"� ���� ������ ��� �������������."<<endl;
}
