//�������� ���������, ������� ������� ��� ������� ����� �� � �� b. ( � � b ������ �����).

#include <iostream>
#include <windows.h>

using namespace std;

int main()
{
    setlocale(LC_ALL,"RUS");

    int a,b;
    cout<<"������� �����: ";
    cin>>a;
    cout<<"������� ������ �����: ";
    cin>>b;

    if(b<a)
    {
        int c = a;
        a = b;
        b = a;
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
        while(a<=b)
        {
            if(a!=1 and a!=0 and a%2!=0 and a%3!=0 and a%5!=0 and a%7!=0 or a==2 or a==3 or a==5 or a==7)
                cout<<a<<endl;
            a++;
        }
        break;
    }
    case 2:
    {
        do
        {
            if(a!=1 and a!=0 and a%2!=0 and a%3!=0 and a%5!=0 and a%7!=0 or a==2 or a==3 or a==5 or a==7)
                cout<<a<<endl;
            a++;
        }
        while(a<=b);
        break;
    }
    case 3:
        {
            for(;a<=b;a++)
            {
                if(a!=1 and a!=0 and a%2!=0 and a%3!=0 and a%5!=0 and a%7!=0 or a==2 or a==3 or a==5 or a==7)
                cout<<a<<endl;
            }
            break;
        }
    default: cout<<"������ �������� ���"<<endl;
    }
}
