//���������, �������� �� �������� ������ ������� ������: �) ����������� �) �������� �����

#include <iostream>
#include <windows.h>

using namespace std;

main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    cout<<"������� ������: ";
    char ch;
    cin>>ch;


    bool y;
    y= ch=='o' or ch=='e' or ch=='y' or ch=='u' or ch=='i' or ch=='a';
    cout<<"��� ������ �������� ������� ������ ����������� ��������: "<< boolalpha<< (y);

    bool t;
    t= ch=='�' or ch=='�' or ch=='�' or ch=='�' or ch=='�' or ch=='�' or ch=='�' or ch=='�' or ch=='�' or ch=='�';
    cout<<"\n��� ������ �������� ������� ������ �������� ��������: "<<boolalpha<< (t);
}
