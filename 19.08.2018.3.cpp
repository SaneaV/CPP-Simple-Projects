//��������� ��� ������ ������ � ������ PRICE, ���������� ��������� ����:
//� TOVAR � �������� ������;
//� KOL � ���������� ������;
//� TSENA ����� ������;
//� STOIM � ��������� ������.
//�������� ���������, ����������� ��������� ��������:
//� ���� � ���������� ������ � ������ SPISOK, ��������� �� 8 ������� ���� PRICE;
//� ����� �� ����� ����������� � ������, �������� �������� ������� � ����������; ���� ����� ������� ���, ������� ��������������� ���������.
//� ����� �� ����� ���������� �� ����� ��������� ������ � ��������;
//� ����� �� ����� ���������� � ����� ������� ������ � ��������.


#include <iostream>
#include <windows.h>
#include <stdio.h>
#include <cstring>

using namespace std;

int main()
{
    setlocale(LC_ALL,"RUS");

    struct PRICE
    {
        char TOVAR[30];
        int KOL;
        int TSENA;
        int STOIM;
    } SPISOK[10];



    for(int i=0; i<8 ; i++)
    {
        cout<<"������� �������� ������: ";
        cin>>SPISOK[i].TOVAR;

        cout<<"������� ���������� ������: ";
        cin>>SPISOK[i].KOL;

        cout<<"������� ���� ������: ";
        cin>>SPISOK[i].TSENA;

        cout<<"������� ��������� ������: ";
        cin>>SPISOK[i].STOIM;


        system("cls");
    }

    int Select;
    int RepeatSelect;
    bool Menu = true;

    while(Menu)
    {
        cout<<"1.������, ���������� � ������."<<endl;
        cout<<"2.������ ����� ��������� ������� � ��������."<<endl;
        cout<<"3.���������� � ����� ������� ������."<<endl;
        cout<<"��� �����: ";
        do
        {
            cin>>Select;
        }
        while(Select<1 or Select>3);
        system("cls");

        switch(Select)
        {
        case 1:
        {
            char Tovar[30];
            int k = 0;

            cout<<"������� �������� ������: ";
            cin>>Tovar;

            for(int i=0; i<8; i++)
            {
                if(strcmp(Tovar,SPISOK[i].TOVAR)==0)
                {
                    cout<<"� ����� �������� ���� "<<Tovar<<" ��������� ���� - "<<SPISOK[i].TSENA<<" ��������� ������ - "<<SPISOK[i].STOIM<<" � ����������: "<<SPISOK[i].KOL<<endl;
                    k++;
                }
            }
            if (k==0)
                cout<<"� ���������, � ����� �������� ��� ������ ������."<<endl;

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
            int Sum = 0;

            for(int i=0; i<8; i++)
            {
                Sum += SPISOK[i].STOIM;
            }

            cout<<"����� ��������� ���� ������� � ��������: "<<Sum<<endl;


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

        case 3:
        {
            int max = 0;
            int pmax = 0;

            for(int i=0; i<8; i++)
            {
                if(max<SPISOK[i].STOIM)
                {
                    pmax = i;
                    max=SPISOK[i].STOIM;
                }
            }

            cout<<"����� ������� �����: "<<endl;
            cout<<SPISOK[pmax].TOVAR<<" ��������� ���� - "<<SPISOK[pmax].TSENA<<" ��������� ������ - "<<SPISOK[pmax].STOIM<<" � ����������: "<<SPISOK[pmax].KOL<<endl;


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
