//�������� ����� ���� ����������� �����.

#include <iostream>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    int n1, n2, n3, n, y;
    cout<< "������� �����: ";
    cin>> n;

    n1= n/ 100;
    n2= n/10%10;
    n3= n%10;
    y= n1+n2+n3;

    cout<< "����� ����� �����: "<<y;
}

