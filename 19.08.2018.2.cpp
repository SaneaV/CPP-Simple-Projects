//��������� ��� ������ ������ � ������ WORKER, ���������� ��������� ����:
//� NAME � ������� � �������� ���������;
//� POST � �������� ���������� ���������;
//� YEAR � ��� ����������� �� ������.
//�������� ���������, ����������� ��������� ��������:
//� ���� � ���������� ������ � ������ TABL, ��������� �� 10 ������� ���� WORKER,
//� ����� �� ����� �������� ����������, ��� ���� ������ ��������� ��������, ��������� � ����������;
//���� ����� ���������� ���, ������� ��������������� ���������.
//� ����� �� ����� ������� � ���������, ������� � �������� �������� ������� � ����������;
//���� ����� ���������� ���, ������� ��������������� ���������.

#include <iostream>
#include <windows.h>
#include <stdio.h>
#include <cstring>

using namespace std;

int main()
{
    setlocale(LC_ALL,"RUS");

    struct WORKER
    {
        char NAME[30];
        char POST[20];
        int YEAR;
    } TABL[10];



    for(int i=0; i<10 ; i++)
    {
        cout<<"������� ������� � �������� ���������(������): ";
        cin>>TABL[i].NAME;

        cout<<"������� �������� ���������� ���������: ";
        cin>>TABL[i].POST;

        cout<<"������� ��� ����������� �� ������: ";
        cin>>TABL[i].YEAR;


            system("cls");
    }

    int Select;
    int RepeatSelect;
    bool Menu = true;

    while(Menu)
    {
        cout<<"1.������, ��� �������� ������ ���..."<<endl;
        cout<<"2.������ � ��������� �� ��� ������� � ���������."<<endl;
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
            int year;
            int ThisYear;
            int k=0;
            cout<<"������� ���� ������: ";
            cin>>year;
            cout<<"������� ������� ���: ";
            cin>>ThisYear;

            for(int i=0; i<10 ; i++)
            {
                if((ThisYear-TABL[i].YEAR)>=year)
                {
                    cout<<"���� ������ "<<TABL[i].NAME<<" ����������: "<<ThisYear-TABL[i].YEAR<<endl;
                    k++;
                }


            }
            if (k==0)
                cout<<"� ���������, ����� ��� �� ��������� ������� ���."<<endl;

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
            char Name[30];
            int k = 0;

            cout<<"������� ������� � �������� ��������: ";
            cin>>Name;

            for(int i=0; i<10 ; i++)
            {
                if(strcmp(Name,TABL[i].NAME)==0)
                {
                    cout<<TABL[i].NAME<<" � ��������� - "<<TABL[i].POST<<" �������� � "<<TABL[i].YEAR<<" ����."<<endl;
                    k++;
                }
            }
            if (k==0)
                cout<<"� ���������, ����� ������� � ��� �� ��������."<<endl;

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
