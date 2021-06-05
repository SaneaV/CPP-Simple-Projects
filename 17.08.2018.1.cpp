//��� ���������������� ������� ������� ��������:
//-���������� �������;
//-������� ������� ����������;
//-���� ������� ����������;
//-��� ������� ����������;
//-��� ������� ����������;
//-����������� ��������� (�������� ��� ������).
//�������� ���������, ������� ����������:
//� ������� ��������� �� ���������� ��� �������� ���� ���������� ����������, ������� 20 ��� �������;
//� ������� ��������� �� ���������� ������� � �������� �� 20 �� 50 ��� ���������� ��������, ��� ������� ������ �������� ����.

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
        cout<<"1.C������ ��������� �� ���������� ��� �������� ���� ���������� ����������, ������� 20 ��� �������"<<endl;
        cout<<"2.������� ��������� �� ���������� ������� � �������� �� 20 �� 50 ��� ���������� ��������, ��� ������� ������ �������� ����."<<endl;
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
                    if(P[i].Gender=='f')
                    {
                        if (P[i].Age>20)
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
                if(P[i].Age>20 and P[i].Age<50)
                {
                    if(P[i].Weight>MediumWeight)
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
