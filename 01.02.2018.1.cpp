#include <iostream>
#include <stdio.h>
#include <cstring>
#include <windows.h>
#include <ctime>

using namespace std;

main()
{
    srand(time(0));
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    cout<<"\t\t\t����� ����������!"<<endl;

    cout<<"������� ���������� �������: ";
    int n;
    cin>>n;

    Sleep(500);
    system("cls");


    struct Persona
    {
        char Name[50];
        char Surname[50];
        int DayBD;
        int MonthBD;
        int YearBD;
    } p[50];

    for (int i=0; i<n; i++)
    {
        cin.ignore();
        cout<<"������� ������� ��������: ";
        gets(p[i].Surname);

        cout<<"������� ��� ��������: ";
        gets(p[i].Name);

        cout<<"������� ���� ��������: ";
        cin>>p[i].DayBD;

        cout<<"������� ����� ��������: ";
        cin>>p[i].MonthBD;

        cout<<"������� ��� ��������: ";
        cin>>p[i].YearBD;

        cout<<endl<<endl;
        system("cls");


    }


    char y;
    bool yy;

    do
    {
        system("cls");
        int vib=0;

        cout<<"��������, ��� �� ������ ������ � ���� �����:"<<endl<<endl;
        cout<<"1.����, ��� ����� ���������� �� ����� \"�\"."<<endl;
        cout<<"2.����, ��� ��� ������� ����� ����� ������ ��������."<<endl;
        cout<<"3.����� ������� ������� � ������. "<<endl;
        cout<<"4.������� ���� �����. "<<endl;
        cout<<"5.������ ��� ������ ������ ��������. "<<endl;
        cout<<"6.������� ���� ������ �����. "<<endl;
        cout<<endl<<"�� ���������: ";
        cin>>vib;

        Sleep(500);
        system("cls");

        switch(vib)
        {
        case (1):
        {
            cout<<"����, ��� ����� ���������� �� ����� \"�\""<<endl<<endl;
            int k=0;

            for (int i=0; i<n; i++)
            {
                if (p[i].Name[0]=='�')
                {
                    cout<<p[i].Name<<" "<<p[i].Surname<<endl;
                    k++;
                }
            }

            if (k==0)
                cout<<"�����, � ������ �� ����� \"�\" � ������ ������ ���.";

            cout<<endl<<endl<<endl<<"�� ������ ��������� � ���� (y/n): ";
            cin>>y;
            if (y=='y')
                yy=true;
            else
                yy=false;
            break;
        }

        case (2):
        {
            cout<<"������� ����� ��� ��������: ";
            int a, k1=0;
            cin>>a;
            cout<<endl<<endl<<"����, ��� ��� ������� "<<a<<endl<<endl;

            for (int i=0; i<n; i++)
            {
                if (p[i].YearBD==a)
                {
                    cout<<p[i].Name<<" "<<p[i].Surname<<endl;
                    k1++;
                }
            }
            if (k1==0)
                cout<<"�����, � ������ �� ����� \"�\" � ������ ������ ���.";

            cout<<endl<<endl<<endl<<"�� ������ ��������� � ���� (y/n): ";
            cin>>y;
            if (y=='y')
                yy=true;
            else
                yy=false;
            break;

        }

        case (3):
        {


            cout<<"����� ������� ������� � ������: "<<endl;
            int pmax=0;

            for (int j=1; j<n; j++)
            {
                if (p[j].YearBD < p[pmax].YearBD)
                    pmax=j;
                else if (p[j].YearBD==p[pmax].YearBD and p[j].MonthBD < p[pmax].MonthBD)
                    pmax=j;
                else if (p[j].YearBD==p[pmax].YearBD and p[j].MonthBD==p[pmax].MonthBD and p[j].DayBD<p[pmax].DayBD)
                    pmax=j;

            }

            cout<<p[pmax].Name<<" "<<p[pmax].Surname<<endl;

            cout<<endl<<endl<<endl<<"�� ������ ��������� � ���� (y/n): ";
            cin>>y;
            if (y=='y')
                yy=true;
            else
                yy=false;
            break;

        }

        case (4):
        {


            cout<<"������� ���� �����: "<<endl<<endl;
            int god=0,mes=0,deni=0;
            int godN=0, mesN=0,deniN=0;

            cout<<"������� ����������� ���: ";
            cin>>god;
            cout<<"������� ����� ������������ ������: ";
            cin>>mes;
            cout<<"������� ����������� ����: ";
            cin>>deni;

            cout<<endl<<endl;

            for (int i=0; i<n; i++)
            {
                godN=god-p[i].YearBD;//���������� ���

                if (mes<p[i].MonthBD)//���� ���� �������� ��� �� ��������
                {
                    godN--;
                    if (deni==p[i].DayBD)
                    {
                        mesN=12-p[i].MonthBD+mes;
                        deniN=0;
                    }
                    if (deni>p[i].DayBD)
                    {
                        mesN=12-p[i].MonthBD+mes;
                        deniN=deni-p[i].DayBD;
                    }
                    if (deni<p[i].DayBD)
                    {
                        mesN=12-p[i].MonthBD+mes-1;

                        if ((god % 4 == 0) && ((god % 100 != 0) || (god % 400 == 0)))
                        {
                            switch(mes)
                            {
                            case 1:
                            {
                                deniN=31-(p[i].DayBD-deni);
                                break;
                            }
                            case 2:
                            {
                                deniN=31-(p[i].DayBD-deni);
                                break;
                            }
                            case 3:
                            {
                                deniN=29-(p[i].DayBD-deni);
                                break;
                            }
                            case 4:
                            {
                                deniN=30-(p[i].DayBD-deni);
                                break;
                            }
                            case 5:
                            {
                                deniN=30-(p[i].DayBD-deni);
                                break;
                            }
                            case 6:
                            {
                                deniN=31-(p[i].DayBD-deni);
                                break;
                            }
                            case 7:
                            {
                                deniN=30-(p[i].DayBD-deni);
                                break;
                            }
                            case 8:
                            {
                                deniN=31-(p[i].DayBD-deni);
                                break;
                            }
                            case 9:
                            {
                                deniN=31-(p[i].DayBD-deni);
                                break;
                            }
                            case 10:
                            {
                                deniN=30-(p[i].DayBD-deni);
                                break;
                            }
                            case 11:
                            {
                                deniN=31-(p[i].DayBD-deni);
                                break;
                            }
                            case 12:
                            {
                                deniN=30-(p[i].DayBD-deni);
                                break;
                            }
                            }
                        }
                        else
                        {
                            switch(mes)
                            {
                            case 1:
                            {
                                deniN=31-(p[i].DayBD-deni);
                                break;
                            }
                            case 2:
                            {
                                deniN=31-(p[i].DayBD-deni);
                                break;
                            }
                            case 3:
                            {
                                deniN=28-(p[i].DayBD-deni);
                                break;
                            }
                            case 4:
                            {
                                deniN=30-(p[i].DayBD-deni);
                                break;
                            }
                            case 5:
                            {
                                deniN=30-(p[i].DayBD-deni);
                                break;
                            }
                            case 6:
                            {
                                deniN=31-(p[i].DayBD-deni);
                                break;
                            }
                            case 7:
                            {
                                deniN=30-(p[i].DayBD-deni);
                                break;
                            }
                            case 8:
                            {
                                deniN=31-(p[i].DayBD-deni);
                                break;
                            }
                            case 9:
                            {
                                deniN=31-(p[i].DayBD-deni);
                                break;
                            }
                            case 10:
                            {
                                deniN=30-(p[i].DayBD-deni);
                                break;
                            }
                            case 11:
                            {
                                deniN=31-(p[i].DayBD-deni);
                                break;
                            }
                            case 12:
                            {
                                deniN=30-(p[i].DayBD-deni);
                                break;
                            }

                            }

                        }


                    }

                }

                if (mes>p[i].MonthBD) //���� ���� �������� ��� ������
                {
                    deniN=p[i].DayBD-deni;
                    if (deniN<0)
                        deniN*=-1;
                }


                if (mes==p[i].MonthBD) //���� ������ ����� � ���� ����� ���
                {
                    if (deni==p[i].DayBD)
                    {
                        deniN=0;
                        mesN=0;
                    }

                    else if (deni>p[i].DayBD)
                    {
                        deniN=deni-p[i].DayBD;
                    }

                    else if (deni<p[i].DayBD)
                    {
                        godN--;


                        if ((god % 4 == 0) && ((god % 100 != 0) || (god % 400 == 0)))
                        {
                            switch(mes)
                            {
                            case 1:
                            {
                                deniN=31-(p[i].DayBD-deni);
                                break;
                            }
                            case 2:
                            {
                                deniN=31-(p[i].DayBD-deni);
                                break;
                            }
                            case 3:
                            {
                                deniN=29-(p[i].DayBD-deni);
                                break;
                            }
                            case 4:
                            {
                                deniN=30-(p[i].DayBD-deni);
                                break;
                            }
                            case 5:
                            {
                                deniN=30-(p[i].DayBD-deni);
                                break;
                            }
                            case 6:
                            {
                                deniN=31-(p[i].DayBD-deni);
                                break;
                            }
                            case 7:
                            {
                                deniN=30-(p[i].DayBD-deni);
                                break;
                            }
                            case 8:
                            {
                                deniN=31-(p[i].DayBD-deni);
                                break;
                            }
                            case 9:
                            {
                                deniN=31-(p[i].DayBD-deni);
                                break;
                            }
                            case 10:
                            {
                                deniN=30-(p[i].DayBD-deni);
                                break;
                            }
                            case 11:
                            {
                                deniN=31-(p[i].DayBD-deni);
                                break;
                            }
                            case 12:
                            {
                                deniN=30-(p[i].DayBD-deni);
                                break;
                            }
                            }
                        }
                        else
                        {
                            switch(mes)
                            {
                            case 1:
                            {
                                deniN=31-(p[i].DayBD-deni);
                                break;
                            }
                            case 2:
                            {
                                deniN=31-(p[i].DayBD-deni);
                                break;
                            }
                            case 3:
                            {
                                deniN=28-(p[i].DayBD-deni);
                                break;
                            }
                            case 4:
                            {
                                deniN=30-(p[i].DayBD-deni);
                                break;
                            }
                            case 5:
                            {
                                deniN=30-(p[i].DayBD-deni);
                                break;
                            }
                            case 6:
                            {
                                deniN=31-(p[i].DayBD-deni);
                                break;
                            }
                            case 7:
                            {
                                deniN=30-(p[i].DayBD-deni);
                                break;
                            }
                            case 8:
                            {
                                deniN=31-(p[i].DayBD-deni);
                                break;
                            }
                            case 9:
                            {
                                deniN=31-(p[i].DayBD-deni);
                                break;
                            }
                            case 10:
                            {
                                deniN=30-(p[i].DayBD-deni);
                                break;
                            }
                            case 11:
                            {
                                deniN=31-(p[i].DayBD-deni);
                                break;
                            }
                            case 12:
                            {
                                deniN=30-(p[i].DayBD-deni);
                                break;
                            }

                            }

                        }

                    }

                }

                cout<<p[i].Name<<" "<<p[i].Surname<<"  "<<endl<<godN<<" ���, "<<mesN<<" �������, "<<deniN<<" ����."<<endl;


            }

            cout<<endl<<endl<<endl<<"�� ������ ��������� � ���� (y/n): ";
            cin>>y;
            if (y=='y')
                yy=true;
            else
                yy=false;
            break;
        }


        case (5):
        {
            cout<<"������ ���, ������ ������ ��������."<<endl<<endl;

            cout<<"������� ���� �������� (� �������, ���� ������ 20 ���): ";
            int znachenie;
            int pznachenie;
            cin>>znachenie;
            int schet=0;

            znachenie=2018-znachenie;

            cout<<endl<<endl<<endl<<"���� ������ ������ ��������: "<<endl<<endl;

            for (int j=0; j<n; j++)
            {
                if (p[j].YearBD < znachenie)
                {
                    cout<<p[j].Name<<" "<<p[j].Surname<<endl;
                    schet++;
                }

            }

            if (schet==0)
                cout<<"����� ������ ������ �������� ���.";


            cout<<endl<<endl<<endl<<"�� ������ ��������� � ���� (y/n): ";
            cin>>y;
            if (y=='y')
                yy=true;
            else
                yy=false;
            break;

        }


        case (6):
        {
            cout<<"���� ������ �����: "<<endl<<endl;

            for (int i=0; i<n; i++)
            {
                cout<<p[i].Name<<"\t"<<p[i].DayBD<<"\t"<<p[i].MonthBD<<"\t"<<p[i].YearBD<<endl;
            }

            cout<<endl<<endl<<endl<<"�� ������ ��������� � ���� (y/n): ";
            cin>>y;
            if (y=='y')
                yy=true;
            else
                yy=false;
            break;
        }
        }

    }
    while (yy);



}

