//���������, ��� �������� �������� ����� �������

#include<iostream>
#include <stdlib.h>
#include <iomanip>
#include <windows.h>

using namespace std;

main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    cout<<"������ ����!"<<endl;
    cout<<"������� ���������� ��� ������� ����."<<endl;
    cout<<"��� ������ �� ��������� ������ �������� \"8888\""<<endl;
    float y=1,S=0,x;


    do
    {
        cout<<"\n������� ���� ������: \n"<<y<<".";
        while (!(cin>>x))//������ �������� � ���� ��� �� �����, ���������� ���� (! - not)
        {
            cout<<"������, �� ����� ���-�� �� ��. "<<endl;
            cin.clear();//������� �����
            cin.sync();//������� ������ �� �������
            cout<<"\n������� ���� ������: \n"<<y<<".";
        }
        if (x>0 and x<11)
        {
            S+=x;
            ++y;
        }
        else if (x!=8888) (cout<<"�� ����� ������� �����, �� ���������, ��������� ������� ������\n");

    }
    while (x!=8888);
    cout<<"��� ������� ����: "<<setprecision(3)<<S/(--y)<<"\n\n\n";
    system("PAUSE");
}
