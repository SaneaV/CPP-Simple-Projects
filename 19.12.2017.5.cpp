//����� ������� �������� �� ��������� ���������� � ������.

#include <iostream>

using namespace std;

main()
{
    setlocale(LC_ALL,"Russian");

    cout<<"������� ��������� ��������: ";
    int b,h,a;
    cin>>a;
    cout<<"������� ��������� ��������: ";
    cin>>b;
    cout<<endl<<"������� ������ ��������: ";
    cin>>h;
    int S=((a+b)/2)*h;
    cout<<endl<<"������� ��������: "<<S<<endl;
}
