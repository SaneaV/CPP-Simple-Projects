//��������� ��� ������ ������, ������� ���������� ����������, ������� ��������:
//-���������� ���������;
//-������� � ��� ������� ��������;
//-����� �������� ������� ��������;
//-����� (�����, ����� ����) ������� ��������.
//�������� ���������, �������:
//� ������� �� ����� ������ ���������, � ������� ����� �������� ���������� �� 47;
//� ������� �� ����� ���������� �� ���������, ����������� �� �������� �����.

#include <iostream>
#include <windows.h>
#include <stdio.h>
#include <cstring>

using namespace std;

int main()
{
    setlocale(LC_ALL,"RUS");

    int n;
    cout<<"������� ���������� �����: ";
    cin>>n;

    system("cls");

    struct SPRAVOCHNIK
    {
        char Name[20];
        char Surname[20];
        char Number[10];
        char Adres[20];
        int NAdres;
    } Tel[n];


    for(int i=0; i<n; i++)
    {
        cout<<"������� ��� ��������: ";
        cin>>Tel[i].Name;

        cout<<"������� ������� ��������: ";
        cin>>Tel[i].Surname;

        do{
        cout<<"������� ����� ��������(6 ��������): ";
            cin>>Tel[i].Number;
        }
        while(strlen(Tel[i].Number)>6 or strlen(Tel[i].Number)<6);

        cout<<"������� �����: ";
        cin>>Tel[i].Adres;

        cout<<"������� ����� ����: ";
        cin>>Tel[i].NAdres;

        system("cls");
    }

    int Select;
    int RepeatSelect;
    bool Menu = true;

    while(Menu)
    {
        cout<<"1.������ ������ ���������, ��� ����� ���������� �� 47."<<endl;
        cout<<"2.������ � �����, ������� �� �����..."<<endl;
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
            int k = 0;
            for(int i=0; i<n; i++)
            {
                if(Tel[i].Number[0]=='4' and Tel[i].Number[1]=='7')
                {
                    cout<<Tel[i].Name<<" "<<Tel[i].Surname<<" ��������� �� ������: "<<Tel[i].Adres<<" "<<Tel[i].NAdres<<" ����� ��������: "<<Tel[i].Number;
                    k++;
                }

            }


            if (k==0)
                cout<<"� ���������, ����� ������� ���."<<endl;

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
            char NazvUlici[20];

            cout<<"������� �������� �����: ";
            cin>>NazvUlici;

            cout<<"�� ������ ����� ���������: "<<endl;
            for(int i=0;i<n;i++)
            {
                if(strcmp(NazvUlici,Tel[i].Adres)==0)
                {
                    cout<<Tel[i].Name<<" "<<Tel[i].Surname<<" ����� ��������: "<<Tel[i].Number<<" ����� ����: "<<Tel[i].NAdres<<endl;
                    k++;
                }
            }


            if (k==0)
                cout<<"�����"<<endl;

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
