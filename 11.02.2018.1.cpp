//�������� ������ � ����� ��������������. ������� ��������� �� �������� � ����� �������� �� ������� ��������������

#include <iostream>
#include <cmath>

using namespace std;

main()
{
    setlocale (LC_ALL,"Rus");

    cout<<"������� ����� ��������������: ";
    int dlina,shirina,kvadrat;
    cin>>dlina;
    cout<<"������� ������ ��������������: ";
    cin>>shirina;
    cout<<"������� ������� ��������: ";
    cin>>kvadrat;

    int otvet;

    otvet = (dlina*shirina)/kvadrat*kvadrat;

    cout<<"� ���� �������������� ���������� "<<otvet<<" ���������.";

}
