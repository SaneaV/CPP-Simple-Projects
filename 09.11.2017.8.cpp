//��� ������. ����������, �������� �� ������ ����������. (��������� ��������)

#include <iostream>

using namespace std;

main()
{
    setlocale(0,"Rus");
    char sim;
    cout<<"������� ������: ";
    cin>>sim;
    sim=='.' or sim==',' or sim=='?' or sim=='!'? cout<<"�� ����� ���� ����������!":cout<<"��� ������ �� ���� ����������!";
}
