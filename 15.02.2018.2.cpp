//���� �������������� �����. ������ �� ������������ ��� ���� ����� �?

#include <iostream>

using namespace std;

main()
{
    setlocale(LC_ALL,"RUS");

    cout<<"������� ����� ����������: ";
    int n;
    cin>>n;

    cout<<"������� ����� \"�\": ";
    int a;
    cin>>a;

    int n1,n2,n3;

    n1=n/100;
    n2=n/10%10;
    n3=n%10;

    cout<<"������������ ���� ������ ����������� ����� ������ \"�\": "<<boolalpha<<((n1*n2*n3)%a==0);
}
