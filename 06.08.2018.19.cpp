//���� ��� �����. ����� ������������ ��� �����, ������� �������� ���������.

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

    int Sum=1;

    a%2!=0? Sum*=a:0;
    b%2!=0? Sum*=b:0;
    c%2!=0? Sum*=c:0;

    cout<<"������������ �������� �����: "<<Sum;
}
