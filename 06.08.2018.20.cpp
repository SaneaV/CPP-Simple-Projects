//���� ������ ����� �����. ����� ����� ��� �� ���, ������� ������ ����. �������� ����� �� ������������.

#include <iostream>

using namespace std;

int main()
{
    setlocale(LC_ALL,"RUS");

    int a,b,c,d;

    cout<<"������� �����: ";
    cin>>a;
    cout<<"������� �����: ";
    cin>>b;
    cout<<"������� �����: ";
    cin>>c;
    cout<<"������� �����: ";
    cin>>d;

    int Sum=0;

    a%3==0? Sum+=a:0;
    b%3==0? Sum+=b:0;
    c%3==0? Sum+=c:0;
    d%3==0? Sum+=d:0;

    cout<<"����� ����� ������� ���: "<<Sum<<endl;
}
