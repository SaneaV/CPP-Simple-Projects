/*"� ������ ��������� �������� ��������� ��������:
-���������� ���������;
-���������� ��������� �� ������;
-������� � ��� ������� ��������;
-��� ������� ��������;
-���� �������� ������� ��������;
-������, ���������� �� ��������������� ������ ������ ���������.
�������� ���������, �������:
� ������� �� ����� ������� � ��� ���� ���������, ������� ���������� ������� ����;
� ���������� � ������� �� �����, ������� ��������� �� ������ ���������� ��������� ���������� �����.*/


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

    float Medium = 0;
    int k = 0;

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
            Medium+=S[i].ExamsNote[j];
            k++;
        }

        system("cls");
    }

    int Select;
    int RepeatSelect;
    bool Menu = true;

    while(Menu)
    {
        cout<<"1. �������� � ������ ���� ��������."<<endl;
        cout<<"2. ������� ������ ���������."<<endl;
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
            float M = Medium / k;
            float M1 = 0;
            float K1 = 0;

            for(int i=0; i<Number; i++)
            {
                M1 = 0;
                K1 = 0;
                for(int j=0; j<Exams; j++)
                {
                    M1 += S[i].ExamsNote[j];
                    K1++;
                }

                if(M1>M)
                    cout<<"������: "<<S[i].Name<<" "<<S[i].Surname<<" ����� ������ ���� �������."<<endl;
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
            int day,year,month;
            int y = 0;

            cout<<"������� ������� ����(��.��.����): ";
            cin>>day>>l>>month>>l>>year;
            system("cls");
            for(int i=0; i<Number; i++)
            {
                if((year - S[i].YearB)<18)
                    y++;

                if((year - S[i].YearB)==18)
                    if(S[i].MonthB>month)
                        y++;
                    else if(S[i].MonthB<month)
                        y--;
                    else if(S[i].MonthB==month)
                        if (S[i].DayB>=day)
                            y++;
                        else if(S[i].DayB<day)
                            y--;
            }

            cout<<"������� ������ ���������: "<<y*100/Number<<endl;


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
