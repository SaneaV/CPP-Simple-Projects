//���� ��� ����� ����� a,b,c. ���������, ����������� �� ������� a>b>c.

#include <iostream>

using namespace std;

int main()
{
    setlocale(LC_ALL,"RUS");

    int a,b,c;

    cout<<"������� �����: ";
    cin>>a;
    cout<<"������� �����: ";
    cin>>b;
    cout<<"������� �����: ";
    cin>>c;

    a>b and b>c? cout<<"������� �����������"<<endl:cout<<"������� �� �����������"<<endl;
}
