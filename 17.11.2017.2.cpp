//���� ��� ������������ �����.
//������� �� ����� �� �� ���, ������� ����������� ��������� (-6,7;11,2).
//���� ����� ����� ���, �� ������� ��������� ������ ����� ��һ

#include <iostream>
using namespace std;
main()
{
    setlocale(LC_ALL,"Russian");
    cout<<"��������� ������ �����: ";
    float p;
    cin>>p;
    cout<<"��������� ������ �����: ";
    float o;
    cin>>o;
    cout<<"��������� ������ �����: ";
    float i;
    cin>>i;

    if (p>-6.7 and p<11.2 or o>-6.7 and o<11.2 or i>-6.7 and i<11.2 )
    {
        if (p>-6.7 and p<11.2) cout<<p<<endl;
        if (o>-6.7 and o<11.2) cout<<o<<endl;
        if (i>-6.7 and i<11.2) cout<<i<<endl;

    }
    else cout<<"����� ����� ���!";
}


