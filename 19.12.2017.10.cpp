//����� ���������� �������� ������ �� ����� � �� ��������� V ��/�?

#include <iostream>
#include <cmath>

using namespace std;

main()
{
    setlocale(LC_ALL,"Russian");

    cout<<"������� �������� ����������(��/�): ";
    int V;
    cin>>V;
    cout<<endl<<"������� �����, �� ������� ���������� ������� ����������(����): ";
    float T;
    cin>>T;
    float S=V*1.0*T;
    cout<<endl<<"����������, ������� ������� ����������: "<<S;
}


