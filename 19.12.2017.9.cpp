//���� ����� � �����������. ����� ����� ������ ���� � ���.

#include <iostream>
#include <cmath>

using namespace std;

main()
{
    setlocale(LC_ALL,"Russian");

    cout<<"������� ���������� ���������: ";
    int kg;
    cin>>kg;
    int t=kg/1000;
    cout<<"���������� ������ ���� � ����� �����������: "<<t;
}
