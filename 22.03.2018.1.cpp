//������� ���������, ��� ���������� ��������� � ������� �������������� �� ��� ��������.

#include <iostream>

using namespace std;

void DlinaShirina (int x, int y, int &s, int &p)
{
    p=2*(x+y);
    s=x*y;
}

int main()
{
    setlocale(LC_ALL,"RUS");
    cout<<"������� ������� a: ";
    int a,b;
    cin>>a;
    cout<<"������� ������� b: ";
    cin>>b;
    int ploshadi, perimetr;

    DlinaShirina(a,b,perimetr,ploshadi);
    cout<<"��������: "<<perimetr<<endl<<"�������: "<<ploshadi;



}
