//�������� ���������, ������� �� ������� �� � �� b, ������� �� ����� ��� �������� �����, �������������� ������ 7 .
//( � � b ������ �����)

#include <iostream>
#include <windows.h>

using namespace std;

int main()
{
    setlocale(LC_ALL,"RUS");

    int a,b;

    cout<<"������� ����� \"�\": ";
    cin>>a;
    cout<<"������� ����� \"b\": ";
    cin>>b;

    if (a>b)
    {
        int c = a;
        a = b;
        c = a;
    }

    system("cls");

    int Select;

    cout<<"�������� ���� ��� ������� ������ ������: "<<endl;
    cout<<"1. While"<<endl;
    cout<<"2. Do..While"<<endl;
    cout<<"3. For"<<endl;
    cout<<"��� �����: ";
    cin>>Select;

    system("cls");

    switch(Select)
    {
    case 1:
    {
        while (a<=b)
        {
            //��������� �� ���������� ��� ������. 7 ������ ����� ��������.
            if (a%10==7)
                cout<<a<<endl;
            a++;
        }
        break;
    }
    case 2:
    {
        do
        {
            if (a%10==7)
                cout<<a<<endl;
            a++;
        }
        while(a<=b);
        break;
    }
    case 3:
    {
        for(; a<=b; a++)
        {
            if(a%10==7)
                cout<<a<<endl;
        }
        break;
    }
    default:
        cout<<"������ �������� �� ����������."<<endl;
    }

}
