//�������� ��������� ��������. ����� ��� ������� � �������.

#include <iostream>
#include <cmath>

using namespace std;

main()
{
    setlocale(LC_ALL,"RUS");

    cout<<"������� ��������� ��������: ";
    int d;
    cin>>d;
    float S=(pow(d,2))/2;
    float a=sqrt(S);
    cout<<"������� ��������: "<<a<<endl;
    cout<<"������� ��������: "<<S<<endl;
}
