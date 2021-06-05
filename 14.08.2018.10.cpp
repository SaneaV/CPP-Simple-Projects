//��� ��������� ������� ����������������� ��������� ��������:
//-����� ���������� ���������;
//-�������� ������� ��������;
//-���� ������������ ������� ��������;
//-���� ��������� ����� �������� ������� ��������;
//-�������� ���� ������� ��������;
//-������� ���� ������� ��������.
//�������� ���������, �������:
//� ������� �� ����� ���������� � ��������, �������� �������� ������� � ����������.
//� ���� ������� ����, ������� �� ����� ������ ��������� � �������� ������ ��������.

#include <iostream>
#include <stdio.h>
#include <windows.h>
#include <cstring>

using namespace std;

struct Products
{
    char Name[20];

    int DayP;
    int MonthP;
    int YearP;

    int DayD;
    int MonthD;
    int YearD;

    int FirstPrice;
    int SecondPrice;
} P[50];

int main()
{
    setlocale(LC_ALL,"RUS");

    int n;
    cout<<"������� ���������� ���������: ";
    cin>>n;

    char l;


    for(int i=0; i<n; i++)
    {
        cin.ignore();
        system("cls");
        cout<<"������� �������� ��������: ";
        gets(P[i].Name);

        do
        {
            cout<<"������� ����, ����� � ��� ������������(��.��.����): ";
            cin>>P[i].DayP>>l>>P[i].MonthP>>l>>P[i].YearP;
        }
        while(P[i].DayP>31 or P[i].MonthP>12);

        do
        {
            cout<<"������� ����, ����� � ��� ��������� �����(��.��.����): ";
            cin>>P[i].DayD>>l>>P[i].MonthD>>l>>P[i].YearD;
        }
        while(P[i].DayD>31 or P[i].MonthD>12);

        cout<<"������� ��������� ����: ";
        cin>>P[i].FirstPrice;

        cout<<"������� �������� ����: ";
        cin>>P[i].SecondPrice;
    }

    system("cls");

    int Select;
    int SelectRepeat;
    bool Repeat;


    do
    {
        cout<<"1. ������ ���������� � �������� �� ��� ��������."<<endl;
        cout<<"2. ������ � ��������� � ������� �����."<<endl;
        do{
        cin>>Select;
        }while(Select>2 or Select<1);
        system("cls");

        switch(Select)
        {
        case 1:
        {
            cout<<"������� �������� ��������: ";
            char NameProduct[20];
            cin.ignore();
            gets (NameProduct);

            for(int i=0; i<n; i++)
            {
                if (strcmp(NameProduct,P[i].Name)==0)
                {
                    cout<<endl<<endl;
                    cout<<"�������� ��������: "<<P[i].Name<<endl;
                    cout<<"���� ������������: "<<P[i].DayP<<"."<<P[i].MonthP<<"."<<P[i].YearP<<endl;
                    cout<<"���� ��������� �����: "<<P[i].DayD<<"."<<P[i].MonthD<<"."<<P[i].YearD<<endl;
                    cout<<"���� ����������: "<<P[i].FirstPrice<<endl;
                    cout<<"���� � ��������: "<<P[i].SecondPrice<<endl;
                }
            }
            cout<<"1.��������� � ����."<<endl;
            cout<<"2.����� �� ���������."<<endl;
            do
            {
                cin>>SelectRepeat;
            }
            while(SelectRepeat>2 or SelectRepeat<1);

            if(SelectRepeat==2)
                Repeat=false;
            if (SelectRepeat==1)
                system("cls");
            break;
        }
        case 2:
        {
            int TDay,TMonth,TYear;

            do
            {
                cout<<endl<<"������� ����������� ����(��.��.����): ";
                cin>>TDay>>l>>TMonth>>l>>TYear;
            }
            while(TDay>31 or TMonth>12);

            for(int i=0;i<n;i++)
            {
                if(P[i].YearD<TYear)
                {
                    cout<<P[i].Name<<" � ������� ������ ��������."<<endl;
                }
                if(P[i].MonthD==TMonth)
                {
                    if(P[i].DayD<TDay)
                        cout<<P[i].Name<<" � ������� ������ ��������."<<endl;
                }

            }
            cout<<"1.��������� � ����."<<endl;
            cout<<"2.����� �� ���������."<<endl;
            do
            {
                cin>>SelectRepeat;
            }
            while(SelectRepeat>2 or SelectRepeat<1);

            if(SelectRepeat==2)
                Repeat=false;
            if (SelectRepeat==1)
                system("cls");
            break;

            }
        }

    }
    while(Repeat);
}
