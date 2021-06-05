//��������� ��� ������ ������ � ������ AEROFLOT, ���������� ��������� ����:
//� NAZN � �������� ������ ���������� �����;
//� NUMR � ����� �����;
//� TIP � ��� ��������.
//�������� ���������, ����������� ��������� ��������:
//� ���� � ���������� ������ � ������ AIRPORT, ��������� �� 7 ������� ���� AEROFLOT;
//� ����� �� ����� �������� ���������� � ������� ������, ������������� ���������, ����� �������� ������ � ����������;
//���� ����� ������ ���, ������� ��������������� ���������.
//� ����� �� ����� �������� ������ � ����� ���������, ���������� � ����� ����������, �������� �������� ������� � ����������;
//���� ����� ������ ���, ������� ��������������� ���������.

#include <iostream>
#include <windows.h>
#include <stdio.h>
#include <cstring>

using namespace std;

int main()
{
    setlocale(LC_ALL,"RUS");

    struct AEROFLOT
    {
        char NAZN[30];
        int NUMR;
        int TIP;
    } AIRPORT[7];


    for(int i=0; i<8; i++)
    {
        cout<<"������� �������� ������ ����������: ";
        cin>>(AIRPORT[i].NAZN);

        cout<<"������� ����� �����: ";
        cin>>AIRPORT[i].NUMR;

        cout<<"������� ��� �������(1 - ��������; 2 - ������������): ";
        do
        {
            cin>>AIRPORT[i].TIP;
        }
        while(AIRPORT[i].TIP>2 or AIRPORT[i].TIP<1);

            system("cls");
    }

    int Select;
    int RepeatSelect;
    bool Menu = true;

    while(Menu)
    {
        cout<<"1.������ � ����� ��������."<<endl;
        cout<<"2.������ � ��������, �������������� �..."<<endl;
        cout<<"��� �����: ";
        do
        {
            cin>>Select;
        }
        while(Select<1 or Select>2);
        system("cls");

        switch(Select)
        {
        case 1:
        {
            int Tip;
            int k=0;
            cout<<"������� ��� �������(1 - ��������; 2 - ������������): ";
            do
            {
                cin>>Tip;
            }
            while(Tip>2 or Tip<1);

            for(int i=0; i<8; i++)
            {
                if(AIRPORT[i].TIP==Tip)
                {
                    cout<<"������ �"<<AIRPORT[i].NUMR<<" ���� - ";
                    if (Tip==1)
                        cout<<"��������";
                    else
                        cout<<"������������";
                    cout<<", ������������ �: "<<AIRPORT[i].NAZN<<endl;
                    k++;
                }


            }
            if (k==0)
                cout<<"� ���������, ������ ����� �������� �� ������ ������ ���."<<endl;

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
            char Nazn[30];
            int k = 0;

            cout<<"������� �������� ������ ����������: ";
            cin>>Nazn;

            for(int i=0; i<8; i++)
            {
                if(strcmp(Nazn,AIRPORT[i].NAZN)==0)
                {
                    k++;
                    cout<<"������ �"<<AIRPORT[i].NUMR<<" ���� - ";
                    if (AIRPORT[i].TIP==1)
                        cout<<"��������";
                    else
                        cout<<"������������";
                    cout<<", ������������ �: "<<AIRPORT[i].NAZN<<endl;
                    k++;
                }
            }
            if (k==0)
                cout<<"� ���������, ������ � "<<Nazn<<" ���."<<endl;

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
