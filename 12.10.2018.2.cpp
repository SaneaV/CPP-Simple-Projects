//���� ��� ����� a, �
//�������� �� ��������
//1. ��������� �������������� ���������
//2. �� �������� ����� ����������

#include <iostream>
#include <windows.h>

using namespace std;

int main()
{
    setlocale(LC_ALL,"RUS");

    int a,b;
    int Selection;

    cout<<"������� \"a\": ";
    cin>>a;
    cout<<"������� \"b\": ";
    cin>>b;

    system("cls");

    cout<<"�������� ������ ������� ������ ������: "<<endl;
    cout<<"1. �������� ����� ����������."<<endl;
    cout<<"2. ��� �������� ����� ����������."<<endl;
    cin>>Selection;
    system("cls");

    switch(Selection)
    {
    case 1:
    {
        cout<<"������ ������ �����."<<endl<<endl;

        int *c=new int;

        *c=a;
        a=b;
        b=*c;

        delete(c);

        cout<<"a = "<<a<<endl;
        cout<<"b = "<<b<<endl;
        break;
    }
    case 2:
    {
        cout<<"������ ������ �����."<<endl<<endl;

        a=a+b;
        b=a-b;
        a-=b;

        cout<<"a = "<<a<<endl;
        cout<<"b = "<<b<<endl;
        break;
    }
    default:
    {
        cout<<"������ �������� ���"<<endl;
    }
    }
}
