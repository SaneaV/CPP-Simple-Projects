/*��� ��������� ������ ������������� �������� ��������:
-����� ���������� �������;
-�������� ������ ��������;
-������������� �����, �� ������� ����������������� ��������;
-��� ������ �������� (�������������� �����, �������, �������������� �����, ��������������� ��������, ���������� � �.�.);
-������ ������ ��������;
-����� ������ ��������.
�������� ���������, ������� ������� �� �����:
� ������ ������� ��������� �������������� ������;
� ������ �������������� �������;
� ���������� ������� � ���� ��������.*/

#include <iostream>
#include <stdio.h>
#include <iomanip>
#include <windows.h>

using namespace std;

main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    struct TV
    {
        int Number; //����� ������������
        char NameTelecast [30]; //�������� ������������
        char NameChannel [15]; //�������� ����������
        char TypeTelecast [15]; //���� ������������
        int TimeStart; //������ ������������
        int TimeFinish; //����� ������������
    } InfoTV[30];


    int n; //���������� �������


    cout<<"������� ���������� �������: ";
    while (!(cin>>n))//������ �������� � ���� ��� �� �����, ���������� ���� (! - not)
    {
        cout<<"������, �� ����� ���-�� �� ��.\n ";
        cin.clear();//������� �����
        cin.sync();//������� ������ �� �������
        cout<<"\n������� ���������� �������: ";
    }
    system("cls");

    cin.ignore();//������� �����

    for (int i=0; i<n; i++)
    {
        InfoTV[i].Number=i+1;//���������� ����� ������������ ����� ����� i++
        cout<<"������� �������� ������������: ";
        gets(InfoTV[i].NameTelecast);
        cout<<"������� �������� ����������: ";
        gets(InfoTV[i].NameChannel);
        cout<<"������� ���� ������������(������): ";
        gets(InfoTV[i].TypeTelecast);
        cout<<"������� ����� ������ ������������ (������ ����(hh)): ";
        while (!(cin>>InfoTV[i].TimeStart) or InfoTV[i].TimeStart>=24 or InfoTV[i].TimeStart<=-1)//������ �������� � ���� ��� �� �����, ���������� ���� (! - not)
        {
            cout<<"������, �� ����� ���-�� �� ��.\n ";
            cin.clear();//������� �����
            cin.sync();//������� ������ �� �������
            cout<<"\n������� ����� ������ ������������ (������ ����(hh)): ";
        }
        cout<<"������� ����� ����� ������������ (������ ���� (hh)): ";
        while (!(cin>>InfoTV[i].TimeFinish) or InfoTV[i].TimeFinish>=24 or InfoTV[i].TimeFinish<=-1)//������ �������� � ���� ��� �� �����, ���������� ���� (! - not)
        {
            cout<<"������, �� ����� ���-�� �� ��.\n ";
            cin.clear();//������� �����
            cin.sync();//������� ������ �� �������
            cout<<"\n������� ����� ����� ������������ (������ ���� (hh)): ";
        }

        system("cls");//������� �������
        cin.ignore();//������� �����
    }



    bool y=true;
    char vib1;


    do
    {
        bool x=true;
        cout<<setw(40)<<"�� ���������� � ����."<<endl<<endl;

        cout<<"1. ����������� ���� ������ ��������."<<endl;
        cout<<"2. ����������� ������ ������� ��������� ������."<<endl;
        cout<<"3. ����������� ������ �������������� ������������."<<endl;
        cout<<"4. ����������� ���������� ������� ��������� ��������."<<endl;
        cout<<"5. ����� �� ���������."<<endl;

        cout<<"\n\n������� ��� �����: ";
        int vib;
        while (!(cin>>vib) or vib>6 or vib<1)//������ �������� � ���� ��� �� �����, ���������� ���� (! - not)
        {
            cout<<"������, �� ����� ���-�� �� ��.\n ";
            cin.clear();//������� �����
            cin.sync();//������� ������ �� �������
            cout<<"\n������� ��� �����: ";
        }

        system("cls");


        switch (vib)
        {
        case 1:
        {
            cout<<"1. ����������� ���� ������ ��������. ";
            cout<<"\n\n\n";

            cout << "�" <<setw(30)<< "�������������" <<setw(20)<< "��������� " <<setw(16)<<"����\t" <<setw(5)<< "������\t" <<setw(5)<< "�����"<< endl;
            cout << "==============================================================================================" << endl;
            for (int i=0; i<n; i++)
            {
                cout<<InfoTV[i].Number<<setw(30)<<InfoTV[i].NameTelecast<<setw(20)<<InfoTV[i].NameChannel<<setw(15)<<InfoTV[i].TypeTelecast<<setw(8)<<InfoTV[i].TimeStart<<":00"<<setw(5)<<InfoTV[i].TimeFinish<<":00"<<endl;
            }
            cout<<endl<<endl<<"���� �� ������ ��������� � ���� - y/Y ��� �/�";
            cout<<endl<<"���� �� ������ ����� �� ��������� - n/N ��� �/�";
            cout<<endl<<endl<<"�� ���������: ";

            while (x)
            {
                cin>>vib1;
                if (vib1=='y' or vib1=='n' or vib1=='Y' or vib1=='N' or vib1=='�' or vib1=='�' or vib1=='�' or vib1=='�')
                    x=false;
                else
                    cout<<"\n\n��������� ����: ";

            }
            break;
        }
        case 2:
        {
            cout<<"2. ����������� ������ ������� ��������� ������.";
            cout<<"\n\n\n";
            int k=0;

            cout<<"������� �������� ����������: ";
            char Channel[15];
            cin.ignore();
            gets(Channel);

            cout << "�" <<setw(30)<< "�������������" <<setw(20)<< "��������� " <<setw(16)<<"����\t" <<setw(5)<< "������\t" <<setw(5)<< "�����"<< endl;
            cout << "==============================================================================================" << endl;
            for (int i=0; i<n; i++)
            {
                if (strcmp(Channel,InfoTV[i].NameChannel)==0)
                {
                    k++;
                    cout<<InfoTV[i].Number<<setw(30)<<InfoTV[i].NameTelecast<<setw(20)<<InfoTV[i].NameChannel<<setw(15)<<InfoTV[i].TypeTelecast<<setw(8)<<InfoTV[i].TimeStart<<":00"<<setw(5)<<InfoTV[i].TimeFinish<<":00"<<endl;
                }

            }

            if (k==0)
            {
                system("cls");
                cout<<"2. ����������� ������ ������� ��������� ������.";
                cout<<"\n\n\n";

                cout<<"��������� ������� ��� ����� ������ ����������.";
            }
            cout<<endl<<endl<<"���� �� ������ ��������� � ���� - y/Y ��� �/�";
            cout<<endl<<"���� �� ������ ����� �� ��������� - n/N ��� �/�";
            cout<<endl<<endl<<"�� ���������: ";

            while (x)
            {
                cin>>vib1;
                if (vib1=='y' or vib1=='n' or vib1=='Y' or vib1=='N' or vib1=='�' or vib1=='�' or vib1=='�' or vib1=='�')
                    x=false;
                else
                    cout<<"\n\n��������� ����: ";

            }
            break;
        }

        case 3:
        {
            {
                cout<<"3. ����������� ������ �������������� ������������.";
                cout<<"\n\n\n";
                int t=0;

                cout << "�" <<setw(30)<< "�������������" <<setw(20)<< "��������� " <<setw(16)<<"����\t" <<setw(5)<< "������\t" <<setw(5)<< "�����"<< endl;
                cout << "==============================================================================================" << endl;
                for (int i=0; i<n; i++)
                {
                    if (InfoTV[i].TypeTelecast[0]=='�' or InfoTV[i].TypeTelecast[0]=='�' and InfoTV[i].TypeTelecast[1]=='�' and InfoTV[i].TypeTelecast[2]=='�')
                    {
                        t++;
                        cout<<InfoTV[i].Number<<setw(30)<<InfoTV[i].NameTelecast<<setw(20)<<InfoTV[i].NameChannel<<setw(15)<<InfoTV[i].TypeTelecast<<setw(8)<<InfoTV[i].TimeStart<<":00"<<setw(5)<<InfoTV[i].TimeFinish<<":00"<<endl;
                    }

                }

                if (t==0)
                {
                    system("cls");
                    cout<<"3. ����������� ������ �������������� ������������.";
                    cout<<"\n\n\n";

                    cout<<"�������������� ��������� ����������";
                }
                cout<<endl<<endl<<"���� �� ������ ��������� � ���� - y/Y ��� �/�";
                cout<<endl<<"���� �� ������ ����� �� ��������� - n/N ��� �/�";
                cout<<endl<<endl<<"�� ���������: ";

                while (x)
                {
                    cin>>vib1;
                    if (vib1=='y' or vib1=='n' or vib1=='Y' or vib1=='N' or vib1=='�' or vib1=='�' or vib1=='�' or vib1=='�')
                        x=false;
                    else
                        cout<<"\n\n��������� ����: ";

                }
                break;
            }
        }
        case 4:

        {
            cout<<"4. ����������� ���������� ������� ��������� ��������.";
            cout<<"\n\n\n";
            int c=0;

            cout<<"� ���� ���� ������ ���� �������� \"�������\" ��� \"�������\""<<endl<<endl;
            char N1[15]="�������";
            char N2[15]="�������";


            cout<<"1. ������ ������ ���������� ��������� ��������."<<endl;
            cout<<"2. ������ ����� � ����� �� ������� ����� �������."<<endl;
            cout<<"������� ��� �����: ";
            int vib3;

            while (!(cin>>vib3) or vib3>2 or vib3<1)//������ �������� � ���� ��� �� �����, ���������� ���� (! - not)
            {
                cout<<"������, �� ����� ���-�� �� ��.\n ";
                cin.clear();//������� �����
                cin.sync();//������� ������ �� �������
                cout<<"\n������� ��� �����: ";
            }

            if (vib3==2)
            {
                cout << "�" <<setw(30)<< "�������������" <<setw(20)<< "��������� " <<setw(16)<<"����\t" <<setw(5)<< "������\t" <<setw(5)<< "�����"<< endl;
                cout << "==============================================================================================" << endl;
            }
            for (int i=0; i<n; i++)
            {
                if (strcmp(InfoTV[i].TypeTelecast,N1)==0 or strcmp(InfoTV[i].TypeTelecast,N2)==0)
                {
                    c++;
                    if (vib3==2)
                        cout<<InfoTV[i].Number<<setw(30)<<InfoTV[i].NameTelecast<<setw(20)<<InfoTV[i].NameChannel<<setw(15)<<InfoTV[i].TypeTelecast<<setw(8)<<InfoTV[i].TimeStart<<":00"<<setw(5)<<InfoTV[i].TimeFinish<<":00"<<endl;
                }

            }
            cout<<endl<<"���������� ��������� ��������: "<< c;

            if (c==0)
            {
                system("cls");
                cout<<"4. ����������� ���������� ������� ��������� ��������.";
                cout<<"\n\n\n";

                cout<<"��������� ��������� ����������";
            }
            cout<<endl<<endl<<"���� �� ������ ��������� � ���� - y/Y ��� �/�";
            cout<<endl<<"���� �� ������ ����� �� ��������� - n/N ��� �/�";
            cout<<endl<<endl<<"�� ���������: ";

            while (x)
            {
                cin>>vib1;
                if (vib1=='y' or vib1=='n' or vib1=='Y' or vib1=='N' or vib1=='�' or vib1=='�' or vib1=='�' or vib1=='�')
                    x=false;
                else
                    cout<<"\n\n��������� ����: ";

            }
            break;
        }

        case 5:
        {
            y=false;
            vib1='n';
            break;
        }
        }

        if (vib1=='y' or vib1=='Y' or vib1=='�' or vib1=='�')
            y=true;
        else if (vib1=='n' or vib1=='N' or vib1=='�' or vib1=='�')
            y=false;

        system("cls");

    }
    while (y);

}



