//y=3.5a+7x+25x^2, x<5
//y=a+sqrt(5), x>5
//y=acos(x-6/x-5),x=5

#include <iostream>
#include <cmath>

using namespace std;

main()
{
    setlocale(LC_ALL,"Rus");
    float a,x,y=0;
    char *kav="\"";//*kav - ����� � ��� ���������
    cout<<"����� ����������\n";
    cout<<"\n������� �������� ��� "<<kav<<"a"<<kav<<": ";
    while (!(cin>>a))//������ �������� � ���� ��� �� �����, ���������� ���� (! - not)
    {
        cout<<"������, �� ����� ���-�� �� ��.";
        cin.clear();//������� �����
        cin.sync();//������� ������ �� �������
        cout<<" ������� �������� ��� "<<kav<<"a"<<kav<<": ";
    }
    cout<<"\n������� �������� ��� "<<kav<<"x"<<kav<<": ";
    while (!(cin>>x))//������ �������� � ���� ��� �� �����, ���������� ���� (! - not)
    {
        cout<<"������, �� ����� ���-�� �� ��. ";
        cin.clear();//������� �����
        cin.sync();//������� ������ �� �������
        cout<<" ������� �������� ��� "<<kav<<"x"<<kav<<": ";
    }

    if (x<5)
    {
        cout<<"\n(x<5)\n";
        y=3.5*a+7*x-2.5*pow(x,2);
    }
    else if (x>5)
    {
        cout<<"\n(x>5)\n";
        y=a+sqrt(5);
    }
    else
    {
        cout<<"\n(x=5)\n";
        y=(a*cos((x-6)/(x+5)));
    }
    cout<<"\n�����: y = "<<y<<"\n\n";
}
