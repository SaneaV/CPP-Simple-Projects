//�������� ��������� � ������ ��������������. ����� ��� ��������.

#include <iostream>
#include <cmath>

using namespace std;

main()
{
    setlocale(LC_ALL,"Rus");

    cout<<"������� ��������� ��������������: ";
    int diagonali, shirina,P,dlina=0;
    cin>>diagonali;
    cout<<"������� ������ ��������������: ";
    cin>>shirina;

    dlina = sqrt ((diagonali*diagonali)-(shirina*shirina));

    P=2*(dlina+shirina);

    cout<<"�������� ��������������: "<<P;
}
