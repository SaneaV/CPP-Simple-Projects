//��� ������. ����������, �������� �� �� �������������� ���������.

#include<iostream>

using namespace std;

main()
{
    setlocale(LC_ALL,"RUS");

    cout<<"������� ������: ";
    char ch;
    cin>>ch;

    cout<<"��� ������ �������� �������������� ���������: "<<boolalpha<<(ch=='-' or ch=='+' or ch=='*' or ch=='/');
}
