//�������� ����������� ��������, ������� �� ���� ������ ����������� ������ � � �, �� ������������� 10000,
//������� �� ����� � ������������ ���������� ����������� �����, ������� ������, �� ������� [�,�] (������� ����� �������).


#include <iostream>
#include <windows.h>

using namespace std;

int main()
{
    setlocale(LC_ALL,"RUS");

    int x,y;

    while(x>10000 or y>10000)
    {
        cout<<"������� ������ �������: ";
        cin>>x;
        cout<<"������� ����� �������: ";
        cin>>y;
    }

    if (x>y)
    {
        int c = x;
        x = y;
        y = x;
    }

    system("cls");

    int Select;
    cout<<"�������� ���� ��� ������� ������ ������: "<<endl;
    cout<<"1.While"<<endl;
    cout<<"2.Do...While"<<endl;
    cout<<"3.For"<<endl;
    cout<<"��� �����: ";
    cin>>Select;

    system("cls");

    int k = 0;

    switch(Select)
    {
    case 1:
    {
        while(x<=y)
        {
            if (x%8==0)
                k++;
            x++;
        }
        cout<<"���������� �����, ������� ������: "<<k<<endl;
        break;
    }
    case 2:
    {
        do
        {
            if (x%8==0)
                k++;
            x++;

        }
        while(x<=y);
        cout<<"���������� �����, ������� ������: "<<k<<endl;
        break;
    }
    case 3:
    {
        for(; x<=y; x++)
        {
            if(x%8==0)
                k++;
        }
        cout<<"���������� �����, ������� ������: "<<k<<endl;
        break;
    }
    default:
        cout<<"������ �������� ���"<<endl;
    }
}
