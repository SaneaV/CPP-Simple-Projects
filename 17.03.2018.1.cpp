//��� ��������� ���� F.txt, ������ ������ �������� �������� ��� ������������ �����, �������������� ����� ������� ������������. �������� ���������,
//������� ������� � ��������������� ������ ���������� ����� �G.txt ��� ������������ (��������������, ��������������, ������������).


#include <iostream>
#include <fstream>
#include <windows.h>
#include <iomanip>
#include <cmath>

using namespace std;

main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    cout<<setw(40)<<"����� ����������!"<<endl;

    cout<<"�������� ������ ���������� �����: "<<endl;
    cout<<"1. �������������."<<endl;
    cout<<"2. �������."<<endl;

    cout<<"\n\n�� ���������: ";

    int vib;

    while (!(cin>>vib) or vib>2 or vib<1)//������ �������� � ���� ��� �� �����, ���������� ���� (! - not)
    {
        cout<<"������, �� ����� ���-�� �� ��.\n ";
        cin.clear();//������� �����
        cin.sync();//������� ������ �� �������
        cout<<"\n�� ���������: ";
    }
    system("cls");

    cout<<"������� ���������� �������������: ";

    int n;

    while (!(cin>>n))//������ �������� � ���� ��� �� �����, ���������� ���� (! - not)
    {
        cout<<"������, �� ����� ���-�� �� ��.\n ";
        cin.clear();//������� �����
        cin.sync();//������� ������ �� �������
        cout<<"\n������� ���������� �����: ";
    }

    system("cls");

    switch(vib)
    {
    case 1://�������������� ����
    {

        ofstream f("F.txt");
        int x;
        int k = 0;

        for (int i=0; i<(n*3); i++)
        {
            x = rand() % 20 +1;//��������� ����� �� 1 �� 20
            f<<x<<" ";
            k++;
            if (k==3)
            {
                f<<endl;
                k=0;
            }
        }
        f.close();
        break;
    }

    case 2://������ ����
    {
        ofstream f("F.txt");
        int a,b,c;

        for (int i=0; i<n; i++)
        {
            cout<<"������� 3 ����� ����� ������: ";
            while (!(cin>>a>>b>>c))//������ �������� � ���� ��� �� �����, ���������� ���� (! - not)
            {
                cout<<"������, �� ����� ���-�� �� ��.\n ";
                cin.clear();//������� �����
                cin.sync();//������� ������ �� �������
                cout<<"\n������� 3 ����� ����� ������: ";
            }
            f<<a<<" "<<b<<" "<<c<<endl;
        }
        f.close();
        break;
    }
    }

    ifstream f("F.txt");
    ofstream g("G.txt");

    int a=0,b=0,c=0;

    while (!f.eof())
    {
        f>>a>>b>>c;

        if (!f.eof())
        {
            if (((a+b)>c) and ((a+c)>b) and ((b+c)>a))
            {
                if (a==b and a==c and c==b)
                {
                    g<<a<<" "<<b<<" "<<c<<"    - ����������� ��������������"<<endl;
                }
                else if (a==b and a+b>c or a==c and a+c>b or c==b and c+b>a)
                {
                    g<<a<<" "<<b<<" "<<c<<"    - ����������� ��������������"<<endl;
                }
                else if ((a*a+b*b==c*c)or(b*b+c*c==a*a)or(c*c+a*a==b*b))
                {
                    g<<a<<" "<<b<<" "<<c<<"    - ����������� �������������"<<endl;
                }
                else
                {
                    g<<a<<" "<<b<<" "<<c<<"    - ����������� ������������"<<endl;
                }
            }
            else
            {
                g<<a<<" "<<b<<" "<<c<<"   - ������ ������������ �� ����������"<<endl;
            }
        }
    }


    g.close();
    f.close();
    system("cls");
    cout<<"��������� ��������� ������ � �������. "<<endl;

}
