//���� ��� ����� �����. ������� �� ����� �� �� ���, ������� ������ 5.

#include <iostream>

using namespace std;

int main()
{
    setlocale(LC_ALL,"RUS");

    int a,b,c;

    cout<<"������� �����: ";
    cin>>a;
    cout<<"������� �����: ";
    cin>>b;
    cout<<"������� �����: ";
    cin>>c;

    a%5==0? cout<<"����� "<<a<<" ������ ����"<<endl:cout<<"";
    b%5==0? cout<<"����� "<<b<<" ������ ����"<<endl:cout<<"";
    c%5==0? cout<<"����� "<<c<<" ������ ����"<<endl:cout<<"";
}
