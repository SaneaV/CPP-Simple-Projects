//���� ������ ������������ �����. ����� ������������ ������������� � ������������� �����.

#include <iostream>

using namespace std;

int main()
{
    setlocale(LC_ALL,"RUS");

    float a,b,c,d;

    cout<<"������� �����: ";
    cin>>a;
    cout<<"������� �����: ";
    cin>>b;
    cout<<"������� �����: ";
    cin>>c;
    cout<<"������� �����: ";
    cin>>d;

    float PozitiveSum=0;
    float NegativeSum=0;

    a>=0? PozitiveSum+=a:NegativeSum+=a;
    b>=0? PozitiveSum+=b:NegativeSum+=b;
    c>=0? PozitiveSum+=c:NegativeSum+=c;
    d>=0? PozitiveSum+=d:NegativeSum+=d;

    cout<<"����� ������������� �����: "<<PozitiveSum<<endl;
    cout<<"����� ������������� �����: "<<NegativeSum<<endl;


}
