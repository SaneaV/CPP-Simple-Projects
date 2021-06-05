//��������� ��� ������ ������ � ������ STUDENT, ���������� ��������� ����:
//� NAME � ������� � ��������;
//� GROUP � ����� ������;
//� SES � ������������ (������ �� 5 ���������).
//�������� ���������, ����������� ��������� ��������:
//� ���� � ���������� ������ � ������ STUD1, ��������� �� 10 ������� ���� STUDENT;
//� ����� �� ����� �������� � ������� ����� ��� ���� ���������, ���������� � ������, ���� ������� ���� �������� ������ 5.0;
//���� ����� ��������� ���, ������� ��������������� ���������.
//� ����� �� ����� �������� � ������� ����� ��� ���� ���������, ������� ������ 9 � 10;���� ����� ��������� ���, ������� ��������������� ���������

#include <iostream>
#include <windows.h>
#include <stdio.h>

using namespace std;

int main()
{
    setlocale(LC_ALL,"RUS");

    struct Student
    {
        char Name[30];
        int Group;
        int Ses[5];
    } STUD1[9];

    int j;

    for(int i=0; i<10; i++)
    {
        cout<<"������� ��� ������� � ��� �������� (��������.�.): ";
        cin>>STUD1[i].Name;

        cout<<"������� ����� ������ �������(������ �����): ";
        cin>>STUD1[i].Group;

        j = 0;
        do{
        cout<<"������� ������ ������� �� ����������: ";
        cin>>STUD1[i].Ses[j];
        }while(STUD1[i].Ses[j]>10 or STUD1[i].Ses[j]<1);


        j++;
        do{
        cout<<"������� ������ ������� �� ���������� �����: ";
        cin>>STUD1[i].Ses[j];
        }while(STUD1[i].Ses[j]>10 or STUD1[i].Ses[j]<1);


        j++;
        do{
        cout<<"������� ������ ������� �� �������� �����: ";
        cin>>STUD1[i].Ses[j];
        }while(STUD1[i].Ses[j]>10 or STUD1[i].Ses[j]<1);

        j++;
        do{
        cout<<"������� ������ ������� �� ����������� �����: ";
        cin>>STUD1[i].Ses[j];
        }while(STUD1[i].Ses[j]>10 or STUD1[i].Ses[j]<1);

        j++;
        do{
        cout<<"������� ������ ������� �� ����������: ";
        cin>>STUD1[i].Ses[j];
        }while(STUD1[i].Ses[j]>10 or STUD1[i].Ses[j]<1);

        system("cls");
    }

    int Select;
    int RepeatSelect;
    bool Menu = true;

    while(Menu)
    {
        cout<<"1. ������� �� ����� �������� �� ������� ������ ���� 5.0"<<endl;
        cout<<"2. ������� �� ����� ��������, ������� ������ 9 ��� 10"<<endl;
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
            float MediumNote = 0;

            for(int i=0; i<10; i++)
            {
                MediumNote = 0;
                for(int j=0; j<5; j++)
                {
                    MediumNote+=STUD1[i].Ses[j];
                }
                if ((MediumNote/5*1.0)>=5)
                    cout<<(STUD1[i].Name)<<" �� ������ �"<<STUD1[i].Group<<" �� ������� ������: "<<MediumNote/5*1.0<<endl;
            }

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
            bool NineOrTen = false;
            for(int i=0; i<10; i++)
            {
                NineOrTen = false;
                for(int j=0; j<5; j++)
                {
                    if(STUD1[i].Ses[j]>=9)
                    {
                        NineOrTen = true;
                        break;
                    }
                }

                if (NineOrTen)
                    cout<<STUD1[i].Name<<" �� ������ �"<<STUD1[i].Group<<" ����� ������: "<<STUD1[i].Ses[0]<<" "<<STUD1[i].Ses[1]<<" "<<STUD1[i].Ses[2]<<" "<<STUD1[i].Ses[3]<<" "<<STUD1[i].Ses[4]<<endl;
            }

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
