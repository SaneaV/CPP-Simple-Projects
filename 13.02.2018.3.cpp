//� ���������� �������� ����� (���� � ������). ���������� ������� ����� ������ � ������ �����.

#include <iostream>

using namespace std;

main()
{
    setlocale(LC_ALL,"Rus");

    int minutes,hours;

    cout<<"������� ���������� �����: ";
    cin>>hours;

    cout<<"������� ���������� �����: ";
    cin>>minutes;

    int days=0;

    while (minutes>=60)
    {
        hours++;
        minutes-=60;
    }

    while (hours>=24)
    {
        days++;
        hours-=24;
    }

    if (hours<=23)
    {
        minutes+=hours*60;
    }

    cout<<"� ������ ����� ������: "<<minutes<<" �����";
}
