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

    float S,p,r;

    p = (a+b+c)/2.0;

    S = sqrt(((a + b + c)/2.0) * ((a + b + c)/2.0 - a) * ((a + b + c)/2.0 - b) * ((a + b + c)/2.0 - c));

    r = S/p;

    cout<<"������ ��������� ����������: "<<r;

}
