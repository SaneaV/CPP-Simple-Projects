//�������� ��� �����. �������� ���� �� �������, ���� ��� �� ����� �����. ������� �������� ��������.

#include <iostream>

using namespace std;

main()
{
    setlocale (0,"Rus");
    cout<<"������� x: ";
    int x,y;
    cin>>x;
    cout<<"������� y: ";
    cin>>y;
    for (;x!=y;)
    {
        if (x>y) x-=y;
        if (x<y) y-=x;
    } cout<<x;
}
