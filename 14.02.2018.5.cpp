//���� ����������� �����. ����������, ������ �� � ���� ����� 9.

#include <iostream>

using namespace std;

main()
{
    setlocale(LC_ALL,"Rus");

    cout<<"������� ���������� �����: ";
    int n;
    cin>>n;

    int n1,n2,n3;

    n1=n/100;
    n2=n/10%10;
    n3=n%10;

    cout<<"� ����� ����� ���� ����� 9: "<<boolalpha<<(n1==9 or n2==9 or n3==9);
}
