//��������� �������� �������������� ������������, ���� �������� ��� ������.

#include <cmath>
#include <iostream>

using namespace std;

main()
{
    setlocale(LC_ALL,"Rus");

    cout<<"������� ������� ������� ������: ";
    int a,b,c;
    cin>>a;
    cout<<"������� ������� ������� ������: ";
    cin>>b;

    c=sqrt(pow(a,2)+pow(b,2));

    cout<<"���������� ������������: "<<c<<endl;

    int P=a+b+c;

    cout<<"�������� ������������: "<<P;
}
