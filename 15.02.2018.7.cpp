//���� ��� ����� ����� a,b,c. ����� ��, ��� ������� a<b<c.

#include <iostream>

using namespace std;

main()
{
    setlocale (LC_ALL,"RUS");

    cout<<"������� ����� a: ";
    int a,b,c;
    cin>>a;
    cout<<"������� ����� b: ";
    cin>>b;
    cout<<"������� ����� c: ";
    cin>>c;

    cout<<"����� ��, ��� ������� a<b<c: "<<boolalpha<<(a<b and b<c);

}
