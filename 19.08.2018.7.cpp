//��� ���������������� ������� ������� ��������:
//-���������� �������;
//-������� ������� ����������;
//-���� ������� ����������;
//-��� ������� ����������;
//-��� ������� ����������;
//-����������� ��������� (�������� ��� ������).
//�������� ���������, ������� ����������:
//� ������� ��������� �� ���������� ��� �������� ���� ���������� ���������, ������� 25 ��� �����;
//� ������� ��������� �� ���������� ������� � �������� �� 30 �� 40 ��� ���������� ��������, ��� ������� ������ �������� ����.

#include <iostream>
#include <windows.h>
#include <stdio.h>
#include <cstring>

using namespace std;

int main()
{
    setlocale(LC_ALL,"RUS");

    int n;

    cout<<"���������� ������� ��� ���������������� �������: ";
    cin>>n;

    struct People
    {
        int Age;
        int Height;
        int Weight;
        char Gender;
        char Status;
    } P[n];
    int AllWeight = 0;

    for(int i=0; i<n; i++)
    {
        system("cls");
        cout<<"������� ��������: ";
        cin>>P[i].Age;

        cout<<"���� �������� (��): ";
        cin>>P[i].Height;

        cout<<"��� �������� (��): ";
        cin>>P[i].Weight;
        AllWeight += P[i].Weight;

        cout<<"��� �������� (m ��� f): ";
        cin>>P[i].Gender;

        cout<<"������ �������� (s - �������� ��� m - ��������): ";
        cin>>P[i].Status;
    }

    system("cls");
    bool Repeat = true;
    int SelectRepeat;
    int Select;

    while(Repeat)
    {
        cout<<"1.C������ ��������� �� ���������� ��� �������� ���� ���������� ���������, ������� 25 ��� �������"<<endl;
        cout<<"2.������� ��������� �� ���������� ������� � �������� �� 30 �� 40 ��� ���������� ��������, ��� ������� ������ �������� ����."<<endl;
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
            int k=0;

            for(int i=0; i<n; i++)
            {
                if(P[i].Status=='s')
                {
                    if(P[i].Gender=='m')
                    {
                        if (P[i].Age>25)
                            k++;
                    }
                }
            }

            cout<<"������� ����� � ������ ���������������: "<<k*100.0/n<<endl;

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
            int k=0;
            int MediumWeight = AllWeight / (n-1);
            for(int i=0; i<n; i++)
            {
                if(P[i].Age>30 and P[i].Age<40)
                {
                    if(P[i].Weight<MediumWeight)
                        k++;
                }
            }

            cout<<"������� ����� � ������ ���������������: "<<k*100.0/n<<endl;

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


}
