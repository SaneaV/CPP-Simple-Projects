/*��� ��������� ������ ������������� �������� ��������:
-����� ���������� �������;
-�������� ������ ��������;
-������������� �����, �� ������� ����������������� ��������;
-��� ������ �������� (�������������� �����, �������, �������������� �����, ��������������� ��������, ���������� � �.�.);
-������ ������ ��������;
-����� ������ ��������.
�������� ���������, ������� ������� �� �����:
� ������ ������������ ������������ � 15:00 �� 19:00;
� ������ �������������� ������� ������������������ ����� 1 ���� 45 �����;
*/


#include <iostream>
#include <windows.h>
#include <cstring>

using namespace std;

int main()
{
    setlocale(LC_ALL,"RUS");

    int n;
    cout<<"������� ���������� �������: ";
    cin>>n;

    system("cls");

    struct TELE
    {
        char Name[20];
        char ChanelName[10];
        char Type[20];

        int HoursB;
        int MinutesB;

        int HoursE;
        int MinutesE;
    } T[n];

    char l;

    for(int i=0; i<n; i++)
    {
        cout<<"�������� ��������: ";
        cin>>T[i].Name;

        cout<<"�������� ������: ";
        cin>>T[i].ChanelName;

        cout<<"���� ��������: ";
        cin>>T[i].Type;

        cout<<"������� ����� ������ ��������(��:��): ";
        cin>>T[i].HoursB>>l>>T[i].MinutesB;

        cout<<"����� ��������� ��������(��:��): ";
        cin>>T[i].HoursE>>l>>T[i].MinutesB;
    }

    int Selection;
    int Reselection;
    bool FinishProgram = false;

    while(!FinishProgram)
    {
        cout<<"1. ������ ������������ ������������ � 15:00 �� 19:00."<<endl;
        cout<<"2. ������ �������������� ������� ������������������ ����� 1 ���� 45 �����."<<endl;
        cout<<"��� �����: ";
        do
        {
            cin>>Selection;
        }
        while(Selection>2 or Selection<1);

        system("cls");

        switch(Selection)
        {
        case 1:
        {
            for(int i=0; i<n; i++)
            {
                if(strcmp(T[i].Type,"Mult")==0)
                    if(T[i].HoursB>15 and T[i].HoursB<19 or (T[i].HoursB==15 and T[i].MinutesB==0) or (T[i].HoursB==19 and T[i].MinutesB==0))
                    {
                        cout<<"�� ���������� - "<<T[i].ChanelName<<" � "<<T[i].HoursB<<":"<<T[i].MinutesB;
                        cout<<" �� "<<T[i].HoursE<<":"<<T[i].MinutesE<<" ����� ���� ���������� ��� ��������� - "<<T[i].Name<<endl;
                    }
            }
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
            int Minutes = 0;
            int Hours = 0;

            for(int i=0; i<n; i++)
            {
                Minutes = 0;
                Hours = 0;

                if(strcmp(T[i].Type,"Hudoj")==0)
                {
                    Hours = T[i].HoursE - T[i].HoursB;
                    Minutes = abs(T[i].MinutesE - T[i].MinutesB);
                }
                if ((Hours==1 and Minutes>=45) or Hours>1)
                {
                    cout<<"�� ���������� - "<<T[i].ChanelName<<" � "<<T[i].HoursB<<":"<<T[i].MinutesB;
                    cout<<" �� "<<T[i].HoursE<<":"<<T[i].MinutesE<<" ����� ���� �������������� ����� ��� ��������� - "<<T[i].Name<<endl;

                }
            }
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
