//�������� ����������� ���������, ������� �� ���� ������ ����������� ������ � � �, �� ������������� 10000,
//������������ ���������� ����������� �����,
//������� ���� �� ������� [�,�] (������� ����� �������).

#include <iostream>
#include <windows.h>
#include <cmath>

using namespace std;

int main()
{
    setlocale(LC_ALL,"RUS");

    int x,y;
    int k=0;

    do
    {
    cout<<"������� ��������� �����: ";
    cin>>x;
    cout<<"������� �������� �����: ";
    cin>>y;
    }while(abs(x)>30000 or abs(y)>30000);

    if(x>y)
    {
        int c = y;
        x = y;
        y = c;
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
            while(x<=y)
            {
                if (x%5==0) k++;
                x++;
            }
            cout<<"���������� �����, ������� ����: "<<k;
            break;
        }
    case 2:
        {
            do
            {
                if(x%5==0) k++;
                x++;
            }while(x<=y);
            cout<<"���������� �����, ������� ����: "<<k;
            break;
        }
    case 3:
        {
            for(;x<=y;x++)
            {
                if(x%5==0) k++;
            }
            cout<<"���������� �����, ������� ����: "<<k;
            break;
        }
    default: cout<<"������ �������� ���"<<endl;
    }

}
