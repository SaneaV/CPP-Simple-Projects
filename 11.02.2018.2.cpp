//��������� � ������ � ����, ������.

#include <iostream>
#include <cmath>

using namespace std;

main()
{
    setlocale (LC_ALL,"Rus");

    cout<<"������� ���������� ������: ";
    int T;
    cin>>T;

    int minutes=0, hours=0;


    while (T>=60)
    {
        minutes+=1;
        T-=60;
    }

    while (minutes>= 60)
    {
        hours+=1;
        minutes-=60;
    }

    cout<<"�� �����: "<<T<<" ������, "<<minutes<<" �����, "<<hours<<" �����.";

}
