//�������� ������� � ����� ��������������. ����� ��� ������.

#include <iostream>

using namespace std;

main()
{
    setlocale(LC_ALL,"Russian");

    cout<<"������� ������� ��������������: ";
    int S,a,b=0;;
    cin>>S;
    cout<<endl<<"������� ����� ��������������: ";
    cin>>a;
    b=S/a;
    cout<<endl<<"������ ��������������: "<<b<<endl;
}
