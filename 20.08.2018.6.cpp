/*"��������� ��� ������ ������ � ������ ZNAK, ���������� ��������� ����:
� NAME � �������, ���;
� ZODIAC � ���� �������;
� BDAY � ���� �������� (������ �� ���� �����).
�������� ���������, ����������� ��������� ��������:
� ���� � ���������� ������ � ������ BOOK, ��������� �� 8 ������� ���� ZNAK;
� ����� �� ����� ����������� � ��������, ��� ������� ������� � ����������;
���� ������ ���, ������� ��������������� ���������.
� ����� �� ����� ����������� � �����, ���������� ��� ������, �������� �������� ������� � ����������;
���� ������ ���, ������� ��������������� ���������.
� ����� �� ����� ����������� � �����, ��� ��� �������� ���������� �� �����, �������� �������� ������� � ����������;
���� ������ ���, ������� ��������������� ���������.
*/

#include <iostream>
#include <windows.h>
#include <cstring>

using namespace std;

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    struct BIRTHDAY
    {
        int Bday;
        int Bmonth;
        int Byear;
    };

    struct ZNAK
    {
        char Name[20];
        char Surname[20];
        int Zodiak;
        struct BIRTHDAY BDAY[10];
    } BOOK[8];

    char l;
    bool CheckTheDate = false;

    for(int i=0; i<8; i++)
    {
        cout<<"������� ������� ��������: ";
        cin>>BOOK[i].Surname;
        cout<<"������� ��� ��������: ";
        cin>>BOOK[i].Name;

        cout<<"����� �������: "<<endl;
        cout<<"1.����(21.03 - 19.04)\t         2.�����(20.04 - 20.05)\t         3.��������(21.05 - 20.06)\n4.���(21.06 - 22.07)\t         5.���(23.07 - 22.08)\t         6.����(23.08 - 22.09)\n";
        cout<<"7.����(23.09 - 22.10)\t         8.��������(23.10 - 21.11)\t 9.�������(22.11 - 21.12)\n10.�������(22.12 - 19.01)\t 11.�������(20.01 - 18.02)\t 12.����(19.02 - 20.03)"<<endl;
        cout<<"�������� ����� ����� �������: ";
        do
        {
            cin>>BOOK[i].Zodiak;
        }
        while(BOOK[i].Zodiak>12 or BOOK[i].Zodiak<1);

        do
        {
            CheckTheDate = false;
            cout<<"������� ���� ��������(��.��.����): ";
            cin>>BOOK[i].BDAY[i].Bday>>l>>BOOK[i].BDAY[i].Bmonth>>l>>BOOK[i].BDAY[i].Byear;

//================================================================================================
//=========================================����===================================================
            if (BOOK[i].Zodiak==1)
            {
                if(BOOK[i].BDAY[i].Bmonth!=3 and BOOK[i].BDAY[i].Bmonth!=4)
                {
                    CheckTheDate = true;
                    cout<<"���� ������� �� ��������� � �����! ��������� ����"<<endl;
                }
                if(BOOK[i].BDAY[i].Bmonth==3)
                    if(BOOK[i].BDAY[i].Bday<21 or BOOK[i].BDAY[i].Bday>31)
                    {
                        CheckTheDate = true;
                        cout<<"���� ������� �� ��������� � �����! ��������� ����"<<endl;
                    }
                if(BOOK[i].BDAY[i].Bmonth==4)
                    if(BOOK[i].BDAY[i].Bday<1 or BOOK[i].BDAY[i].Bday>19)
                    {
                        CheckTheDate = true;
                        cout<<"���� ������� �� ��������� � �����! ��������� ����"<<endl;
                    }
            }
//================================================================================================
//=========================================�����==================================================
            if (BOOK[i].Zodiak==2)
            {
                if(BOOK[i].BDAY[i].Bmonth!=4 and BOOK[i].BDAY[i].Bmonth!=5)
                {
                    CheckTheDate = true;
                    cout<<"���� ������� �� ��������� � �����! ��������� ����"<<endl;
                }
                if(BOOK[i].BDAY[i].Bmonth==4)
                    if(BOOK[i].BDAY[i].Bday<20 or BOOK[i].BDAY[i].Bday>30)
                    {
                        CheckTheDate = true;
                        cout<<"���� ������� �� ��������� � �����! ��������� ����"<<endl;
                    }
                if(BOOK[i].BDAY[i].Bmonth==5)
                    if(BOOK[i].BDAY[i].Bday<1 or BOOK[i].BDAY[i].Bday>20)
                    {
                        CheckTheDate = true;
                        cout<<"���� ������� �� ��������� � �����! ��������� ����"<<endl;
                    }

            }
//================================================================================================
//=========================================��������================================================
            if (BOOK[i].Zodiak==3)
            {
                if(BOOK[i].BDAY[i].Bmonth!=5 and BOOK[i].BDAY[i].Bmonth!=6)
                {
                    CheckTheDate = true;
                    cout<<"���� ������� �� ��������� � �����! ��������� ����"<<endl;
                }
                if(BOOK[i].BDAY[i].Bmonth==5)
                    if(BOOK[i].BDAY[i].Bday<21 or BOOK[i].BDAY[i].Bday>31)
                    {
                        CheckTheDate = true;
                        cout<<"���� ������� �� ��������� � �����! ��������� ����"<<endl;
                    }
                if(BOOK[i].BDAY[i].Bmonth==6)
                    if(BOOK[i].BDAY[i].Bday<1 or BOOK[i].BDAY[i].Bday>20)
                    {
                        CheckTheDate = true;
                        cout<<"���� ������� �� ��������� � �����! ��������� ����"<<endl;
                    }
            }
//================================================================================================
//=========================================���====================================================
            if (BOOK[i].Zodiak==4)
            {
                if (BOOK[i].BDAY[i].Bmonth!=6 and BOOK[i].BDAY[i].Bmonth!=7)
                {
                    CheckTheDate = true;
                    cout<<"���� ������� �� ��������� � �����! ��������� ����"<<endl;
                }
                if(BOOK[i].BDAY[i].Bmonth==6)
                    if(BOOK[i].BDAY[i].Bday<21 or BOOK[i].BDAY[i].Bday>30)
                    {
                        CheckTheDate = true;
                        cout<<"���� ������� �� ��������� � �����! ��������� ����"<<endl;
                    }
                if(BOOK[i].BDAY[i].Bmonth==7)
                    if(BOOK[i].BDAY[i].Bday<1 or BOOK[i].BDAY[i].Bday>22)
                    {
                        CheckTheDate = true;
                        cout<<"���� ������� �� ��������� � �����! ��������� ����"<<endl;
                    }
            }
//================================================================================================
//=========================================���====================================================
            if (BOOK[i].Zodiak==5)
            {
                if (BOOK[i].BDAY[i].Bmonth!=7 and BOOK[i].BDAY[i].Bmonth!=8)
                {
                    CheckTheDate = true;
                    cout<<"���� ������� �� ��������� � �����! ��������� ����"<<endl;
                }
                if(BOOK[i].BDAY[i].Bmonth==7)
                    if(BOOK[i].BDAY[i].Bday<23 or BOOK[i].BDAY[i].Bday>31)
                    {
                        CheckTheDate = true;
                        cout<<"���� ������� �� ��������� � �����! ��������� ����"<<endl;
                    }
                if(BOOK[i].BDAY[i].Bmonth==8)
                    if(BOOK[i].BDAY[i].Bday<1 or BOOK[i].BDAY[i].Bday>22)
                    {
                        CheckTheDate = true;
                        cout<<"���� ������� �� ��������� � �����! ��������� ����"<<endl;
                    }
            }
//================================================================================================
//=========================================����====================================================
            if (BOOK[i].Zodiak==6)
            {
                if(BOOK[i].BDAY[i].Bmonth!=8 and BOOK[i].BDAY[i].Bmonth!=9)
                {
                    CheckTheDate = true;
                    cout<<"���� ������� �� ��������� � �����! ��������� ����"<<endl;
                }
                if(BOOK[i].BDAY[i].Bmonth==8)
                    if(BOOK[i].BDAY[i].Bday<23 or BOOK[i].BDAY[i].Bday>31)
                    {
                        CheckTheDate = true;
                        cout<<"���� ������� �� ��������� � �����! ��������� ����"<<endl;
                    }
                if(BOOK[i].BDAY[i].Bmonth==9)
                    if(BOOK[i].BDAY[i].Bday<1 or BOOK[i].BDAY[i].Bday>22)
                    {
                        CheckTheDate = true;
                        cout<<"���� ������� �� ��������� � �����! ��������� ����"<<endl;
                    }
            }
//================================================================================================
//=========================================����====================================================
            if (BOOK[i].Zodiak==7)
            {
                if (BOOK[i].BDAY[i].Bmonth!=9 and BOOK[i].BDAY[i].Bmonth!=10)
                {
                    CheckTheDate = true;
                    cout<<"���� ������� �� ��������� � �����! ��������� ����"<<endl;
                }
                if(BOOK[i].BDAY[i].Bmonth==9)
                    if(BOOK[i].BDAY[i].Bday<23 or BOOK[i].BDAY[i].Bday>30)
                    {
                        CheckTheDate = true;
                        cout<<"���� ������� �� ��������� � �����! ��������� ����"<<endl;
                    }
                if(BOOK[i].BDAY[i].Bmonth==10)
                    if(BOOK[i].BDAY[i].Bday<1 or BOOK[i].BDAY[i].Bday>22)
                    {
                        CheckTheDate = true;
                        cout<<"���� ������� �� ��������� � �����! ��������� ����"<<endl;
                    }
            }
//================================================================================================
//=========================================��������===============================================
            if (BOOK[i].Zodiak==8)
            {
                if(BOOK[i].BDAY[i].Bmonth!=10 and BOOK[i].BDAY[i].Bmonth!=11)
                {
                    CheckTheDate = true;
                    cout<<"���� ������� �� ��������� � �����! ��������� ����"<<endl;
                }
                if(BOOK[i].BDAY[i].Bmonth==10)
                    if(BOOK[i].BDAY[i].Bday<23 or BOOK[i].BDAY[i].Bday>31)
                    {
                        CheckTheDate = true;
                        cout<<"���� ������� �� ��������� � �����! ��������� ����"<<endl;
                    }
                if(BOOK[i].BDAY[i].Bmonth==11)
                    if(BOOK[i].BDAY[i].Bday<1 or BOOK[i].BDAY[i].Bday>21)
                    {
                        CheckTheDate = true;
                        cout<<"���� ������� �� ��������� � �����! ��������� ����"<<endl;
                    }
            }
//================================================================================================
//=========================================�������================================================
            if (BOOK[i].Zodiak==9)
            {
                if(BOOK[i].BDAY[i].Bmonth!=11 and BOOK[i].BDAY[i].Bmonth!=12)
                {
                    CheckTheDate = true;
                    cout<<"���� ������� �� ��������� � �����! ��������� ����"<<endl;
                }
                if(BOOK[i].BDAY[i].Bmonth==11)
                    if(BOOK[i].BDAY[i].Bday<22 or BOOK[i].BDAY[i].Bday>30)
                    {
                        CheckTheDate = true;
                        cout<<"���� ������� �� ��������� � �����! ��������� ����"<<endl;
                    }
                if(BOOK[i].BDAY[i].Bmonth==12)
                    if(BOOK[i].BDAY[i].Bday<1 or BOOK[i].BDAY[i].Bday>21)
                    {
                        CheckTheDate = true;
                        cout<<"���� ������� �� ��������� � �����! ��������� ����"<<endl;
                    }
            }
//================================================================================================
//=========================================�������================================================
            if (BOOK[i].Zodiak==10)
            {
                if(BOOK[i].BDAY[i].Bmonth!=12 and BOOK[i].BDAY[i].Bmonth!=1)
                {
                    CheckTheDate = true;
                    cout<<"���� ������� �� ��������� � �����! ��������� ����"<<endl;
                }
                if(BOOK[i].BDAY[i].Bmonth==12)
                    if(BOOK[i].BDAY[i].Bday<22 or BOOK[i].BDAY[i].Bday>31)
                    {
                        CheckTheDate = true;
                        cout<<"���� ������� �� ��������� � �����! ��������� ����"<<endl;
                    }
                if(BOOK[i].BDAY[i].Bmonth==1)
                    if(BOOK[i].BDAY[i].Bday<1 or BOOK[i].BDAY[i].Bday>19)
                    {
                        CheckTheDate = true;
                        cout<<"���� ������� �� ��������� � �����! ��������� ����"<<endl;
                    }
            }
//================================================================================================
//=========================================�������================================================
            if (BOOK[i].Zodiak==11)
            {
                if(BOOK[i].BDAY[i].Bmonth!=1 and BOOK[i].BDAY[i].Bmonth!=2)
                {
                    CheckTheDate = true;
                    cout<<"���� ������� �� ��������� � �����! ��������� ����"<<endl;
                }
                if(BOOK[i].BDAY[i].Bmonth==1)
                    if(BOOK[i].BDAY[i].Bday<20 or BOOK[i].BDAY[i].Bday>30)
                    {
                        CheckTheDate = true;
                        cout<<"���� ������� �� ��������� � �����! ��������� ����"<<endl;
                    }
                if(BOOK[i].BDAY[i].Bmonth==2)
                    if(BOOK[i].BDAY[i].Bday<1 or BOOK[i].BDAY[i].Bday>18)
                    {
                        CheckTheDate = true;
                        cout<<"���� ������� �� ��������� � �����! ��������� ����"<<endl;
                    }
            }
//================================================================================================
//=========================================����===================================================
            if (BOOK[i].Zodiak==12)
            {
                if(BOOK[i].BDAY[i].Bmonth!=2 and BOOK[i].BDAY[i].Bmonth!=3)
                {
                    CheckTheDate = true;
                    cout<<"���� ������� �� ��������� � �����! ��������� ����"<<endl;
                }
                if(BOOK[i].BDAY[i].Bmonth==2)
                    if(BOOK[i].BDAY[i].Bday<19 or BOOK[i].BDAY[i].Bday>29)
                    {
                        CheckTheDate = true;
                        cout<<"���� ������� �� ��������� � �����! ��������� ����"<<endl;
                    }
                if(BOOK[i].BDAY[i].Bmonth==3)
                    if(BOOK[i].BDAY[i].Bday<1 or BOOK[i].BDAY[i].Bday>20)
                    {
                        CheckTheDate = true;
                        cout<<"���� ������� �� ��������� � �����! ��������� ����"<<endl;
                    }
            }
        }
        while(CheckTheDate);
        system("cls");

    }

    int Selection;
    int Reselection;
    bool FinishProgram = false;

    while(!FinishProgram)
    {
        cout<<"1.������ ���������� � �������� �� ��� �������."<<endl;
        cout<<"1.������ ���������� � ����� ���������� ��� ����������� ������ �������."<<endl;
        cout<<"3.��� ������� � ����� �... ."<<endl;
        cout<<"��� �����: ";
        do
        {
            cin>>Selection;
        }
        while(Selection>3 or Selection<1);

        system("cls");

        switch(Selection)
        {
        case 1:
        {
            char Surname[20];
            int k=0;
            cout<<"������� ������� ��������: ";
            cin>>Surname;

            for(int i=0; i<8; i++)
            {
                if(strcmp(Surname,BOOK[i].Surname)==0)
                {
                    cout<<BOOK[i].Name<<" "<<BOOK[i].Surname<<", ���� ������� - ";
                    if (BOOK[i].Zodiak==1)
                        cout<<" ����";
                    if (BOOK[i].Zodiak==2)
                        cout<<" �����";
                    if (BOOK[i].Zodiak==3)
                        cout<<" ��������";
                    if (BOOK[i].Zodiak==4)
                        cout<<" ���";
                    if (BOOK[i].Zodiak==5)
                        cout<<" ���";
                    if (BOOK[i].Zodiak==6)
                        cout<<" ����";
                    if (BOOK[i].Zodiak==7)
                        cout<<" ����";
                    if (BOOK[i].Zodiak==8)
                        cout<<" ��������";
                    if (BOOK[i].Zodiak==9)
                        cout<<" �������";
                    if (BOOK[i].Zodiak==10)
                        cout<<" �������";
                    if (BOOK[i].Zodiak==11)
                        cout<<" �������";
                    if (BOOK[i].Zodiak==12)
                        cout<<" ����";
                    cout<<" ,�������: "<<BOOK[i].BDAY[i].Bday<<"."<<BOOK[i].BDAY[i].Bmonth<<"."<<BOOK[i].BDAY[i].Byear<<endl;
                    k++;
                }
            }
            if(k==0)
                cout<<"� ���������, ������� �� ������"<<endl;

            cout<<endl<<endl;
            cout<<"1.��������� � ����."<<endl;
            cout<<"2.����� �� ���������."<<endl;
            do
            {
                cin>>Reselection;
            }
            while(Reselection>2 or Reselection<1);

            if (Reselection==1)
                system("cls");
            if(Reselection==2)
                FinishProgram=true;
            break;
        }
        case 2:
        {
            int Zodiak;
            int k=0;

            cout<<"1.���� 2.����� 3.�������� 4.��� 5.��� 6.����\n";
            cout<<"7.���� 8.�������� 9.������� 10.������� 11.������� 12.����"<<endl;
            cout<<"�������� ����� ����� �������: ";
            cin>>Zodiak;

            system("cls");


            cout<<"����, ������� �������� ��� ������:";
            if (Zodiak==1)
                cout<<" ����"<<endl;
            if (Zodiak==2)
                cout<<" �����"<<endl;
            if (Zodiak==3)
                cout<<" ��������";
            if (Zodiak==4)
                cout<<" ���"<<endl;
            if (Zodiak==5)
                cout<<" ���"<<endl;
            if (Zodiak==6)
                cout<<" ����"<<endl;
            if (Zodiak==7)
                cout<<" ����"<<endl;
            if (Zodiak==8)
                cout<<" ��������";
            if (Zodiak==9)
                cout<<" �������"<<endl;
            if (Zodiak==10)
                cout<<" �������"<<endl;
            if (Zodiak==11)
                cout<<" �������"<<endl;
            if (Zodiak==12)
                cout<<" ����"<<endl;

            for(int i=0; i<8; i++)
            {
                if(BOOK[i].Zodiak==Zodiak)
                {
                    cout<<BOOK[i].Name<<" "<<BOOK[i].Surname;
                    cout<<" ,�������: "<<BOOK[i].BDAY[i].Bday<<"."<<BOOK[i].BDAY[i].Bmonth<<"."<<BOOK[i].BDAY[i].Byear<<endl;
                    k++;

                }
            }
            if(k==0)
                cout<<"� ���������, ��� ���� ������ ������� ������ �� �������"<<endl;

            cout<<endl<<endl;
            cout<<"1.��������� � ����."<<endl;
            cout<<"2.����� �� ���������."<<endl;
            do
            {
                cin>>Reselection;
            }
            while(Reselection>2 or Reselection<1);

            if (Reselection==1)
                system("cls");
            if(Reselection==2)
                FinishProgram=true;
            break;

        }
        case 3:
        {
            int Month;
            int k=0;

            cout<<"������� ����� ������: ";
            do
            {
                cin>>Month;
            }
            while(Month>12 or Month<1);

            for(int i=0; i<8; i++)
                if(Month==BOOK[i].BDAY[i].Bmonth)
                {
                    cout<<BOOK[i].Name<<" "<<BOOK[i].Surname<<" - ���� ������� - ";
                    if (BOOK[i].Zodiak==1)
                        cout<<" ����";
                    if (BOOK[i].Zodiak==2)
                        cout<<" �����";
                    if (BOOK[i].Zodiak==3)
                        cout<<" ��������";
                    if (BOOK[i].Zodiak==4)
                        cout<<" ���";
                    if (BOOK[i].Zodiak==5)
                        cout<<" ���";
                    if (BOOK[i].Zodiak==6)
                        cout<<" ����";
                    if (BOOK[i].Zodiak==7)
                        cout<<" ����";
                    if (BOOK[i].Zodiak==8)
                        cout<<" ��������";
                    if (BOOK[i].Zodiak==9)
                        cout<<" �������";
                    if (BOOK[i].Zodiak==10)
                        cout<<" �������";
                    if (BOOK[i].Zodiak==11)
                        cout<<" �������";
                    if (BOOK[i].Zodiak==12)
                        cout<<" ����";
                    cout<<" - ���� �������� - "<<BOOK[i].BDAY[i].Bday<<"."<<BOOK[i].BDAY[i].Bmonth<<"."<<BOOK[i].BDAY[i].Byear<<endl;
                    k++;
                }

            if(k==0)
                cout<<"� ���������, ������� �� ������"<<endl;

            cout<<endl<<endl;
            cout<<"1.��������� � ����."<<endl;
            cout<<"2.����� �� ���������."<<endl;
            do
            {
                cin>>Reselection;
            }
            while(Reselection>2 or Reselection<1);

            if (Reselection==1)
                system("cls");
            if(Reselection==2)
                FinishProgram=true;
            break;

        }
        }
    }
}

