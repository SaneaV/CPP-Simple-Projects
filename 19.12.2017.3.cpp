//���� ���������� � �����������. ����� ����� ������ ������ � ���.

#include <iostream>

using namespace std;

main()
{
    setlocale(LC_ALL,"Russian");

    cout<<"������� ���������� �����������: ";
    int cm,m;
    cin>>cm;
    m=cm/100;
    cout<<"���������� ������ ������ � ����� �����������: "<<m;
}
