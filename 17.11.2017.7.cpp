//���� ��� �����. ���� ��� ����� �������������, �� ����� �� �����,
//����� ������� ��������� �������� �� ������������.

#include <iostream>

using namespace std;

main()
{
    setlocale (0,"Russian");
    cout<<"������ x: ";
    int x;
    cin>>x;
    cout<<"������� y: ";
    int y;
    cin>>y;
    if (x>0 and y>0) cout<<x+y;
    else cout<<"������� �� �����������";

}


