//���� ��� �����. ���� ��� ����� �������������, �� ����� �� �����, ����� ������� ��������� �������� �� ������������.

#include <iostream>

using namespace std;

int main()
{
    setlocale(LC_ALL,"RUS");

    int A,B;

    cout<<"������� �����: ";
    cin>>A;
    cout<<"������� �����: ";
    cin>>B;

    A>=0 and B>=0? cout<<"����� �����: "<<A+B<<endl:cout<<"������� �� �����������"<<endl;
}
