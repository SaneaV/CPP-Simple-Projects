//����������, ����� �� ���� ����� ��������� ����� ����������� ������������� [-9;15).

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

    a>=-9 and a<15? cout<<"����� "<<a<<" ����������� ���������."<<endl:cout<<"";
    b>=-9 and b<15? cout<<"����� "<<b<<" ����������� ���������."<<endl:cout<<"";
    c>=-9 and c<15? cout<<"����� "<<c<<" ����������� ���������."<<endl:cout<<"";
}
