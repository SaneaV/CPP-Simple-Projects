//���������� �������� �� ��������� � ���������� ��� ����������.

#include <iostream>

using namespace std;

main()
{
    setlocale(LC_ALL,"RUS");

    cout<<"������� ���: ";
    int year;
    cin>>year;

    cout<<"��� ����������: "<<boolalpha<<((year % 4 == 0) && ((year % 100 != 0) || (year % 400 == 0)));
}
