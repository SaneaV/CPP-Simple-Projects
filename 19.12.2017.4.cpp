//���� ����� � �����������. ����� ����� ������ ��������� � ���.

#include <iostream>

using namespace std;

main()
{
    setlocale(LC_ALL,"Russian");

    cout<<"������� ���������� ����������: ";
    int kg,c;
    cin>>kg;
    c=kg/100;
    cout<<"���������� ������ ��������� � ����� �����������: "<<c;
}

