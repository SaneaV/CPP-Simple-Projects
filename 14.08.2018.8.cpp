//������� ������� �������������� ���� � ���������� ������ ��������� ������������ �����.

#include <iostream>
#include <windows.h>

using namespace std;

int main()
{
    setlocale(LC_ALL,"RUS");

    int n;

    cout<<"������� �����: ";
    cin>>n;

    int r = n;

    system("cls");

    int Select;
    cout<<"�������� ���� ��� ������� ������ ������: "<<endl;
    cout<<"1.While"<<endl;
    cout<<"2.Do...While"<<endl;
    cout<<"3.For"<<endl;
    cout<<"��� �����: ";
    cin>>Select;

    system("cls");

    int Sum = 0;
    int k = 0;

    switch(Select)
    {
    case 1:
        {
            while(n!=0)
            {
                Sum += n % 10;
                n /= 10;
                k++;
            }
            cout<<"������� �������������� ���� � ����� "<<r<<" : "<<Sum*1.0/k*1.0<<endl;
            break;
        }
    case 2:
        {
            do
            {
                Sum += n % 10;
                n /= 10;
                k++;

            }while(n!=0);
            cout<<"������� �������������� ���� � ����� "<<r<<" : "<<Sum*1.0/k*1.0<<endl;
            break;
        }
    case 3:
        {
            for(;n!=0;k++)
            {
                Sum += n % 10;
                n /= 10;
            }
            cout<<"������� �������������� ���� � ����� "<<r<<" : "<<Sum*1.0/k*1.0<<endl;
            break;
        }
    default:cout<<"������ �������� ���"<<endl;
    }
}
