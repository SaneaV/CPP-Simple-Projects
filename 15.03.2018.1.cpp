//�������. ����� ������� �������������� 4 �����.

#include <iostream>

using namespace std;

float Medium (float a, float b, float c, float z)
{
    return (a+b+c+z)/4.0;
}

int main()
{
    setlocale(LC_ALL,"Rus");

    cout<<"������� �����: ";
    float x1,x2,x3,x4;
    cin>>x1;
    cout<<"������� �����: ";
    cin>>x2;
    cout<<"������� �����: ";
    cin>>x3;
    cout<<"������� �����: ";
    cin>>x4;

    cout<<"������� ��������������: "<<Medium(x1,x2,x3,x4);
}
