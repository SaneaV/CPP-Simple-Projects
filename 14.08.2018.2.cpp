//�������� ���������, ������� ������� ��� �������� ����� �� � �� b. ( � � b ������ �����).

#include <iostream>
#include <windows.h>

using namespace std;

int main()
{
    setlocale(LC_ALL,"RUS");

    int a,b;

    cout<<"������� ������ �����: ";
    cin>>a;

    cout<<"������� ������ �����: ";
    cin>>b;

    if(b<a)
    {
        int c = a;
        a = b;
        b = c;
    }

    system("cls");

    int Select;
    cout<<"�������� ���� ��� ������� ������ ������: "<<endl;
    cout<<"1.While"<<endl;
    cout<<"2.Do...While"<<endl;
    cout<<"3.For"<<endl;
    cout<<"��� �����: ";
    cin>>Select;

    int i = a;

    system("cls");

    switch(Select)
    {
    case 1:
        {
            while(i<=b)
            {
                if (i%a==0) cout<<"�������� ����� "<<a<<": "<<i<<endl;
                if (i%b==0) cout<<"�������� ����� "<<b<<": "<<i<<endl;
                i++;

            }
            break;
        }
    case 2:
        {
            do
            {
                if (i%a==0) cout<<"�������� ����� "<<a<<": "<<i<<endl;
                if (i%b==0) cout<<"�������� ����� "<<b<<": "<<i<<endl;
                i++;

            }while(i<=b);
            break;
        }
    case 3:
        {
            for(;i<=b;i++)
            {
                if (i%a==0) cout<<"�������� ����� "<<a<<": "<<i<<endl;
                if (i%b==0) cout<<"�������� ����� "<<b<<": "<<i<<endl;
            }
            break;
        }
    default:cout<<"������ �������� ���"<<endl;
    }
}
