//�������� ��������� � �������������� ������� ��� ���������� ��������� � ������� ������������ �� ������ ��� ������

#include <iostream>

using namespace std;

void Preamougolnik (int x, int y, int *perimetr, int *ploshadi)
{
    *perimetr=2*x+2*y;
    *ploshadi=x*y;
}

int main()
{
    setlocale(LC_ALL,"RUS");

    int a,b;
    cout<<"������� ������� �: ";
    cin>>a;
    cout<<"������� ������� b: ";
    cin>>b;

    int P,S;

    Preamougolnik(a,b,&P,&S);

    cout<<"�������� ������������: "<<P<<endl<<"������� ������������: "<<S;

}
