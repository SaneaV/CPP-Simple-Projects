//���������� ����� ���� ������ ����� ���������� �, � ������ � ������ r. �������� ���������,
//������� ��������� � ���������� ������ �� n ����������� (n<50) � ������� �� �����:
//� ���������� ������ � ������ ����������, ������� ��������� ���� ������������ �������;
//���������� �����������, �������� � ���� � ������������ ��������, � ���������� ��������������� �������;"

#include <iostream>
#include <windows.h>
#include <cmath>

using namespace std;

struct OKRUJNOSTI
{
    int x;
    int y;
    int r;
};

int main()
{
    setlocale(LC_ALL,"RUS");

    int n;

    do
    {
        cout<<"������� ���������� �����������: ";
        cin>>n;
    }
    while(n>50);

    struct OKRUJNOSTI OKR[n];

    int rmax = 0;

    for(int i=0; i<n; i++)
    {
        cout<<"������� ���������� \"x\": ";
        cin>>OKR[i].x;

        cout<<"������� ���������� \"y\": ";
        cin>>OKR[i].y;

        cout<<"������� ������ ����������: ";
        cin>>OKR[i].r;

        if(rmax<OKR[i].r) rmax = OKR[i].r;

        system("cls");
    }

    int Select;
    int RepeatSelect;
    bool Menu = true;

    while(Menu)
    {
        cout<<"1. ���������� � ���������� � ����� ������� ��������."<<endl;
        cout<<"2. ���������� ����������� ������� ������ � ����� ������� ����."<<endl;
        cout<<"��� �����: ";
        do
        {
            cin>>Select;
        }
        while(Select>2 or Select<1);

        system("cls");

        switch(Select)
        {
        case 1:
        {
            int max=0;
            int pmax;
            float S = 0;

            for(int i=0; i<n; i++)
            {
                S = 3.14 * pow(OKR[i].r,2);

                if(S>max)
                {
                    max = S;
                    pmax=i;
                }
            }

            cout<<"���������� ������ ����������: ("<<OKR[pmax].x<<":"<<OKR[pmax].y<<"), ������ ���������� - "<<OKR[pmax].r<<endl;

            cout<<endl<<endl;
            cout<<"1. ��������� � ����."<<endl;
            cout<<"2. ����� �� ���������."<<endl;
            do
            {
                cin>>RepeatSelect;

            }
            while(RepeatSelect<1 or RepeatSelect>2);

            if (RepeatSelect==1)
                system("cls");
            if (RepeatSelect==2)
            {
                system("cls");
                Menu = false;
            }

            break;
        }
        case 2:
            {
                int k = 0;

                for(int i=0;i<n;i++)
                {
                    if(rmax>OKR[i].r) k++;
                }

                cout<<"���������� �����������, ������� ������ � ����� ������� �� ������� ����������: "<<k<<endl;

                cout<<endl<<endl;
            cout<<"1. ��������� � ����."<<endl;
            cout<<"2. ����� �� ���������."<<endl;
            do
            {
                cin>>RepeatSelect;

            }
            while(RepeatSelect<1 or RepeatSelect>2);

            if (RepeatSelect==1)
                system("cls");
            if (RepeatSelect==2)
            {
                system("cls");
                Menu = false;
            }

            break;
            }
        }
    }

}
