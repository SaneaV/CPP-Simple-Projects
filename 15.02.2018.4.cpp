//���� ��� �����. ���������, ����� �� ��������� ����������� � ������ ���������.

#include <iostream>

using namespace std;

main()
{
    setlocale(LC_ALL,"RUS");

    cout<<"������� ������ �����: ";
    int a,b,c;
    cin>>a;
    cout<<"������� ������ �����: ";
    cin>>b;
    cout<<"������� ����������: ";
    cin>>c;

    cout<<"����� ����������� ����������: "<<boolalpha<<((a+b>c) and (a+c>b) and (b+c>a));
}
