//�������� ���������, ������� �� ������� �� � �� b, ������� ����� � ������������ �����, ������� 9.( � � b ������ �����)

#include <iostream>
#include <windows.h>

using namespace std;

int main()
{
    setlocale(LC_ALL,"RUS");

    int a,b;

    cout<<"������� �����: ";
    cin>>a;

    cout<<"������� �����: ";
    cin>>b;

    if (a>b)
    {
        int c = b;
        b = a;
        a = c;
    }

    system("cls");

    cout<<"�������� ������ ������� ��� ������ ������: "<<endl;
    cout<<"1. While"<<endl;
    cout<<"2. Do...While"<<endl;
    cout<<"3. For"<<endl;
    cout<<"��� �����: ";
    int Select;
    cin>>Select;

    int ProductOfNumbers=1;
    int Amount = 0;

    switch(Select)
    {
    case 1:
        {
            while (a<=b)
            {
                if (a%9==0)
                {
                    ProductOfNumbers*=a;
                    Amount+=a;
                }
                a++;
            }

            cout<<"������������ ����� ������� 9 �� ���� �������: "<<ProductOfNumbers<<endl;
            cout<<"����� ����� ������� 9 �� ���� �������: "<<Amount<<endl;
            break;
        }
    case 2:
        {
            do
            {
                if (a%9==0)
                {
                    ProductOfNumbers*=a;
                    Amount+=a;
                }
                a++;

            }while(a<=b);
            cout<<"������������ ����� ������� 9 �� ���� �������: "<<ProductOfNumbers<<endl;
            cout<<"����� ����� ������� 9 �� ���� �������: "<<Amount<<endl;
            break;
        }
    case 3:
        {
            for (;a<=b;a++)
            {
                if (a%9==0)
                {
                    ProductOfNumbers*=a;
                    Amount+=a;
                }

            }
            cout<<"������������ ����� ������� 9 �� ���� �������: "<<ProductOfNumbers<<endl;
            cout<<"����� ����� ������� 9 �� ���� �������: "<<Amount<<endl;
            break;
        }
    default: cout<<"������ �������� ���"<<endl;
    }
}
