//��������� ��� ������ ������ � ������ TRAIN, ���������� ��������� ����:
//� NAZN � �������� ������ ����������;
//� NUMR � ����� ������;
//� TIME � ����� �����������.
//�������� ���������, ����������� ��������� ��������:
//� ���� � ���������� ������ � ������ RASP, ��������� �� 8 ������� ���� TRAIN;
//� ����� �� ����� ����������� � �������, �������������� ����� ���������� � ���������� �������;
//���� ����� ������� ���, ������� ��������������� ���������.
//� ����� �� ����� ���������� � �������, �������������� � �����, �������� �������� ������� � ����������;
//���� ����� ������� ���, ������� ��������������� ���������.


#include <iostream>
#include <windows.h>
#include <stdio.h>
#include <cstring>

using namespace std;

int main()
{
    setlocale(LC_ALL,"RUS");

    struct TRAIN
    {
        char NAZN[30];
        int NUMR;
        int Minute;
        int Hour;
    } TRAIN[7];

    char l;

    for(int i=0; i<8; i++)
    {
        cout<<"������� �������� ������ ����������: ";
        cin.ignore();
        gets(TRAIN[i].NAZN);

        cout<<"������� ����� ������: ";
        cin>>TRAIN[i].NUMR;

        cout<<"������� ����� ����������� ������(��:��): ";
        cin>>TRAIN[i].Hour>>l>>TRAIN[i].Minute;

        system("cls");
    }

    int Select;
    int RepeatSelect;
    bool Menu = true;

    while(Menu)
    {
        cout<<"1.������ ������ �������������� ����� �������� �������."<<endl;
        cout<<"2.������ � �������, �������������� �..."<<endl;
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
            int H,M;
            int k = 0;
            cout<<"������� �����(��:��): ";
            cin>>H>>l>>M;

            for(int i=0; i<8; i++)
            {
                if(H<TRAIN[i].Hour and H>=0 and H<=12)
                {
                    k++;
                    cout<<"����� � "<<TRAIN[i].NUMR<<" ������������ � "<<TRAIN[i].NAZN<<" � "<<TRAIN[i].Hour<<":"<<TRAIN[i].Minute<<endl;

                }
                if(H<TRAIN[i].Hour and H>=12 and H<=23)
                {
                    k++;
                    cout<<"����� � "<<TRAIN[i].NUMR<<" ������������ � "<<TRAIN[i].NAZN<<" � "<<TRAIN[i].Hour<<":"<<TRAIN[i].Minute<<endl;

                }
                if(H==TRAIN[i].Hour)
                {
                    if(M>=TRAIN[i].Minute)
                    {
                        k++;
                        cout<<"����� � "<<TRAIN[i].NUMR<<" ������������ � "<<TRAIN[i].NAZN<<" � "<<TRAIN[i].Hour<<":"<<TRAIN[i].Minute<<endl;
                    }
                }
            }
            if (k==0)
                cout<<"� ���������, ������ �� ������ ����� ���"<<endl;

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
            cin.ignore();
            gets(Nazn);

            for(int i=0; i<8; i++)
            {
                if(strcmp(Nazn,TRAIN[i].NAZN)==0)
                {
                    k++;
                    cout<<"����� � "<<TRAIN[i].NUMR<<" ������������ � "<<TRAIN[i].NAZN<<" � "<<TRAIN[i].Hour<<":"<<TRAIN[i].Minute<<endl;
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
