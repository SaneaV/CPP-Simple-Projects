//����� ������������ � ����������� �������� �� ���� ��������� ������������ �����.

#include <iostream>

using namespace std;

int main()
{
    setlocale(LC_ALL,"RUS");

    float a,b,c;
    float min, max;

    cout<<"������� �����: ";
    cin>>a;
    cout<<"������� �����: ";
    cin>>b;
    cout<<"������� �����: ";
    cin>>c;

    a>b and a>c? max=a:0;
    b>c and b>a? max=b:0;
    c>a and c>b? max=c:0;
    a<b and a<c? min=a:0;
    b<c and b<a? min=b:0;
    c<a and c<b? min=c:0;

    cout<<"������������ �����: "<<max<<endl;
    cout<<"����������� �����: "<<min<<endl;

}
