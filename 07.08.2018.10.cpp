//�������� ����������� ��������, ������� �� ���� ������ ����������� ������ � � �,
//�� ������������� 10000, ������������ ���������� �������� ����������� ����� �� ������� [�,�] (������� ����� �������).

#include <iostream>
#include <windows.h>

using namespace std;

int main()
{
    setlocale(LC_ALL,"RUS");

    int Select;
    int x,y;

    do
    {
        cout<<"������� �������� \"x\": ";
        cin>>x;
    }
    while (x>=10000);
    do
    {
        cout<<"������� �������� \"y\": ";
        cin>>y;
    }
    while(y>=10000);

    system("cls");

    cout<<"�������� ���� ��� ������� ���� ������:"<<endl;
    cout<<"1.While"<<endl;
    cout<<"2.Do..While"<<endl;
    cout<<"3.For"<<endl;
    cout<<"�� ���������: ";
    cin>>Select;

    int c=0;
    int k=0;

    if (y>x)
    {
        c = y;
        y = x;
        x = c;

    }

    switch (Select)
    {
    case 1:
    {
        while (y<=x)
        {
            if (y%2!=0)
                k++;
            y++;
        }
        break;
    }
    case 2:
    {
        do
        {
            if(y%2!=0)
                k++;
            y++;
        }
        while(y<=x);
        break;
    }
    case 3:
    {
        for(; y<=x;)
        {
            if(y%2!=0)
                k++;
            y++;
        }
        break;
    }
    default: cout<<"������ �������� ���"<<endl;
    }

    cout<<endl<<"���������� �������� �����: "<<k<<endl;
}
