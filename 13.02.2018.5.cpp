//����� ������ ��������� ����������, ���� �������� ������� ������������.

#include <iostream>
#include <cmath>

using namespace std;

main()
{
    setlocale (LC_ALL,"Rus");

    int a,b,c;

    cout<<"\t\t\t������������� ������������"<<endl;

    cout<<"������� ����� ������ \"�\": ";
    cin>>a;
    cout<<"������� ����� ������ \"b\": ";
    cin>>b;
    cout<<"������� ����� ���������� \"c\": ";
    cin>>c;

    float R=0,p=0;

    p = 0.5 * (a+b+c);

    R = (a*b*c)/(4.0*sqrt(p*(p-a)*(p-b)*(p-c)));

    cout<<"������ ��������� ����������: "<<R;


}
