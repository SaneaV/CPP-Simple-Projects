//���� ��� ����� �����. ���������� ������� �� ��� �������������.

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

    int k=0;

    a<0? k++:0;
    b<0? k++:0;
    c<0? k++:0;
    d<0? k++:0;

    cout<<"���������� ������������� �����: "<<k;

}

