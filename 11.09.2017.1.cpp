//�������������� �������� ��� ����� �������

#include <iostream>

using namespace std;

int main()
{
    int x,y,c,z,r,b;
    setlocale(LC_ALL,"Russian");

    cout<< "������� ����� �����: ";
    cin>> x;
    cout<< "�� �����: "<< x<< endl;

    cout<< "������� ����� �����: ";
    cin>>y;
    cout<<"�� �����: "<< y<< endl;

    c=x+y;
    cout<< "����� ���� �����: "<< c<< endl;

    z=x*x;
    cout<<"������ ����� �� ������ �������: "<< z<< endl;

    r=y*y;
    cout<<"������ ����� �� ������ �������: "<< r <<endl;

    b=y-x;
    cout<<"�������� ����� �����: "<< b<< endl;

    return 0;
}
