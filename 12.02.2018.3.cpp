//�������� ������ � ����� ��������������. ������� �������� � ��� ���� ������ ����� ��������������. ����� ��������� �������� � ��������������.

#include <iostream>
#include <cmath>

using namespace std;

main()
{
    setlocale (LC_ALL,"Rus");

    int shirina=0,dlina=0;

    cout<<"������� ����� ��������������: ";
    cin>>dlina;
    cout<<"������� ������ ��������������: ";
    cin>>shirina;

    float a;

    a=shirina/(2*1.0);

    float Pk;
    int Pp;

    Pk=a*4.0;
    Pp=2*(dlina+shirina);

    cout<<"�������� ��������: "<<Pk<<endl;
    cout<<"�������� ��������������: "<<Pp;

}

