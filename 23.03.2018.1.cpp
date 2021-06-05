//"��������� ��� ������ ������ � ������ MARSH, ���������� ��������� ����:
//� BEGST � �������� ���������� ������ ��������;
//� TERM � �������� ��������� ������ ��������;
//� NUMER � ����� ��������.
//�������� ���������, ����������� ��������� ��������:
//� ���� � ���������� ������ � ������ TRAFIC, ��������� �� 8 ������� ���� MARSH;
//� ����� �� ����� ����������� � ��������, ����� �������� ������ � ����������; ���� ����� ��������� ���, ������� ��������������� ���������.
//����� �� ����� ����������� � ���������, ������� ���������� ��� ������������ � ������, �������� �������� ������� � ����������; ���� ����� ��������� ���, ������� ��������������� ���������



#include <iostream>
#include <cstring>
#include <windows.h>

using namespace std;

main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    struct Marsh
    {
        char Begst [80];
        char Term [80];
        int Numer;
    } Trafic[8];


    for(int i=0; i<8; i++)
    {

        cout<<"�������� ���������� ������ ��������: ";
        cin>>Trafic[i].Begst;
        cout<<"�������� ��������� ������ ��������: ";
        cin>>Trafic[i].Term;
        cout<<"����� ��������: ";
        cin>>Trafic[i].Numer;
        cout<<endl;
    }

    bool c=true;

    //����� �� ������ ��������
    do
    {
        cout<<"\n\n�������� ����� ��������: ";
        int Number;
        bool y=true;
        cin>>Number;

        for (int i=0; i<8; i++)
        {
            if (Trafic[i].Numer==Number)//�������� �� ����������
            {
                y=false;
                cout<<"�������� ���������� ������ ��������: "<<Trafic[i].Begst<<endl;
                cout<<"�������� ��������� ������ ��������: "<<Trafic[i].Term<<endl;
                cout<<"����� ��������: "<<Trafic[i].Numer<<endl;
            }
        }
        if (y)
            cout<<"������ �������� ���";


        cout<<endl<<endl<<"�� ������ ���������?";
        cout<<endl<<"1. ��."<<endl;
        cout<<"2. ���."<<endl;
        cout<<"����� = ";
        int Select;
        cin>>Select;
        if (Select==1)
            c=true;
        else if (Select==2)
            c=false;
    }
    while (c);

    //�������� �� ���������� ���������
    do
    {
        cout<<"\n\n�������� ����� ������� ��� �������� ��������: ";
        char Name[30];
        bool y=true;
        cin>>Name;

        for (int i=0; i<8; i++)
        {
            if (strcmp(Trafic[i].Begst,Name)==0 or strcmp(Trafic[i].Term,Name)==0)//�������� �� ����������
            {
                y=false;
                cout<<"�������� ���������� ������ ��������: "<<Trafic[i].Begst<<endl;
                cout<<"�������� ��������� ������ ��������: "<<Trafic[i].Term<<endl;
                cout<<"����� ��������: "<<Trafic[i].Numer<<endl;
            }
        }
        if (y)
            cout<<"������ �������� ���";

        cout<<endl<<endl<<"�� ������ ���������?";
        cout<<endl<<"1. ��."<<endl;
        cout<<"2. ���."<<endl;
        cout<<"����� = ";
        int Select;
        cin>>Select;
        if (Select==1)
            c=true;
        else if (Select==2)
            c=false;
    }
    while (c);
}
