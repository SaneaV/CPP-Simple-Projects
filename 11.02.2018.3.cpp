//�������� �������� ��������. ����� ��� ��������� � �������.

#include <iostream>
#include <cmath>

using namespace std;

main()
{
    setlocale (LC_ALL,"Rus");

    int P,a,Diagonali,Ploshadi;

    cout<<"������� �������� ��������: ";
    cin>>P;

    a=P/4;
    Diagonali=sqrt(2)*a;
    Ploshadi=a*a;

    cout<<"������� ��������: "<<Ploshadi<<endl;
    cout<<"��������� ��������: "<<Diagonali;

}
