//���� ��� ����� �����. ������� �� ����� �� �� ���, ������� �������� �������.

#include <iostream>

using namespace std;

main()
{
    setlocale(LC_ALL,"RUS");

    int a,b,c;
    cout<<"������� ����� a: ";
    cin>>a;
    cout<<"������� ����� b: ";
    cin>>b;
    cout<<"������� ����� c: ";
    cin>>c;

    a%2==0? cout<<"����� "<<a<<" ������."<<endl:cout<<"����� "<<a<<" ��������."<<endl;
    b%2==0? cout<<"����� "<<b<<" ������."<<endl:cout<<"����� "<<b<<" ��������."<<endl;
    c%2==0? cout<<"����� "<<c<<" ������."<<endl:cout<<"����� "<<c<<" ��������."<<endl;
}
