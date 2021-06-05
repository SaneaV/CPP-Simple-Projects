/*��������� ��� ������ ������ � ������ MARSH, ���������� ��������� ����:
� BEGST � �������� ���������� ������ ��������;
� TERM � �������� ��������� ������ ��������;
� NUMER � ����� ��������.
�������� ���������, ����������� ��������� ��������:
� ���� � ���������� ������ � ������ TRAFIC, ��������� �� 8 ������� ���� MARSH;
� ����� �� ����� ����������� � ��������, ����� �������� ������ � ����������;
���� ����� ��������� ���, ������� ��������������� ���������.
������ �� ����� ����������� � ���������, ������� ���������� ��� ������������ � ������, �������� �������� ������� � ����������;
���� ����� ��������� ���, ������� ��������������� ���������
*/

#include <iostream>
#include <windows.h>

using namespace std;

int main()
{
    setlocale(LC_ALL,"RUS");

    struct MARSH
    {
        char BEGST[20];
        char TERM[20];
        int NUM;
    } TRAFIC[8];

    for(int i=0; i<8; i++)
    {
        cout<<"������� �������� ������ ��������: ";
        cin>>TRAFIC[i].BEGST;

        cout<<"������� �������� ����� ��������: ";
        cin>>TRAFIC[i].TERM;

        cout<<"������� ����� ��������: ";
        cin>>TRAFIC[i].NUM;

        system("cls");
    }

    int Selection;
    int Reselection;
    bool FinishProgram = false;

    while(!FinishProgram)
    {
        cout<<"1. ������ � �������� �� ��� ������."<<endl;
        cout<<"2. ������ � �������� ������� ���������� �����..."<<endl;
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
            int NUM;
            int k=0;
            cout<<"������� ����� ��������: ";
            cin>>NUM;

            for(int i=0; i<8; i++)
                if(NUM==TRAFIC[i].NUM)
                {
                    cout<<"������� �"<<TRAFIC[i].NUM<<" "<<TRAFIC[i].BEGST<<" - "<<TRAFIC[i].TERM<<endl;
                    k++;
                }

            if(k==0)
                cout<<"� ���������, ������ �������� ���"<<endl;

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
            char Punct[20];
            int k=0;

            cout<<"������� �������� ������: ";
            cin>>Punct;

            for(int i=0; i<8; i++)
            {
                if(strcmp(TRAFIC[i].BEGST,Punct)==0)
                {
                    cout<<"������� �"<<TRAFIC[i].NUM<<
                        " ���������� � "<<Punct<<" � ������������� � "<<TRAFIC[i].TERM<<endl;
                    k++;
                }
                if(strcmp(TRAFIC[i].TERM,Punct)==0)
                {
                    cout<<"������� �"<<TRAFIC[i].NUM<<" ������������� � "<<Punct<<
                        " � ���������� � "<<TRAFIC[i].BEGST<<endl;
                    k++;
                }

            }
            if(k==0)
                cout<<"� ���������, ����� ������ ����� �� ���� ������� �� ��������"<<endl;

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
