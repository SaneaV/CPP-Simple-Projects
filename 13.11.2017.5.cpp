//�������� ����������� ����� �� ����, ���� ��� �� ������ 9 ��� ������ 100.
//���������� ���������� ������� 5.

#include <iostream>
#include <cmath>

using namespace std;

main ()
{
    setlocale (LC_ALL,"Rus");
    int S=0;

    for (int i=10, x=10;i==x;)
    {
    cout<<"������� �����: ";
    int n;
    cin>>n;
    if (n>9 and n<=99 and n%5==0) S++;
    if (n<=9 or n>100) x++;
    }
    cout<<"���������� �����, ������� 5: "<<S;
}
