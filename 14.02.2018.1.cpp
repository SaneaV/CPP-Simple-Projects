//����� ����� � �������� ���� ������������ ������, ��� ������� �������� ��������� � �����������.

#include <iostream>

using namespace std;

main()
{
    setlocale(LC_ALL,"Rus");

    int a,b,c,d;
    int x,y;
    int z,t;

    cout<<"������� ������ ���������: ";
    cin>>a;
    cout<<"������� ������ �����������: ";
    cin>>b;
    cout<<"������� ������ ���������: ";
    cin>>c;
    cout<<"������� ������ �����������: ";
    cin>>d;

    cout<<"\n������ �����: "<<a<<"/"<<b<<endl;
    cout<<"������ �����: "<<c<<"/"<<d<<endl<<endl;

    if (b==d)
    {
        x=a+c;
        y=d;
        cout<<"����� ����� ������: "<<x<<"/"<<y<<endl;

        z=a-c;
        t=d;
        cout<<"�������� ����� ������: "<<z<<"/"<<t<<endl;
    }

    else {

        y=d*b;
        x=(a*d)+(c*b);
        cout<<"����� ����� ������: "<<x<<"/"<<y<<endl;

        t=d*b;
        z=(a*d)-(c*b);
        cout<<"�������� ����� ������: "<<z<<"/"<<t<<endl;
    }




}