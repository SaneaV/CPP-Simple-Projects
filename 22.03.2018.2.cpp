//������� ��������� MinMax(X,Y), ������������ � ����������� X ����������� �������� �� �������� X � Y, � � Y - ������������ �������� �� ���� ����������
//��������� ������ ������ ���� ���������, ����� ����������� � ������������ �� ������ ����� A,B,C,D

#include <iostream>

using namespace std;

float MinMax (float &x, float &y)
{
    if (x>y)
    {
        float c=x;
        x=y;
        y=c;
    }
}

int main()
{
    setlocale(LC_ALL,"RUS");
    float A,B,C,D;
    cout<<"������� A: ";
    cin>>A;
    cout<<"������� B: ";
    cin>>B;
    cout<<"������� C: ";
    cin>>C;
    cout<<"������� D: ";
    cin>>D;

    MinMax(A,B);
    MinMax(C,D);
    MinMax(A,C);
    MinMax(B,D);
    MinMax(B,C);

    cout<<"����������� �����: "<<A<<endl;
    cout<<"������ �����: "<<B<<endl;
    cout<<"������ �����: "<<C<<endl;
    cout<<"������������ �����: "<<D<<endl;
}
