//���� ����� � ������. �������� ����� � ���������, ����������� � �������.

#include <iostream>
#include <cmath>

using namespace std;

main()
{
    setlocale(LC_ALL,"Rus");

    int tonni,kg,centner,gram;

    cout<<"������� ���������� ����: ";
    cin>>tonni;

    centner=tonni*10;
    kg=tonni*1000;
    gram=tonni*1000000;

    cout<<"���������� ���������: "<<centner<<endl;
    cout<<"���������� ���������: "<<kg<<endl;
    cout<<"���������� �����: "<<gram;

}
