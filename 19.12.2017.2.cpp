//�������� ��������� ��������. ����� ��� ��������.

#include <iostream>
#include <cmath>

using namespace std;

main()
{
    setlocale(LC_ALL,"Russian");
    cout<<"��� ����������� ABCD"<<endl;
    cout<<"������� ��������� �������� (AC): ";
    int d;
    cin>>d;
    float a=d/sqrt(2);
    float p=4.0*a;
    cout<<"�������� �������� ABCD: "<<p<<endl;

}
