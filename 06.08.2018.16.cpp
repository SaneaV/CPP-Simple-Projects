//���� ��� ������������ �����. ������� �� ����� �� �� ���, ������� �������� �� ��������������.

#include <iostream>

using namespace std;

int main()
{
    setlocale(LC_ALL,"RUS");

    float a,b,c;

    cout<<"������� �����: ";
    cin>>a;
    cout<<"������� �����: ";
    cin>>b;
    cout<<"������� �����: ";
    cin>>c;

    a>=0? cout<<"����� "<<a<<" �������������"<<endl:cout<<"";
    b>=0? cout<<"����� "<<b<<" �������������"<<endl:cout<<"";
    c>=0? cout<<"����� "<<c<<" �������������"<<endl:cout<<"";

}
