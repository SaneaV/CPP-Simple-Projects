//���� �������� � ��/� ��������� �������� � �/�.

#include <iostream>

using namespace std;

main()
{
    setlocale(LC_ALL,"Rus");

    cout<<"������� �������� (��/�): ";
    int km,m;
    cin>>km;

    m=(km*1000)/3600;

    cout<<"�������� � (�/�): "<<m;
}
