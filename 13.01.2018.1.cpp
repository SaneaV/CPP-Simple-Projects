//� ������ � ��������. �� �5� ����������� ������ �������� � ��������. ����� ������� �������� �������� ����������� ������ �� ����?
#include <iostream>

using namespace std;

main()
{
    setlocale(LC_ALL,"Rus");

    cout<<"������� ���������� ��������: ";
    int a,b;
    cin>>a;
    cout<<endl<<"������� �������� �������� ������ �� \"5\": ";
    cin>>b;

    float z;
    z=(b*1.0/a*1.0)*100;
    cout<<"�� ������ 5 ��������: "<<z<<" ���������, ������";
}