//����������, ����� �� ���� ����� ��������� ����� ����������� ��������� (-10;10).

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

    a>=-10 and a<=10? cout<<"����� "<<a<<" ����������� �������."<<endl:cout<<"";
    b>=-10 and b<=10? cout<<"����� "<<b<<" ����������� �������."<<endl:cout<<"";
    c>=-10 and c<=10? cout<<"����� "<<c<<" ����������� �������."<<endl:cout<<"";
}
