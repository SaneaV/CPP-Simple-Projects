//��� ���������������� ������� ������� ��������:
//-���������� �������;
//-������� ������� ����������;
//-���� ������� ����������;
//-��� ������� ����������;
//-��� ������� ����������;
//-����������� ��������� (�������� ��� ������).
//�������� ���������, ������� ����������:
//� ������� ��������� ���������� �������� ������ 20 ���;
//� ������ �������� ����������;
//� ���� ����� ������� ��� ���������� ������ 18 ���.

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

    for(int i=0; i<n; i++)
    {
        system("cls");
        cout<<"������� ��������: ";
        cin>>P[i].Age;

        cout<<"���� �������� (��): ";
        cin>>P[i].Height;

        cout<<"��� �������� (��): ";
        cin>>P[i].Weight;

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
        cout<<"1.C������ ��������� ���������� ��������, ������ 20 ���"<<endl;
        cout<<"2.���� ����� ������� ��� ���������� ������ 18 ���."<<endl;
        cout<<"3.����� ������� ���������."<<endl;
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
            int k=0;

            for(int i=0; i<n; i++)
            {

                if (P[i].Age<20)
                    k++;

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
            int MediumWeight=0;
            int k=0;

            for(int i=0; i<n; i++)
            {
                if(P[i].Age>18)
                {
                    MediumWeight += P[i].Weight;
                    k++;
                }
            }

            cout<<"������� ��� ���������� ������ 18 ���: "<<MediumWeight/k<<endl;

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
        case 3:
        {
            int PHeight =0;
            int Pmax;
            for(int i=0; i<n; i++)
            {
                if(P[i].Height>PHeight)
                {
                    PHeight=P[i].Height;
                    Pmax=i;
                }
            }

            cout<<"����� ������� ��������� ����� ����: "<<P[Pmax].Height<<endl;

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
