//��������� ������ ����������, ���� �������� ����� ����������.

#include <iostream>
#include <cmath>

using namespace std;

main()
{
    setlocale (LC_ALL,"Rus");

    cout<<"������� ����� ����������: ";
    int dlina;
    cin>>dlina;

    float R;
    R=dlina/(2*M_PI);

    cout<<"������ ����������: "<<R;
}
