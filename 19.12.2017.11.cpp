//����� ������ ��������������� ������������ �� ��������� �,�,�, ���� �=�.

#include <iostream>
#include <cmath>

using namespace std;

main()
{
    setlocale(LC_ALL,"Russian");

    cout<<"������� ������� b: ";
    int b,c;
    cin>>b;
    int a=b;
    cout<<endl<<"������� ������� c: ";
    cin>>c;
    float h=sqrt((a*a)-(c*c)/4);
    cout<<endl<<"������ ������������: "<<h;
}
