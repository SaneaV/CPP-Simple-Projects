//����� ������� �������������� ������������ �� ��������� ��������: ���������� � ������.

#include <iostream>
#include <cmath>

using namespace std;

main()
{
    setlocale(LC_ALL,"Russian");

    cout<<"������� ����������: ";
    int g,k;
    cin>>g;
    cout<<endl<<"������� �����: ";
    cin>>k;
    int k1=sqrt(pow(g,2)*pow(k,2));
    float S=0.5*k*k1;
    cout<<"������� �������������� ������������: "<<S;
}

