//���� ������ ������������ �����. ����� ����� ��� �� ���, ������� ������ ������.

#include <iostream>

using namespace std;

main()
{
    setlocale(LC_ALL,"RUS");

    float a,b,c,d;
    cout<<"������� ����� a: ";
    cin>>a;
    cout<<"������� ����� b: ";
    cin>>b;
    cout<<"������� ����� c: ";
    cin>>c;
    cout<<"������� ����� d: ";
    cin>>d;

    float S=0;

    a>=10.0? S+=a:S+=0;
    b>=10.0? S+=b:S+=0;
    c>=10.0? S+=c:S+=0;
    d>=10.0? S+=d:S+=0;

    cout<<"����� ������������ �����, ������� ������ ������: "<<S;
}
