//���������� ������ ������ ��� ���� ������ �� 0,8 ���������
//���������� ���, ����� ������� ����� 5 ��
//���������� ���, ����� ����� ����� ������ ����� ����� 90 ��

#include <iostream>
#include <cmath>

using namespace std;

main ()
{
    setlocale (LC_ALL,"Rus");
    float ton=20.0, S=0;
    int god=1990;

    for (;S<=90.0;)
    {
        S+=ton;
        cout<<"� "<<god<<" �������: "<< ton<<"\n";
        god+=2;
        ton*=0.8;
        if (ton<6.0 and ton>5.0) cout<<"�"<<god<<" ������� ����� 5 ��";
        if (S<=90.0 and S>=89.0) cout<<"�"<<god<<" ������� � ����� 90 ��";
    }

}
