//���� ������ ����� �����. ����� ����� ������ � �������� �����.

#include <iostream>

using namespace std;

int main()
{
    setlocale(LC_ALL,"RUS");

    int a,b,c,d;

    cout<<"������� �����: ";
    cin>>a;
    cout<<"������� �����: ";
    cin>>b;
    cout<<"������� �����: ";
    cin>>c;
    cout<<"������� �����: ";
    cin>>d;

    int Del2=0;
    int NoDel2=0;

    a%2==0? Del2+=a:NoDel2+=a;
    b%2==0? Del2+=b:NoDel2+=b;
    c%2==0? Del2+=c:NoDel2+=c;
    d%2==0? Del2+=d:NoDel2+=d;

    cout<<"����� ������ �����: "<<Del2<<endl;
    cout<<"����� �������� �����: "<<NoDel2<<endl;
}
