//���� ��� ����� �����. ���� ���������� ������ �� ������� ����� ������ ������� �����, �� ��������� ������ ����� � 10 ���.

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    setlocale(LC_ALL,"RUS");

    int a,b;

    cout<<"������� �����: ";
    cin>>a;
    cout<<"������� �����: ";
    cin>>b;

    sqrt(b)<a? b*=10:0;

    cout<<"������ �����: "<<a<<endl;
    cout<<"������ �����: "<<b<<endl;
}
