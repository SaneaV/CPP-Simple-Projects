//� ������ ��������� �������� ��������� ��������:
//-���������� ���������;
//-���������� ��������� �� ������;
//-������� � ��� ������� ��������;
//-��� ������� ��������;
//-���� �������� ������� ��������;
//-������, ���������� �� ��������������� ������ ������ ���������.
//�������� ���������, �������:
//� ������� �� ����� ������ ���������-�����������;
//� ���������� ������ ��������� ������� �������� �� �������
//-0 ����, ���� ������� ���� m ���� 7;
//-100 ����, ���� 7<= m < 8,5
//-20* m, ���� m <=8,5
//� ������� �� ����� ������ ���������, ������� ����������� 20 ���

#include <iostream>
#include <windows.h>

using namespace std;

int main()
{
    setlocale(LC_ALL,"RUS");

    int Number, Exams;

    cout<<"���������� ���������: ";
    cin>>Number;
    cout<<"���������� ���������: ";
    cin>>Exams;

    system("cls");

    struct Student
    {
        char Name[20];
        char Surname[20];
        char Gender;
        int DayB;
        int MonthB;
        int YearB;
        int ExamsNote[50];
    } S[Number];

    char l;

    for(int i=0; i<Number; i++)
    {
        cout<<"������� ��� ��������: ";
        cin>>S[i].Name;

        cout<<"������� ������� ��������: ";
        cin>>S[i].Surname;

        cout<<"��� �������� (m ��� f): ";
        cin>>S[i].Gender;

        cout<<"������� ���� ������� ��������(��.��.����): ";
        cin>>S[i].DayB>>l>>S[i].MonthB>>l>>S[i].YearB;

        for(int j=0; j<Exams; j++)
        {
            do
            {
                cout<<"������� ������ �� ������� �"<<j+1<<": ";
                cin>>S[i].ExamsNote[j];
            }
            while(S[i].ExamsNote[j]>10 or S[i].ExamsNote[j]<1);
        }

        system("cls");
    }

    int Select;
    int RepeatSelect;
    bool Menu = true;

    while(Menu)
    {
        cout<<"1. ������� �� ����� ���� �����������."<<endl;
        cout<<"2. ��������� ���������."<<endl;
        cout<<"3. �������� ������ 20 ���."<<endl;
        cout<<"��� �����: ";
        do
        {
            cin>>Select;
        }
        while(Select>3 or Select<1);

        system("cls");

        switch(Select)
        {
        case 1:
        {
            bool Zadoljnosti = false;
            for(int i=0; i<Number; i++)
            {
                Zadoljnosti = false;
                for(int j=0; j<Exams; j++)
                {
                    if(S[i].ExamsNote[j]<5)
                    {
                        Zadoljnosti = true;
                    }
                }
                if(Zadoljnosti)
                {
                    cout<<S[i].Name<<" "<<S[i].Surname<<endl;
                    cout<<"���: "<<S[i].Gender<<", ���� ��������: "<<S[i].DayB<<"."<<S[i].MonthB<<"."<<S[i].YearB<<endl;
                    cout<<"������: ";
                    for(int k=0; k<Exams; k++)
                    {
                        cout<<S[i].ExamsNote[k]<<" ";
                    }
                    cout<<endl<<endl;
                }
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
                int m = 0;
                for(int i=0;i<Number;i++)
                {
                    m = 0;
                    for(int j=0;j<Exams;j++)
                    {
                        m+= S[i].ExamsNote[j];
                    }
                    if((m*1.0/Exams)<7) cout<<"������: "<<S[i].Name<<" "<<S[i].Surname<<" �� �������� ���������"<<endl;
                    if((m*1.0/Exams)>=7 and (m*1.0/Exams)<8.5) cout<<"������: "<<S[i].Name<<" "<<S[i].Surname<<" �������� ��������� 100 ���"<<endl;
                    if((m*1.0/Exams)>=8.5) cout<<"������: "<<S[i].Name<<" "<<S[i].Surname<<" �������� ��������� � �������: "<<m*20<<" ���."<<endl;
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
        case 3:
            {
                cout<<"������� ������� ����(��.��.����): ";
                int Day,Month,Year;
                cin>>Day>>l>>Month>>l>>Year;

                int Age;
                for(int i=0;i<Number;i++)
                {
                    Age = Year - S[i].YearB;

                    if(Month<S[i].MonthB) Age--;
                    if(Month==S[i].MonthB)
                    {
                        if(S[i].DayB>Day) Age--;
                    }

                    if(Age>=20) cout<<"�������� - "<<S[i].Name<<" "<<S[i].Surname<<" - "<<Age<<" ���"<<endl;
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
