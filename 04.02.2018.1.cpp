#include <ctime>
#include <iostream>
#include <windows.h>
#include <conio.h>
#include <stdlib.h>
#include <iomanip>
#include <stdio.h>


using namespace std;

main()
{
    srand(time(0));
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    cout<<setw(40)<<"��������� P1713"<<endl;
    Sleep(1000);
    system("cls");

    cout<<fixed<<setw(40)<<"���� ����������� �� �����: SaneaVicev@mail.ru"<<endl;
    Sleep(2000);
    system("cls");

    cout<<"������ ���� �������: ";
    char nik[20];

    gets(nik);
    Sleep(500);



    system ("cls");

    cout<<setw(50)<<nik<<", ����� ���������� � 99 games in 1"<<endl;

    cout<<"\n�� ������ ������ �� ������ �������� �: ";
    cout<<"\n\n1. ��������.";
    cout<<"\n2. ���� �����.";
    cout<<"\n\n�� ��� ������ ������: ";

    int vib;

    while (!(cin>>vib))//������ �������� � ���� ��� �� �����, ���������� ���� (! - not)
    {
        cout<<"������, �� ����� ���-�� �� ��. ";
        cin.clear();//������� �����
        cin.sync();//������� ������ �� �������
        cout<<"\n�� ��� ������ ������: ";
    }

    switch (vib)
    {
    case 1:
    {
        char Slova[1000]= {"����, ������, ������, �������, ���������, �������, ��������, ���, ����, �����, ����������, ����������, ����������, ������, ���������, �������, ������, �������, ��������, ����, ����, �����, ������, ����, ������, �����, �����, ��, ����, ����������, �������, �����, ����������, ����������������, �������, �������, ������, ��������, �������, �������, �������, �������, �������, �����, ��������, ������, ����, ��������, ������������, ���������, ������, ��������, ��������, ������, ���, �����, ����, �����, ��������, ���������"};
        char Razdel[5]=", ";

        char *pch=strtok(Slova,Razdel);

        int randomvisel= (rand() % 28);

        char slovovisel[30];
        int k;

        while (pch!=NULL)
        {
            if (k==randomvisel) strcpy(slovovisel,pch);
            pch=strtok(NULL,Razdel);
            k++;
        }

        system("cls");
        cout<<setw(40)<<"��������"<<endl;
        cout<<"1. � �������� (4 ��������)";
        cout<<"\n2. � ������. (2 ��������)";
        cout<<"\n3. C ������. (1 �������)";
        cout<<"\n4. � �����. (1 �������)";

        cout<<"\n\n�� ������ ������: ";

        int ViselitaVib;

        while (!(cin>>ViselitaVib))//������ �������� � ���� ��� �� �����, ���������� ���� (! - not)
        {
            cout<<"������, �� ����� ���-�� �� ��. ";
            cin.clear();//������� �����
            cin.sync();//������� ������ �� �������
            cout<<"\nC ��� �� ������ ������?: ";
        }
        system("cls");

        switch (ViselitaVib)
        {
        case 1:
        {
            cout<<"� ��� ���� �������� ����� ������ ������ 4 ��������.";
            cout<<endl<<nik<<", �� ��� �������, � ��� ����� ������ �������?";
            cout<<endl<<endl<<"����� ����� 1 - "<< nik;
            cout<<endl<<endl<<"����� ����� 2 - ";
            char nik2[20];
            cin>>nik2;
            cout<<endl<<"����� ����� 3 - ";
            char nik3[20];
            cin>>nik3;
            cout<<endl<<"����� ����� 4 - ";
            char nik4[20];
            cin>>nik4;

            system("cls");

            int dlinaslova = strlen(slovovisel);
            int schetchik=0;
            char bukva;
            int bukva2=0;
            char vivodslova[30];
            bool y=false;

            for (int i=0; i<dlinaslova; i++)
            {
                vivodslova[i]='.';
                vivodslova[dlinaslova]=NULL;
            }

            int shag=0, ugadal=1;
            int pobeda = 1;

            int score1=0,score2=0,score3=0,score4=0;
            int live1=10,live2=10,live3=10,live4=10;


            char x[40];
            int proverka=0;
            int proverkahoda=-1;

            while (schetchik!=999)
            {

                y=false;
                cout<<setw(40)<<"��������!";
                cout<<endl<<endl;
                shag=0, ugadal=1;
                proverkahoda++;
                while (ugadal>shag and schetchik!=999 and live1!=0)
                {
                    schetchik=0, bukva2=0;
                    ++shag;
                    puts(vivodslova);
                    cout<<endl<<endl;
                    cout<<endl<<"\n����� ������� "<<nik<<": ";
                    cin>>bukva;
                    for (int i=proverkahoda; i<=proverkahoda; i++)
                    {
                        x[proverkahoda]=bukva;
                    }
                    cout<<endl<<endl<<"��� ����: "<<score1<<endl;

                    for (int i=0; i<dlinaslova; i++)
                    {
                        if (slovovisel[i]==bukva)
                        {
                            y=true;
                            score1+=10;
                            schetchik++;
                            ugadal++;
                            for (int pobeda=0,j=0; j<dlinaslova; j++)
                            {
                                if (slovovisel[j]==bukva and vivodslova[j]=='.') vivodslova[j]=slovovisel[i];
                                if (vivodslova[j]!='.') pobeda++;
                                if (pobeda==dlinaslova)
                                {
                                    schetchik=999;
                                    ugadal--;
                                }
                                while (shag>=0 or ugadal>=1)
                                {
                                    if (shag>=0) shag--;
                                    if (ugadal>=1) ugadal--;
                                }
                            }
                        }
                    }

                    if (schetchik==bukva2)
                    {
                        cout<<endl<<"����� �� ������ �����. ";
                        cout<<endl<<"���������� ����� ������: "<<live1--<<endl;
                        if (live1==0) cout<<endl<<"�� ���������."<<endl;
                        if (live1==9) cout<<"\n\n\n\n\n__()__";
                        if (live1==8)
                        {
                            cout<<"  ()"<<endl;
                            cout<<"  ()"<<endl;
                            cout<<"  ()"<<endl;
                            cout<<"__()__";
                        }
                        if (live1==7)
                        {
                            cout<<"  >>>>>>>"<<endl;
                            cout<<"  ()"<<endl;
                            cout<<"  ()"<<endl;
                            cout<<"  ()"<<endl;
                            cout<<"__()__";
                        }
                        if (live1==6)
                        {
                            cout<<"  >>>>>>>"<<endl;
                            cout<<"  ()    |"<<endl;
                            cout<<"  ()"<<endl;
                            cout<<"  ()"<<endl;
                            cout<<"__()__";
                        }
                        if (live1==5)
                        {
                            cout<<"  >>>>>>>"<<endl;
                            cout<<"  ()    |"<<endl;
                            cout<<"  ()    o"<<endl;
                            cout<<"  ()"<<endl;
                            cout<<"__()__";
                        }
                        if (live1==4)
                        {
                            cout<<"  >>>>>>>"<<endl;
                            cout<<"  ()    |"<<endl;
                            cout<<"  ()    o"<<endl;
                            cout<<"  ()    |"<<endl;
                            cout<<"__()__";
                        }
                        if (live1==3)
                        {
                            cout<<"  >>>>>>>"<<endl;
                            cout<<"  ()    |"<<endl;
                            cout<<"  ()    o"<<endl;
                            cout<<"  ()   /|"<<endl;
                            cout<<"__()__ ";
                        }
                        if (live1==2)
                        {
                            cout<<"  >>>>>>>"<<endl;
                            cout<<"  ()    |"<<endl;
                            cout<<"  ()    o"<<endl;
                            cout<<"  ()   /|"<<endl;
                            cout<<"__()__ / ";
                        }
                        if (live1==1)
                        {
                            cout<<"  >>>>>>>"<<endl;
                            cout<<"  ()    |"<<endl;
                            cout<<"  ()    o"<<endl;
                            cout<<"  ()   /|"<<endl;
                            cout<<"__()__ / \\";
                        }
                        if (live1==0)
                        {
                            cout<<"  >>>>>>>"<<endl;
                            cout<<"  ()    |"<<endl;
                            cout<<"  ()    o"<<endl;
                            cout<<"  ()   /|\\"<<endl;
                            cout<<"__()__ / \\";
                        }
                    }
                    else
                    {
                        proverka=0;
                        for (int i=0; i<dlinaslova; i++)
                        {
                            if (slovovisel[i]==bukva) proverka++;
                            if (proverka>=1) bukva2++;
                        }
                        cout<<endl<<"����� ������ �����!"<<endl<<endl;

                    }

                    cout<<endl<<endl<<"�����, ������� ��� ��������: ";
                    for (int i=0; i<=proverkahoda; i++)
                    {
                        cout<<x[i]<<" ";
                    }
                    cout<<endl<<endl;
                    Sleep(3000);
                    if (schetchik!=0 or y) cout<<"##########################################################################################"<<endl<<endl;
                }
                if (live1!=0) system("cls");


                y=false;
                cout<<setw(40)<<"��������!";
                cout<<endl<<endl;
                shag=0, ugadal=1;
                proverkahoda++;
                while (ugadal>shag and schetchik!=999 and live2!=0)
                {
                    schetchik=0, bukva2=0;
                    ++shag;
                    puts(vivodslova);
                    cout<<endl<<endl;
                    cout<<endl<<"\n����� ������� "<<nik2<<": ";
                    cin>>bukva;
                    for (int i=proverkahoda; i<=proverkahoda; i++)
                    {
                        x[proverkahoda]=bukva;
                    }
                    cout<<endl<<endl<<"��� ����: "<<score2<<endl;

                    for (int i=0; i<dlinaslova; i++)
                    {
                        if (slovovisel[i]==bukva)
                        {
                            y=true;
                            score2+=10;
                            schetchik++;
                            ugadal++;
                            for (int pobeda=0,j=0; j<dlinaslova; j++)
                            {
                                if (slovovisel[j]==bukva and vivodslova[j]=='.') vivodslova[j]=slovovisel[i];
                                if (vivodslova[j]!='.') pobeda++;
                                if (pobeda==dlinaslova)
                                {
                                    schetchik=999;
                                    ugadal--;
                                }
                                while (shag>=0 or ugadal>=1)
                                {
                                    if (shag>=0) shag--;
                                    if (ugadal>=1) ugadal--;
                                }
                            }
                        }
                    }

                    if (schetchik==bukva2)
                    {
                        cout<<endl<<"����� �� ������ �����. ";
                        cout<<endl<<"���������� ����� ������: "<<live2--<<endl;
                        if (live2==0) cout<<endl<<"�� ���������."<<endl;
                        if (live2==9) cout<<"\n\n\n\n\n__()__";
                        if (live2==8)
                        {
                            cout<<"  ()"<<endl;
                            cout<<"  ()"<<endl;
                            cout<<"  ()"<<endl;
                            cout<<"__()__";
                        }
                        if (live2==7)
                        {
                            cout<<"  >>>>>>>"<<endl;
                            cout<<"  ()"<<endl;
                            cout<<"  ()"<<endl;
                            cout<<"  ()"<<endl;
                            cout<<"__()__";
                        }
                        if (live2==6)
                        {
                            cout<<"  >>>>>>>"<<endl;
                            cout<<"  ()    |"<<endl;
                            cout<<"  ()"<<endl;
                            cout<<"  ()"<<endl;
                            cout<<"__()__";
                        }
                        if (live2==5)
                        {
                            cout<<"  >>>>>>>"<<endl;
                            cout<<"  ()    |"<<endl;
                            cout<<"  ()    o"<<endl;
                            cout<<"  ()"<<endl;
                            cout<<"__()__";
                        }
                        if (live2==4)
                        {
                            cout<<"  >>>>>>>"<<endl;
                            cout<<"  ()    |"<<endl;
                            cout<<"  ()    o"<<endl;
                            cout<<"  ()    |"<<endl;
                            cout<<"__()__";
                        }
                        if (live2==3)
                        {
                            cout<<"  >>>>>>>"<<endl;
                            cout<<"  ()    |"<<endl;
                            cout<<"  ()    o"<<endl;
                            cout<<"  ()   /|"<<endl;
                            cout<<"__()__ ";
                        }
                        if (live2==2)
                        {
                            cout<<"  >>>>>>>"<<endl;
                            cout<<"  ()    |"<<endl;
                            cout<<"  ()    o"<<endl;
                            cout<<"  ()   /|"<<endl;
                            cout<<"__()__ / ";
                        }
                        if (live2==1)
                        {
                            cout<<"  >>>>>>>"<<endl;
                            cout<<"  ()    |"<<endl;
                            cout<<"  ()    o"<<endl;
                            cout<<"  ()   /|"<<endl;
                            cout<<"__()__ / \\";
                        }
                        if (live2==0)
                        {
                            cout<<"  >>>>>>>"<<endl;
                            cout<<"  ()    |"<<endl;
                            cout<<"  ()    o"<<endl;
                            cout<<"  ()   /|\\"<<endl;
                            cout<<"__()__ / \\";
                        }
                    }
                    else
                    {
                        proverka=0;
                        for (int i=0; i<dlinaslova; i++)
                        {
                            if (slovovisel[i]==bukva) proverka++;
                            if (proverka>=1) bukva2++;
                        }
                        cout<<endl<<"����� ������ �����!"<<endl<<endl;
                    }
                    cout<<endl<<endl<<"�����, ������� ��� ��������: ";
                    for (int i=0; i<=proverkahoda; i++)
                    {
                        cout<<x[i]<<" ";
                    }
                    cout<<endl<<endl;
                    Sleep(3000);
                    if (schetchik!=0 or y) cout<<"##########################################################################################"<<endl<<endl;
                }
                if (live2!=0) system("cls");




                y=false;
                cout<<setw(40)<<"��������!";
                cout<<endl<<endl;
                shag=0, ugadal=1;
                proverkahoda++;
                while (ugadal>shag and schetchik!=999 and live3!=0)
                {
                    schetchik=0, bukva2=0;
                    ++shag;
                    puts(vivodslova);
                    cout<<endl<<endl;
                    cout<<endl<<"\n����� ������� "<<nik3<<": ";
                    cin>>bukva;
                    for (int i=proverkahoda; i<=proverkahoda; i++)
                    {
                        x[proverkahoda]=bukva;
                    }
                    cout<<endl<<endl<<"��� ����: "<<score3<<endl;

                    for (int i=0; i<dlinaslova; i++)
                    {
                        if (slovovisel[i]==bukva)
                        {
                            y=true;
                            score3+=10;
                            schetchik++;
                            ugadal++;
                            for (int pobeda=0,j=0; j<dlinaslova; j++)
                            {
                                if (slovovisel[j]==bukva and vivodslova[j]=='.') vivodslova[j]=slovovisel[i];
                                if (vivodslova[j]!='.') pobeda++;
                                if (pobeda==dlinaslova)
                                {
                                    schetchik=999;
                                    ugadal--;
                                }
                                while (shag>=0 or ugadal>=1)
                                {
                                    if (shag>=0) shag--;
                                    if (ugadal>=1) ugadal--;
                                }
                            }
                        }
                    }

                    if (schetchik==bukva2)
                    {
                        cout<<endl<<"����� �� ������ �����. ";
                        cout<<endl<<"���������� ����� ������: "<<live3--<<endl;
                        if (live3==0) cout<<endl<<"�� ���������."<<endl;
                        if (live3==9) cout<<"\n\n\n\n\n__()__";
                        if (live3==8)
                        {
                            cout<<"  ()"<<endl;
                            cout<<"  ()"<<endl;
                            cout<<"  ()"<<endl;
                            cout<<"__()__";
                        }
                        if (live3==7)
                        {
                            cout<<"  >>>>>>>"<<endl;
                            cout<<"  ()"<<endl;
                            cout<<"  ()"<<endl;
                            cout<<"  ()"<<endl;
                            cout<<"__()__";
                        }
                        if (live3==6)
                        {
                            cout<<"  >>>>>>>"<<endl;
                            cout<<"  ()    |"<<endl;
                            cout<<"  ()"<<endl;
                            cout<<"  ()"<<endl;
                            cout<<"__()__";
                        }
                        if (live3==5)
                        {
                            cout<<"  >>>>>>>"<<endl;
                            cout<<"  ()    |"<<endl;
                            cout<<"  ()    o"<<endl;
                            cout<<"  ()"<<endl;
                            cout<<"__()__";
                        }
                        if (live3==4)
                        {
                            cout<<"  >>>>>>>"<<endl;
                            cout<<"  ()    |"<<endl;
                            cout<<"  ()    o"<<endl;
                            cout<<"  ()    |"<<endl;
                            cout<<"__()__";
                        }
                        if (live3==3)
                        {
                            cout<<"  >>>>>>>"<<endl;
                            cout<<"  ()    |"<<endl;
                            cout<<"  ()    o"<<endl;
                            cout<<"  ()   /|"<<endl;
                            cout<<"__()__ ";
                        }
                        if (live3==2)
                        {
                            cout<<"  >>>>>>>"<<endl;
                            cout<<"  ()    |"<<endl;
                            cout<<"  ()    o"<<endl;
                            cout<<"  ()   /|"<<endl;
                            cout<<"__()__ / ";
                        }
                        if (live3==1)
                        {
                            cout<<"  >>>>>>>"<<endl;
                            cout<<"  ()    |"<<endl;
                            cout<<"  ()    o"<<endl;
                            cout<<"  ()   /|"<<endl;
                            cout<<"__()__ / \\";
                        }
                        if (live3==0)
                        {
                            cout<<"  >>>>>>>"<<endl;
                            cout<<"  ()    |"<<endl;
                            cout<<"  ()    o"<<endl;
                            cout<<"  ()   /|\\"<<endl;
                            cout<<"__()__ / \\";
                        }
                    }
                    else
                    {
                        proverka=0;
                        for (int i=0; i<dlinaslova; i++)
                        {
                            if (slovovisel[i]==bukva) proverka++;
                            if (proverka>=1) bukva2++;
                        }
                        cout<<endl<<"����� ������ �����!"<<endl<<endl;
                    }
                    cout<<endl<<endl<<"�����, ������� ��� ��������: ";
                    for (int i=0; i<=proverkahoda; i++)
                    {
                        cout<<x[i]<<" ";
                    }
                    cout<<endl<<endl;
                    Sleep(3000);
                    if (schetchik!=0 or y) cout<<"##########################################################################################"<<endl<<endl;
                }
                if (live3!=0) system("cls");




                y=false;
                cout<<setw(40)<<"��������!";
                cout<<endl<<endl;
                shag=0, ugadal=1;
                proverkahoda++;
                while (ugadal>shag and schetchik!=999 and live4!=0)
                {
                    schetchik=0, bukva2=0;
                    ++shag;
                    puts(vivodslova);
                    cout<<endl<<endl;
                    cout<<endl<<"\n����� ������� "<<nik4<<": ";
                    cin>>bukva;
                    for (int i=proverkahoda; i<=proverkahoda; i++)
                    {
                        x[proverkahoda]=bukva;
                    }
                    cout<<endl<<endl<<"��� ����: "<<score4<<endl;

                    for (int i=0; i<dlinaslova; i++)
                    {
                        if (slovovisel[i]==bukva)
                        {
                            y=true;
                            score4+=10;
                            schetchik++;
                            ugadal++;
                            for (int pobeda=0,j=0; j<dlinaslova; j++)
                            {
                                if (slovovisel[j]==bukva and vivodslova[j]=='.') vivodslova[j]=slovovisel[i];
                                if (vivodslova[j]!='.') pobeda++;
                                if (pobeda==dlinaslova)
                                {
                                    schetchik=999;
                                    ugadal--;
                                }
                                while (shag>=0 or ugadal>=1)
                                {
                                    if (shag>=0) shag--;
                                    if (ugadal>=1) ugadal--;
                                }
                            }
                        }
                    }

                    if (schetchik==bukva2)
                    {
                        cout<<endl<<"����� �� ������ �����. ";
                        cout<<endl<<"���������� ����� ������: "<<live4--<<endl;
                        if (live4==0) cout<<endl<<"�� ���������."<<endl;
                        if (live4==9) cout<<"\n\n\n\n\n__()__";
                        if (live4==8)
                        {
                            cout<<"  ()"<<endl;
                            cout<<"  ()"<<endl;
                            cout<<"  ()"<<endl;
                            cout<<"__()__";
                        }
                        if (live4==7)
                        {
                            cout<<"  >>>>>>>"<<endl;
                            cout<<"  ()"<<endl;
                            cout<<"  ()"<<endl;
                            cout<<"  ()"<<endl;
                            cout<<"__()__";
                        }
                        if (live4==6)
                        {
                            cout<<"  >>>>>>>"<<endl;
                            cout<<"  ()    |"<<endl;
                            cout<<"  ()"<<endl;
                            cout<<"  ()"<<endl;
                            cout<<"__()__";
                        }
                        if (live4==5)
                        {
                            cout<<"  >>>>>>>"<<endl;
                            cout<<"  ()    |"<<endl;
                            cout<<"  ()    o"<<endl;
                            cout<<"  ()"<<endl;
                            cout<<"__()__";
                        }
                        if (live4==4)
                        {
                            cout<<"  >>>>>>>"<<endl;
                            cout<<"  ()    |"<<endl;
                            cout<<"  ()    o"<<endl;
                            cout<<"  ()    |"<<endl;
                            cout<<"__()__";
                        }
                        if (live4==3)
                        {
                            cout<<"  >>>>>>>"<<endl;
                            cout<<"  ()    |"<<endl;
                            cout<<"  ()    o"<<endl;
                            cout<<"  ()   /|"<<endl;
                            cout<<"__()__ ";
                        }
                        if (live4==2)
                        {
                            cout<<"  >>>>>>>"<<endl;
                            cout<<"  ()    |"<<endl;
                            cout<<"  ()    o"<<endl;
                            cout<<"  ()   /|"<<endl;
                            cout<<"__()__ / ";
                        }
                        if (live4==1)
                        {
                            cout<<"  >>>>>>>"<<endl;
                            cout<<"  ()    |"<<endl;
                            cout<<"  ()    o"<<endl;
                            cout<<"  ()   /|"<<endl;
                            cout<<"__()__ / \\";
                        }
                        if (live4==0)
                        {
                            cout<<"  >>>>>>>"<<endl;
                            cout<<"  ()    |"<<endl;
                            cout<<"  ()    o"<<endl;
                            cout<<"  ()   /|\\"<<endl;
                            cout<<"__()__ / \\";
                        }
                    }
                    else
                    {
                        proverka=0;
                        for (int i=0; i<dlinaslova; i++)
                        {
                            if (slovovisel[i]==bukva) proverka++;
                        }
                        if (proverka>=1) bukva2++;
                        cout<<endl<<"����� ������ �����!"<<endl<<endl;
                    }
                    cout<<endl<<endl<<"�����, ������� ��� ��������: ";
                    for (int i=0; i<=proverkahoda; i++)
                    {
                        cout<<x[i]<<" ";
                    }
                    cout<<endl<<endl;
                    Sleep(3000);
                    if (schetchik!=0 or y) cout<<"##########################################################################################"<<endl<<endl;
                }
                if (live4!=0) system("cls");

                if (live1==0 and live2==0 and live3==0 and live4==0)
                {
                    system("cls");
                    schetchik=999;
                }

            }

            if (score1>=score2 and score1>=score3 and score1>=score4) cout<<"����� ������� ���������� ����� ������: "<<nik<<" - "<<score1<<endl;
            if (score2>=score1 and score2>=score3 and score2>=score4) cout<<"����� ������� ���������� ����� ������: "<<nik2<<" - "<<score2<<endl;
            if (score3>=score2 and score3>=score1 and score3>=score4) cout<<"����� ������� ���������� ����� ������: "<<nik3<<" - "<<score3<<endl;
            if (score4>=score2 and score4>=score3 and score4>=score1) cout<<"����� ������� ���������� ����� ������: "<<nik4<<" - "<<score4<<endl;
            break;
        }
        case 2:
        {
            cout<<"� ��� ���� �������� ����� ������ 2 ��������.";
            cout<<endl<<nik<<", �� ��� �������, � ��� ����� ������ �������?";
            cout<<endl<<endl<<"����� ����� 1 - "<< nik;
            cout<<endl<<endl<<"����� ����� 2 - ";
            char nik2[20];
            cin>>nik2;

            system("cls");

            int dlinaslova = strlen(slovovisel);
            int schetchik=0;
            char bukva;
            int bukva2=0;
            char vivodslova[30];
            bool y;

            for (int i=0; i<dlinaslova; i++)
            {
                vivodslova[i]='.';
                vivodslova[dlinaslova]=NULL;
            }

            int shag=0, ugadal=1;
            int pobeda = 1;

            int score1=0,score2=0;
            int live1=10,live2=10;


            char x[40];
            int proverka=0;
            int proverkahoda=-1;

            while (schetchik!=999)
            {
                y=false;
                cout<<setw(40)<<"��������!";
                cout<<endl<<endl;
                shag=0, ugadal=1;
                proverkahoda++;
                while (ugadal>shag and schetchik!=999 and live1!=0)
                {
                    schetchik=0, bukva2=0;
                    ++shag;
                    puts(vivodslova);
                    cout<<endl<<endl;
                    cout<<endl<<"\n����� ������� "<<nik<<": ";
                    cin>>bukva;
                    for (int i=proverkahoda; i<=proverkahoda; i++)
                    {
                        x[proverkahoda]=bukva;
                    }
                    cout<<endl<<endl<<"��� ����: "<<score1<<endl;

                    for (int i=0; i<dlinaslova; i++)
                    {
                        if (slovovisel[i]==bukva)
                        {
                            y=true;
                            score1+=10;
                            schetchik++;
                            ugadal++;
                            for (int pobeda=0,j=0; j<dlinaslova; j++)
                            {
                                if (slovovisel[j]==bukva and vivodslova[j]=='.') vivodslova[j]=slovovisel[i];
                                if (vivodslova[j]!='.') pobeda++;
                                if (pobeda==dlinaslova)
                                {
                                    schetchik=999;
                                    ugadal--;
                                }
                                while (shag>=0 or ugadal>=1)
                                {
                                    if (shag>=0) shag--;
                                    if (ugadal>=1) ugadal--;
                                }
                            }
                        }
                    }


                    if (schetchik==bukva2)
                    {
                        cout<<endl<<"����� �� ������ �����. ";
                        cout<<endl<<"���������� ����� ������: "<<live1--<<endl;
                        if (live1==0) cout<<endl<<"�� ���������."<<endl;
                        if (live1==9) cout<<"\n\n\n\n\n__()__";
                        if (live1==8)
                        {
                            cout<<"  ()"<<endl;
                            cout<<"  ()"<<endl;
                            cout<<"  ()"<<endl;
                            cout<<"__()__";
                        }
                        if (live1==7)
                        {
                            cout<<"  >>>>>>>"<<endl;
                            cout<<"  ()"<<endl;
                            cout<<"  ()"<<endl;
                            cout<<"  ()"<<endl;
                            cout<<"__()__";
                        }
                        if (live1==6)
                        {
                            cout<<"  >>>>>>>"<<endl;
                            cout<<"  ()    |"<<endl;
                            cout<<"  ()"<<endl;
                            cout<<"  ()"<<endl;
                            cout<<"__()__";
                        }
                        if (live1==5)
                        {
                            cout<<"  >>>>>>>"<<endl;
                            cout<<"  ()    |"<<endl;
                            cout<<"  ()    o"<<endl;
                            cout<<"  ()"<<endl;
                            cout<<"__()__";
                        }
                        if (live1==4)
                        {
                            cout<<"  >>>>>>>"<<endl;
                            cout<<"  ()    |"<<endl;
                            cout<<"  ()    o"<<endl;
                            cout<<"  ()    |"<<endl;
                            cout<<"__()__";
                        }
                        if (live1==3)
                        {
                            cout<<"  >>>>>>>"<<endl;
                            cout<<"  ()    |"<<endl;
                            cout<<"  ()    o"<<endl;
                            cout<<"  ()   /|"<<endl;
                            cout<<"__()__ ";
                        }
                        if (live1==2)
                        {
                            cout<<"  >>>>>>>"<<endl;
                            cout<<"  ()    |"<<endl;
                            cout<<"  ()    o"<<endl;
                            cout<<"  ()   /|"<<endl;
                            cout<<"__()__ / ";
                        }
                        if (live1==1)
                        {
                            cout<<"  >>>>>>>"<<endl;
                            cout<<"  ()    |"<<endl;
                            cout<<"  ()    o"<<endl;
                            cout<<"  ()   /|"<<endl;
                            cout<<"__()__ / \\";
                        }
                        if (live1==0)
                        {
                            cout<<"  >>>>>>>"<<endl;
                            cout<<"  ()    |"<<endl;
                            cout<<"  ()    o"<<endl;
                            cout<<"  ()   /|\\"<<endl;
                            cout<<"__()__ / \\";
                        }
                    }
                    else
                    {
                        proverka=0;
                        for (int i=0; i<dlinaslova; i++)
                        {
                            if (slovovisel[i]==bukva) proverka++;
                            if (proverka>=1) bukva2++;
                        }
                        cout<<endl<<"����� ������ �����!"<<endl<<endl;

                    }

                    cout<<endl<<endl<<"�����, ������� ��� ��������: ";
                    for (int i=0; i<=proverkahoda; i++)
                    {
                        cout<<x[i]<<" ";
                    }
                    cout<<endl<<endl;
                    Sleep(3000);
                    if (schetchik!=0 or y) cout<<"##########################################################################################"<<endl<<endl;
                }
                if (live1!=0) system("cls");



                y=false;
                cout<<setw(40)<<"��������!";
                cout<<endl<<endl;
                shag=0, ugadal=1;
                proverkahoda++;
                while (ugadal>shag and schetchik!=999 and live2!=0)
                {
                    schetchik=0, bukva2=0;
                    ++shag;
                    puts(vivodslova);
                    cout<<endl<<endl;
                    cout<<endl<<"\n����� ������� "<<nik2<<": ";
                    cin>>bukva;
                    for (int i=proverkahoda; i<=proverkahoda; i++)
                    {
                        x[proverkahoda]=bukva;
                    }
                    cout<<endl<<endl<<"��� ����: "<<score1<<endl;

                    for (int i=0; i<dlinaslova; i++)
                    {
                        if (slovovisel[i]==bukva)
                        {
                            y=true;
                            score2+=10;
                            schetchik++;
                            ugadal++;
                            for (int pobeda=0,j=0; j<dlinaslova; j++)
                            {
                                if (slovovisel[j]==bukva and vivodslova[j]=='.') vivodslova[j]=slovovisel[i];
                                if (vivodslova[j]!='.') pobeda++;
                                if (pobeda==dlinaslova)
                                {
                                    schetchik=999;
                                    ugadal--;
                                }
                                while (shag>=0 or ugadal>=1)
                                {
                                    if (shag>=0) shag--;
                                    if (ugadal>=1) ugadal--;
                                }
                            }
                        }
                    }

                    if (schetchik==bukva2)
                    {
                        cout<<endl<<"����� �� ������ �����. ";
                        cout<<endl<<"���������� ����� ������: "<<live2--<<endl;
                        if (live2==0) cout<<endl<<"�� ���������."<<endl;
                        if (live2==9) cout<<"\n\n\n\n\n__()__";
                        if (live2==8)
                        {
                            cout<<"  ()"<<endl;
                            cout<<"  ()"<<endl;
                            cout<<"  ()"<<endl;
                            cout<<"__()__";
                        }
                        if (live2==7)
                        {
                            cout<<"  >>>>>>>"<<endl;
                            cout<<"  ()"<<endl;
                            cout<<"  ()"<<endl;
                            cout<<"  ()"<<endl;
                            cout<<"__()__";
                        }
                        if (live2==6)
                        {
                            cout<<"  >>>>>>>"<<endl;
                            cout<<"  ()    |"<<endl;
                            cout<<"  ()"<<endl;
                            cout<<"  ()"<<endl;
                            cout<<"__()__";
                        }
                        if (live2==5)
                        {
                            cout<<"  >>>>>>>"<<endl;
                            cout<<"  ()    |"<<endl;
                            cout<<"  ()    o"<<endl;
                            cout<<"  ()"<<endl;
                            cout<<"__()__";
                        }
                        if (live2==4)
                        {
                            cout<<"  >>>>>>>"<<endl;
                            cout<<"  ()    |"<<endl;
                            cout<<"  ()    o"<<endl;
                            cout<<"  ()    |"<<endl;
                            cout<<"__()__";
                        }
                        if (live2==3)
                        {
                            cout<<"  >>>>>>>"<<endl;
                            cout<<"  ()    |"<<endl;
                            cout<<"  ()    o"<<endl;
                            cout<<"  ()   /|"<<endl;
                            cout<<"__()__ ";
                        }
                        if (live2==2)
                        {
                            cout<<"  >>>>>>>"<<endl;
                            cout<<"  ()    |"<<endl;
                            cout<<"  ()    o"<<endl;
                            cout<<"  ()   /|"<<endl;
                            cout<<"__()__ / ";
                        }
                        if (live2==1)
                        {
                            cout<<"  >>>>>>>"<<endl;
                            cout<<"  ()    |"<<endl;
                            cout<<"  ()    o"<<endl;
                            cout<<"  ()   /|"<<endl;
                            cout<<"__()__ / \\";
                        }
                        if (live2==0)
                        {
                            cout<<"  >>>>>>>"<<endl;
                            cout<<"  ()    |"<<endl;
                            cout<<"  ()    o"<<endl;
                            cout<<"  ()   /|\\"<<endl;
                            cout<<"__()__ / \\";
                        }
                    }
                    else
                    {
                        proverka=0;
                        for (int i=0; i<dlinaslova; i++)
                        {
                            if (slovovisel[i]==bukva) proverka++;
                            if (proverka>=1) bukva2++;
                        }
                        cout<<endl<<"����� ������ �����!"<<endl<<endl;

                    }

                    cout<<endl<<endl<<"�����, ������� ��� ��������: ";
                    for (int i=0; i<=proverkahoda; i++)
                    {
                        cout<<x[i]<<" ";
                    }
                    cout<<endl<<endl;
                    Sleep(3000);
                    if (schetchik!=0 or y) cout<<"##########################################################################################"<<endl<<endl;
                }
                if (live2!=0) system("cls");

                if (live1==0 and live2==0)
                {
                    system("cls");
                    schetchik=999;
                }

            }
            if (score1>=score2) cout<<"����� ������� ���������� ����� ������: "<<nik<<" - "<<score1<<endl;
            else cout<<"����� ������� ���������� ����� ������: "<<nik2<<" - "<<score2<<endl;
            break;


        }
        case 3:
        {
            char botniks[1000]= {"��������, �������, �����, �����, ���������, ����, �����, �������, ����, ������, �����, ����, ����, ���, �����, �������, �����, ������, �����, ���������, ������, ����������, ������"};

            char botnik[25];
            char botnik1[25];
            char botnik2[25];
            int randomnik = rand() %25;
            int randomnik1 = rand() %25;
            int randomnik2 = rand() %25;
            char razdelnik[5]=", ";
            char *pch1=strtok (botniks,razdelnik);
            int schetnik=0;

            while (pch1!=NULL)
            {
                if (schetnik==randomnik) strcpy(botnik,pch1);
                if (schetnik==randomnik1) strcpy(botnik1,pch1);
                if (schetnik==randomnik2) strcpy(botnik2,pch1);
                schetnik++;
                pch1=strtok(NULL,razdelnik);
            }



            cout<<"�� ������� ���� � ������. � ���� ������: ";
            cout<<endl<<endl<<"����� ����� 1 - "<< nik<<" - ��.";
            cout<<endl<<endl<<"����� ����� 2 - "<< botnik;
            cout<<endl<<endl<<"����� ����� 3 - "<< botnik1;
            cout<<endl<<endl<<"����� ����� 4 - "<< botnik2;

            Sleep(1500);

            system("cls");

            int dlinaslova = strlen(slovovisel);
            int schetchik=0;
            char bukva;
            int bukva2=0;
            char vivodslova[30];
            bool y;

            for (int i=0; i<dlinaslova; i++)
            {
                vivodslova[i]='.';
                vivodslova[dlinaslova]=NULL;
            }

            int shag=0, ugadal=1;
            int pobeda = 1;

            int score1=0,score2=0,score3=0,score4=0;
            int live1=10,live2=10,live3=10,live4=10;


            char x[40];
            int proverka=0;
            int proverkahoda=-1;

            while (schetchik!=999)
            {
                y=false;
                cout<<setw(40)<<"��������!";
                cout<<endl<<endl;
                shag=0, ugadal=1;
                proverkahoda++;
                while (ugadal>shag and schetchik!=999 and live1!=0)
                {
                    schetchik=0, bukva2=0;
                    ++shag;
                    puts(vivodslova);
                    cout<<endl<<endl;
                    cout<<endl<<"\n����� ������� "<<nik<<": ";
                    cin>>bukva;
                    for (int i=proverkahoda; i<=proverkahoda; i++)
                    {
                        x[proverkahoda]=bukva;
                    }
                    cout<<endl<<endl<<"��� ����: "<<score1<<endl;

                    for (int i=0; i<dlinaslova; i++)
                    {
                        if (slovovisel[i]==bukva)
                        {
                            y=true;
                            score1+=10;
                            schetchik++;
                            ugadal++;
                            for (int pobeda=0,j=0; j<dlinaslova; j++)
                            {
                                if (slovovisel[j]==bukva and vivodslova[j]=='.') vivodslova[j]=slovovisel[i];
                                if (vivodslova[j]!='.') pobeda++;
                                if (pobeda==dlinaslova)
                                {
                                    schetchik=999;
                                    ugadal--;
                                }
                                while (shag>=0 or ugadal>=1)
                                {
                                    if (shag>=0) shag--;
                                    if (ugadal>=1) ugadal--;
                                }
                            }
                        }
                    }


                    if (schetchik==bukva2)
                    {
                        cout<<endl<<"����� �� ������ �����. ";
                        cout<<endl<<"���������� ����� ������: "<<live1--<<endl;
                        if (live1==0) cout<<endl<<"�� ���������."<<endl;
                        if (live1==9) cout<<"\n\n\n\n\n__()__";
                        if (live1==8)
                        {
                            cout<<"  ()"<<endl;
                            cout<<"  ()"<<endl;
                            cout<<"  ()"<<endl;
                            cout<<"__()__";
                        }
                        if (live1==7)
                        {
                            cout<<"  >>>>>>>"<<endl;
                            cout<<"  ()"<<endl;
                            cout<<"  ()"<<endl;
                            cout<<"  ()"<<endl;
                            cout<<"__()__";
                        }
                        if (live1==6)
                        {
                            cout<<"  >>>>>>>"<<endl;
                            cout<<"  ()    |"<<endl;
                            cout<<"  ()"<<endl;
                            cout<<"  ()"<<endl;
                            cout<<"__()__";
                        }
                        if (live1==5)
                        {
                            cout<<"  >>>>>>>"<<endl;
                            cout<<"  ()    |"<<endl;
                            cout<<"  ()    o"<<endl;
                            cout<<"  ()"<<endl;
                            cout<<"__()__";
                        }
                        if (live1==4)
                        {
                            cout<<"  >>>>>>>"<<endl;
                            cout<<"  ()    |"<<endl;
                            cout<<"  ()    o"<<endl;
                            cout<<"  ()    |"<<endl;
                            cout<<"__()__";
                        }
                        if (live1==3)
                        {
                            cout<<"  >>>>>>>"<<endl;
                            cout<<"  ()    |"<<endl;
                            cout<<"  ()    o"<<endl;
                            cout<<"  ()   /|"<<endl;
                            cout<<"__()__ ";
                        }
                        if (live1==2)
                        {
                            cout<<"  >>>>>>>"<<endl;
                            cout<<"  ()    |"<<endl;
                            cout<<"  ()    o"<<endl;
                            cout<<"  ()   /|"<<endl;
                            cout<<"__()__ / ";
                        }
                        if (live1==1)
                        {
                            cout<<"  >>>>>>>"<<endl;
                            cout<<"  ()    |"<<endl;
                            cout<<"  ()    o"<<endl;
                            cout<<"  ()   /|"<<endl;
                            cout<<"__()__ / \\";
                        }
                        if (live1==0)
                        {
                            cout<<"  >>>>>>>"<<endl;
                            cout<<"  ()    |"<<endl;
                            cout<<"  ()    o"<<endl;
                            cout<<"  ()   /|\\"<<endl;
                            cout<<"__()__ / \\";
                        }
                    }
                    else
                    {
                        proverka=0;
                        for (int i=0; i<dlinaslova; i++)
                        {
                            if (slovovisel[i]==bukva) proverka++;
                            if (proverka>=1) bukva2++;
                        }
                        cout<<endl<<"����� ������ �����!"<<endl<<endl;

                    }

                    cout<<endl<<endl<<"�����, ������� ��� ��������: ";
                    for (int i=0; i<=proverkahoda; i++)
                    {
                        cout<<x[i]<<" ";
                    }
                    cout<<endl<<endl;
                    Sleep(3000);
                    if (schetchik!=0 or y) cout<<"##########################################################################################"<<endl<<endl;
                }
                if (live1!=0) system("cls");



                y=false;
                cout<<setw(40)<<"��������!";
                cout<<endl<<endl;
                shag=0, ugadal=1;
                proverkahoda++;
                while (ugadal>shag and schetchik!=999 and live2!=0)
                {
                    schetchik=0, bukva2=0;
                    ++shag;
                    puts(vivodslova);
                    cout<<endl<<endl;

                    char bukvirus[200]= {"�, �, �, �, �, �, �, �, �, �, �, �, �, �, �, �, �, �, �, �, �, �, �, �, �, �, �, �, �, �, �, �, �"};
                    int schetchikbot=0;
                    char razdeldliabukv[5]= {", "};
                    char *pch2=strtok (bukvirus, razdeldliabukv);
                    char bukvadliabota[2];
st1:
                    int randombukva = 1 + rand() % 33;

                    while (pch2!=NULL)
                    {
                        if (schetchikbot==randombukva) strcpy(bukvadliabota,pch2);
                        pch2=strtok(NULL,razdeldliabukv);
                        schetchikbot++;
                    }

                    for (int i=0; i<dlinaslova; i++)
                    {
                        if (vivodslova[i]==bukvadliabota[0]) goto st1;
                    }



                    cout<<endl<<"\n����� ������� "<<botnik<<": "<<bukvadliabota;

                    for (int i=0; i<1; i++)
                    {
                        bukva=bukvadliabota[0];
                    }


                    for (int i=proverkahoda; i<=proverkahoda; i++)
                    {
                        x[proverkahoda]=bukva;
                    }
                    cout<<endl<<endl<<"��� ����: "<<score2<<endl;

                    for (int i=0; i<dlinaslova; i++)
                    {
                        if (slovovisel[i]==bukva)
                        {
                            y=true;
                            score2+=10;
                            schetchik++;
                            ugadal++;
                            for (int pobeda=0,j=0; j<dlinaslova; j++)
                            {
                                if (slovovisel[j]==bukva and vivodslova[j]=='.') vivodslova[j]=slovovisel[i];
                                if (vivodslova[j]!='.') pobeda++;
                                if (pobeda==dlinaslova)
                                {
                                    schetchik=999;
                                    ugadal--;
                                }
                                while (shag>=0 or ugadal>=1)
                                {
                                    if (shag>=0) shag--;
                                    if (ugadal>=1) ugadal--;
                                }
                            }
                        }
                    }

                    if (schetchik==bukva2)
                    {
                        cout<<endl<<"����� �� ������ �����. ";
                        cout<<endl<<"���������� ����� ������: "<<live2--<<endl;
                        if (live2==0) cout<<endl<<"�� ���������."<<endl;
                        if (live2==9) cout<<"\n\n\n\n\n__()__";
                        if (live2==8)
                        {
                            cout<<"  ()"<<endl;
                            cout<<"  ()"<<endl;
                            cout<<"  ()"<<endl;
                            cout<<"__()__";
                        }
                        if (live2==7)
                        {
                            cout<<"  >>>>>>>"<<endl;
                            cout<<"  ()"<<endl;
                            cout<<"  ()"<<endl;
                            cout<<"  ()"<<endl;
                            cout<<"__()__";
                        }
                        if (live2==6)
                        {
                            cout<<"  >>>>>>>"<<endl;
                            cout<<"  ()    |"<<endl;
                            cout<<"  ()"<<endl;
                            cout<<"  ()"<<endl;
                            cout<<"__()__";
                        }
                        if (live2==5)
                        {
                            cout<<"  >>>>>>>"<<endl;
                            cout<<"  ()    |"<<endl;
                            cout<<"  ()    o"<<endl;
                            cout<<"  ()"<<endl;
                            cout<<"__()__";
                        }
                        if (live2==4)
                        {
                            cout<<"  >>>>>>>"<<endl;
                            cout<<"  ()    |"<<endl;
                            cout<<"  ()    o"<<endl;
                            cout<<"  ()    |"<<endl;
                            cout<<"__()__";
                        }
                        if (live2==3)
                        {
                            cout<<"  >>>>>>>"<<endl;
                            cout<<"  ()    |"<<endl;
                            cout<<"  ()    o"<<endl;
                            cout<<"  ()   /|"<<endl;
                            cout<<"__()__ ";
                        }
                        if (live2==2)
                        {
                            cout<<"  >>>>>>>"<<endl;
                            cout<<"  ()    |"<<endl;
                            cout<<"  ()    o"<<endl;
                            cout<<"  ()   /|"<<endl;
                            cout<<"__()__ / ";
                        }
                        if (live2==1)
                        {
                            cout<<"  >>>>>>>"<<endl;
                            cout<<"  ()    |"<<endl;
                            cout<<"  ()    o"<<endl;
                            cout<<"  ()   /|"<<endl;
                            cout<<"__()__ / \\";
                        }
                        if (live2==0)
                        {
                            cout<<"  >>>>>>>"<<endl;
                            cout<<"  ()    |"<<endl;
                            cout<<"  ()    o"<<endl;
                            cout<<"  ()   /|\\"<<endl;
                            cout<<"__()__ / \\";
                        }
                    }
                    else
                    {
                        proverka=0;
                        for (int i=0; i<dlinaslova; i++)
                        {
                            if (slovovisel[i]==bukva) proverka++;
                            if (proverka>=1) bukva2++;
                        }
                        cout<<endl<<"����� ������ �����!"<<endl<<endl;

                    }

                    cout<<endl<<endl<<"�����, ������� ��� ��������: ";
                    for (int i=0; i<=proverkahoda; i++)
                    {
                        cout<<x[i]<<" ";
                    }
                    cout<<endl<<endl;
                    Sleep(3000);
                    if (schetchik!=0 or y) cout<<"##########################################################################################"<<endl<<endl;
                }
                if (live2!=0) system("cls");

                y=false;
                cout<<setw(40)<<"��������!";
                cout<<endl<<endl;
                shag=0, ugadal=1;
                proverkahoda++;
                while (ugadal>shag and schetchik!=999 and live3!=0)
                {
                    schetchik=0, bukva2=0;
                    ++shag;
                    puts(vivodslova);
                    cout<<endl<<endl;

                    char bukvirus[200]= {"�, �, �, �, �, �, �, �, �, �, �, �, �, �, �, �, �, �, �, �, �, �, �, �, �, �, �, �, �, �, �, �, �"};
                    int schetchikbot=0;
                    char razdeldliabukv[5]= {", "};
                    char *pch2=strtok (bukvirus, razdeldliabukv);
                    char bukvadliabota[2];

st2:
                    int randombukva = 1 + rand() % 33;

                    while (pch2!=NULL)
                    {
                        if (schetchikbot==randombukva) strcpy(bukvadliabota,pch2);
                        pch2=strtok(NULL,razdeldliabukv);
                        schetchikbot++;
                    }

                    for (int i=0; i<dlinaslova; i++)
                    {
                        if (vivodslova[i]==bukvadliabota[0]) goto st2;
                    }

                    cout<<endl<<"\n����� ������� "<<botnik1<<": "<<bukvadliabota;

                    for (int i=0; i<1; i++)
                    {
                        bukva=bukvadliabota[0];
                    }


                    for (int i=proverkahoda; i<=proverkahoda; i++)
                    {
                        x[proverkahoda]=bukva;
                    }
                    cout<<endl<<endl<<"��� ����: "<<score3<<endl;

                    for (int i=0; i<dlinaslova; i++)
                    {
                        if (slovovisel[i]==bukva)
                        {
                            y=true;
                            score3+=10;
                            schetchik++;
                            ugadal++;
                            for (int pobeda=0,j=0; j<dlinaslova; j++)
                            {
                                if (slovovisel[j]==bukva and vivodslova[j]=='.') vivodslova[j]=slovovisel[i];
                                if (vivodslova[j]!='.') pobeda++;
                                if (pobeda==dlinaslova)
                                {
                                    schetchik=999;
                                    ugadal--;
                                }
                                while (shag>=0 or ugadal>=1)
                                {
                                    if (shag>=0) shag--;
                                    if (ugadal>=1) ugadal--;
                                }
                            }
                        }
                    }

                    if (schetchik==bukva2)
                    {
                        cout<<endl<<"����� �� ������ �����. ";
                        cout<<endl<<"���������� ����� ������: "<<live3--<<endl;
                        if (live3==0) cout<<endl<<"�� ���������."<<endl;
                        if (live3==9) cout<<"\n\n\n\n\n__()__";
                        if (live3==8)
                        {
                            cout<<"  ()"<<endl;
                            cout<<"  ()"<<endl;
                            cout<<"  ()"<<endl;
                            cout<<"__()__";
                        }
                        if (live3==7)
                        {
                            cout<<"  >>>>>>>"<<endl;
                            cout<<"  ()"<<endl;
                            cout<<"  ()"<<endl;
                            cout<<"  ()"<<endl;
                            cout<<"__()__";
                        }
                        if (live3==6)
                        {
                            cout<<"  >>>>>>>"<<endl;
                            cout<<"  ()    |"<<endl;
                            cout<<"  ()"<<endl;
                            cout<<"  ()"<<endl;
                            cout<<"__()__";
                        }
                        if (live3==5)
                        {
                            cout<<"  >>>>>>>"<<endl;
                            cout<<"  ()    |"<<endl;
                            cout<<"  ()    o"<<endl;
                            cout<<"  ()"<<endl;
                            cout<<"__()__";
                        }
                        if (live3==4)
                        {
                            cout<<"  >>>>>>>"<<endl;
                            cout<<"  ()    |"<<endl;
                            cout<<"  ()    o"<<endl;
                            cout<<"  ()    |"<<endl;
                            cout<<"__()__";
                        }
                        if (live3==3)
                        {
                            cout<<"  >>>>>>>"<<endl;
                            cout<<"  ()    |"<<endl;
                            cout<<"  ()    o"<<endl;
                            cout<<"  ()   /|"<<endl;
                            cout<<"__()__ ";
                        }
                        if (live3==2)
                        {
                            cout<<"  >>>>>>>"<<endl;
                            cout<<"  ()    |"<<endl;
                            cout<<"  ()    o"<<endl;
                            cout<<"  ()   /|"<<endl;
                            cout<<"__()__ / ";
                        }
                        if (live3==1)
                        {
                            cout<<"  >>>>>>>"<<endl;
                            cout<<"  ()    |"<<endl;
                            cout<<"  ()    o"<<endl;
                            cout<<"  ()   /|"<<endl;
                            cout<<"__()__ / \\";
                        }
                        if (live3==0)
                        {
                            cout<<"  >>>>>>>"<<endl;
                            cout<<"  ()    |"<<endl;
                            cout<<"  ()    o"<<endl;
                            cout<<"  ()   /|\\"<<endl;
                            cout<<"__()__ / \\";
                        }
                    }
                    else
                    {
                        proverka=0;
                        for (int i=0; i<dlinaslova; i++)
                        {
                            if (slovovisel[i]==bukva) proverka++;
                            if (proverka>=1) bukva2++;
                        }
                        cout<<endl<<"����� ������ �����!"<<endl<<endl;

                    }

                    cout<<endl<<endl<<"�����, ������� ��� ��������: ";
                    for (int i=0; i<=proverkahoda; i++)
                    {
                        cout<<x[i]<<" ";
                    }
                    cout<<endl<<endl;
                    Sleep(3000);
                    if (schetchik!=0 or y) cout<<"##########################################################################################"<<endl<<endl;
                }
                if (live3!=0) system("cls");


                y=false;
                cout<<setw(40)<<"��������!";
                cout<<endl<<endl;
                shag=0, ugadal=1;
                proverkahoda++;
                while (ugadal>shag and schetchik!=999 and live4!=0)
                {
                    schetchik=0, bukva2=0;
                    ++shag;
                    puts(vivodslova);
                    cout<<endl<<endl;

                    char bukvirus[200]= {"�, �, �, �, �, �, �, �, �, �, �, �, �, �, �, �, �, �, �, �, �, �, �, �, �, �, �, �, �, �, �, �, �"};
                    int schetchikbot=0;
                    char razdeldliabukv[5]= {", "};
                    char *pch2=strtok (bukvirus, razdeldliabukv);
                    char bukvadliabota[2];

st3:
                    int randombukva = 1 + rand() % 33;
                    while (pch2!=NULL)
                    {
                        if (schetchikbot==randombukva) strcpy(bukvadliabota,pch2);
                        pch2=strtok(NULL,razdeldliabukv);
                        schetchikbot++;
                    }

                    for (int i=0; i<dlinaslova; i++)
                    {
                        if (vivodslova[i]==bukvadliabota[0]) goto st3;
                    }

                    cout<<endl<<"\n����� ������� "<<botnik2<<": "<<bukvadliabota;

                    for (int i=0; i<1; i++)
                    {
                        bukva=bukvadliabota[0];
                    }


                    for (int i=proverkahoda; i<=proverkahoda; i++)
                    {
                        x[proverkahoda]=bukva;
                    }
                    cout<<endl<<endl<<"��� ����: "<<score4<<endl;

                    for (int i=0; i<dlinaslova; i++)
                    {
                        if (slovovisel[i]==bukva)
                        {
                            y=true;
                            score4+=10;
                            schetchik++;
                            ugadal++;
                            for (int pobeda=0,j=0; j<dlinaslova; j++)
                            {
                                if (slovovisel[j]==bukva and vivodslova[j]=='.') vivodslova[j]=slovovisel[i];
                                if (vivodslova[j]!='.') pobeda++;
                                if (pobeda==dlinaslova)
                                {
                                    schetchik=999;
                                    ugadal--;
                                }
                                while (shag>=0 or ugadal>=1)
                                {
                                    if (shag>=0) shag--;
                                    if (ugadal>=1) ugadal--;
                                }
                            }
                        }
                    }

                    if (schetchik==bukva2)
                    {
                        cout<<endl<<"����� �� ������ �����. ";
                        cout<<endl<<"���������� ����� ������: "<<live4--<<endl;
                        if (live4==0) cout<<endl<<"�� ���������."<<endl;
                        if (live4==9) cout<<"\n\n\n\n\n__()__";
                        if (live4==8)
                        {
                            cout<<"  ()"<<endl;
                            cout<<"  ()"<<endl;
                            cout<<"  ()"<<endl;
                            cout<<"__()__";
                        }
                        if (live4==7)
                        {
                            cout<<"  >>>>>>>"<<endl;
                            cout<<"  ()"<<endl;
                            cout<<"  ()"<<endl;
                            cout<<"  ()"<<endl;
                            cout<<"__()__";
                        }
                        if (live4==6)
                        {
                            cout<<"  >>>>>>>"<<endl;
                            cout<<"  ()    |"<<endl;
                            cout<<"  ()"<<endl;
                            cout<<"  ()"<<endl;
                            cout<<"__()__";
                        }
                        if (live4==5)
                        {
                            cout<<"  >>>>>>>"<<endl;
                            cout<<"  ()    |"<<endl;
                            cout<<"  ()    o"<<endl;
                            cout<<"  ()"<<endl;
                            cout<<"__()__";
                        }
                        if (live4==4)
                        {
                            cout<<"  >>>>>>>"<<endl;
                            cout<<"  ()    |"<<endl;
                            cout<<"  ()    o"<<endl;
                            cout<<"  ()    |"<<endl;
                            cout<<"__()__";
                        }
                        if (live4==3)
                        {
                            cout<<"  >>>>>>>"<<endl;
                            cout<<"  ()    |"<<endl;
                            cout<<"  ()    o"<<endl;
                            cout<<"  ()   /|"<<endl;
                            cout<<"__()__ ";
                        }
                        if (live4==2)
                        {
                            cout<<"  >>>>>>>"<<endl;
                            cout<<"  ()    |"<<endl;
                            cout<<"  ()    o"<<endl;
                            cout<<"  ()   /|"<<endl;
                            cout<<"__()__ / ";
                        }
                        if (live4==1)
                        {
                            cout<<"  >>>>>>>"<<endl;
                            cout<<"  ()    |"<<endl;
                            cout<<"  ()    o"<<endl;
                            cout<<"  ()   /|"<<endl;
                            cout<<"__()__ / \\";
                        }
                        if (live4==0)
                        {
                            cout<<"  >>>>>>>"<<endl;
                            cout<<"  ()    |"<<endl;
                            cout<<"  ()    o"<<endl;
                            cout<<"  ()   /|\\"<<endl;
                            cout<<"__()__ / \\";
                        }
                    }
                    else
                    {
                        proverka=0;
                        for (int i=0; i<dlinaslova; i++)
                        {
                            if (slovovisel[i]==bukva) proverka++;
                            if (proverka>=1) bukva2++;
                        }
                        cout<<endl<<"����� ������ �����!"<<endl<<endl;

                    }

                    cout<<endl<<endl<<"�����, ������� ��� ��������: ";
                    for (int i=0; i<=proverkahoda; i++)
                    {
                        cout<<x[i]<<" ";
                    }
                    cout<<endl<<endl;
                    Sleep(3000);
                    if (schetchik!=0 or y) cout<<"##########################################################################################"<<endl<<endl;
                }
                if (live4!=0) system("cls");

                if (live1==0 and live2==0 and live3==0 and live4==0)
                {
                    system("cls");
                    schetchik=999;
                }

            }
            if (score1>=score2 and score1>=score3 and score1>=score4) cout<<"����� ������� ���������� ����� ������: "<<nik<<" - "<<score1<<endl;
            if (score2>=score1 and score2>=score3 and score2>=score4) cout<<"����� ������� ���������� ����� ������: "<<botnik<<" - "<<score2<<endl;
            if (score3>=score2 and score3>=score1 and score3>=score4) cout<<"����� ������� ���������� ����� ������: "<<botnik1<<" - "<<score3<<endl;
            if (score4>=score2 and score4>=score3 and score4>=score1) cout<<"����� ������� ���������� ����� ������: "<<botnik2<<" - "<<score4<<endl;
            break;
        }


        case 4:
        {
            char botniks[1000]= {"��������, �������, �����, �����, ���������, ����, �����, �������, ����, ������, �����, ����, ����, ���, �����, �������, �����, ������, �����, ���������, ������, ����������, ������"};

            char botnik[25];
            int randomnik = rand() %25;
            char razdelnik[5]=", ";
            char *pch1=strtok (botniks,razdelnik);
            int schetnik=0;

            while (pch1!=NULL)
            {
                if (schetnik==randomnik) strcpy(botnik,pch1);
                schetnik++;
                pch1=strtok(NULL,razdelnik);
            }



            cout<<"�� ������� ���� � �����. � ���� ������ ���: ";
            cout<<endl<<endl<<"����� ����� 1 - "<< nik<<" - ��.";
            cout<<endl<<endl<<"����� ����� 2 - "<< botnik;

            Sleep(1500);

            system("cls");

            int dlinaslova = strlen(slovovisel);
            int schetchik=0;
            char bukva;
            int bukva2=0;
            char vivodslova[30];
            bool y;

            for (int i=0; i<dlinaslova; i++)
            {
                vivodslova[i]='.';
                vivodslova[dlinaslova]=NULL;
            }

            int shag=0, ugadal=1;
            int pobeda = 1;

            int score1=0,score2=0;
            int live1=10,live2=10;


            char x[40];
            int proverka=0;
            int proverkahoda=-1;

            while (schetchik!=999)
            {
                y=false;
                cout<<setw(40)<<"��������!";
                cout<<endl<<endl;
                shag=0, ugadal=1;
                proverkahoda++;
                while (ugadal>shag and schetchik!=999 and live1!=0)
                {
                    schetchik=0, bukva2=0;
                    ++shag;
                    puts(vivodslova);
                    cout<<endl<<endl;
                    cout<<endl<<"\n����� ������� "<<nik<<": ";
                    cin>>bukva;
                    for (int i=proverkahoda; i<=proverkahoda; i++)
                    {
                        x[proverkahoda]=bukva;
                    }
                    cout<<endl<<endl<<"��� ����: "<<score1<<endl;

                    for (int i=0; i<dlinaslova; i++)
                    {
                        if (slovovisel[i]==bukva)
                        {
                            y=true;
                            score1+=10;
                            schetchik++;
                            ugadal++;
                            for (int pobeda=0,j=0; j<dlinaslova; j++)
                            {
                                if (slovovisel[j]==bukva and vivodslova[j]=='.') vivodslova[j]=slovovisel[i];
                                if (vivodslova[j]!='.') pobeda++;
                                if (pobeda==dlinaslova)
                                {
                                    schetchik=999;
                                    ugadal--;
                                }
                                while (shag>=0 or ugadal>=1)
                                {
                                    if (shag>=0) shag--;
                                    if (ugadal>=1) ugadal--;
                                }
                            }
                        }
                    }


                    if (schetchik==bukva2)
                    {
                        cout<<endl<<"����� �� ������ �����. ";
                        cout<<endl<<"���������� ����� ������: "<<live1--<<endl;
                        if (live1==0) cout<<endl<<"�� ���������."<<endl;
                        if (live1==9) cout<<"\n\n\n\n\n__()__";
                        if (live1==8)
                        {
                            cout<<"  ()"<<endl;
                            cout<<"  ()"<<endl;
                            cout<<"  ()"<<endl;
                            cout<<"__()__";
                        }
                        if (live1==7)
                        {
                            cout<<"  >>>>>>>"<<endl;
                            cout<<"  ()"<<endl;
                            cout<<"  ()"<<endl;
                            cout<<"  ()"<<endl;
                            cout<<"__()__";
                        }
                        if (live1==6)
                        {
                            cout<<"  >>>>>>>"<<endl;
                            cout<<"  ()    |"<<endl;
                            cout<<"  ()"<<endl;
                            cout<<"  ()"<<endl;
                            cout<<"__()__";
                        }
                        if (live1==5)
                        {
                            cout<<"  >>>>>>>"<<endl;
                            cout<<"  ()    |"<<endl;
                            cout<<"  ()    o"<<endl;
                            cout<<"  ()"<<endl;
                            cout<<"__()__";
                        }
                        if (live1==4)
                        {
                            cout<<"  >>>>>>>"<<endl;
                            cout<<"  ()    |"<<endl;
                            cout<<"  ()    o"<<endl;
                            cout<<"  ()    |"<<endl;
                            cout<<"__()__";
                        }
                        if (live1==3)
                        {
                            cout<<"  >>>>>>>"<<endl;
                            cout<<"  ()    |"<<endl;
                            cout<<"  ()    o"<<endl;
                            cout<<"  ()   /|"<<endl;
                            cout<<"__()__ ";
                        }
                        if (live1==2)
                        {
                            cout<<"  >>>>>>>"<<endl;
                            cout<<"  ()    |"<<endl;
                            cout<<"  ()    o"<<endl;
                            cout<<"  ()   /|"<<endl;
                            cout<<"__()__ / ";
                        }
                        if (live1==1)
                        {
                            cout<<"  >>>>>>>"<<endl;
                            cout<<"  ()    |"<<endl;
                            cout<<"  ()    o"<<endl;
                            cout<<"  ()   /|"<<endl;
                            cout<<"__()__ / \\";
                        }
                        if (live1==0)
                        {
                            cout<<"  >>>>>>>"<<endl;
                            cout<<"  ()    |"<<endl;
                            cout<<"  ()    o"<<endl;
                            cout<<"  ()   /|\\"<<endl;
                            cout<<"__()__ / \\";
                        }
                    }
                    else
                    {
                        proverka=0;
                        for (int i=0; i<dlinaslova; i++)
                        {
                            if (slovovisel[i]==bukva) proverka++;
                            if (proverka>=1) bukva2++;
                        }
                        cout<<endl<<"����� ������ �����!"<<endl<<endl;

                    }

                    cout<<endl<<endl<<"�����, ������� ��� ��������: ";
                    for (int i=0; i<=proverkahoda; i++)
                    {
                        cout<<x[i]<<" ";
                    }
                    cout<<endl<<endl;
                    Sleep(3000);
                    if (schetchik!=0 or y) cout<<"##########################################################################################"<<endl<<endl;
                }
                if (live1!=0) system("cls");



                y=false;
                cout<<setw(40)<<"��������!";
                cout<<endl<<endl;
                shag=0, ugadal=1;
                proverkahoda++;
                while (ugadal>shag and schetchik!=999 and live2!=0)
                {
                    schetchik=0, bukva2=0;
                    ++shag;
                    puts(vivodslova);
                    cout<<endl<<endl;

                    char bukvirus[200]= {"�, �, �, �, �, �, �, �, �, �, �, �, �, �, �, �, �, �, �, �, �, �, �, �, �, �, �, �, �, �, �, �, �"};
                    int schetchikbot=0;
                    char razdeldliabukv[5]= {", "};
                    char *pch2=strtok (bukvirus, razdeldliabukv);
                    char bukvadliabota[2];

st4:
                    int randombukva = 1 + rand() % 33;

                    while (pch2!=NULL)
                    {
                        if (schetchikbot==randombukva) strcpy(bukvadliabota,pch2);
                        pch2=strtok(NULL,razdeldliabukv);
                        schetchikbot++;
                    }

                    for (int i=0; i<dlinaslova; i++)
                    {
                        if (vivodslova[i]==bukvadliabota[0]) goto st4;
                    }

                    cout<<endl<<"\n����� ������� "<<botnik<<": "<<bukvadliabota;

                    for (int i=0; i<1; i++)
                    {
                        bukva=bukvadliabota[0];
                    }


                    for (int i=proverkahoda; i<=proverkahoda; i++)
                    {
                        x[proverkahoda]=bukva;
                    }
                    cout<<endl<<endl<<"��� ����: "<<score2<<endl;

                    for (int i=0; i<dlinaslova; i++)
                    {
                        if (slovovisel[i]==bukva)
                        {
                            y=true;
                            score2+=10;
                            schetchik++;
                            ugadal++;
                            for (int pobeda=0,j=0; j<dlinaslova; j++)
                            {
                                if (slovovisel[j]==bukva and vivodslova[j]=='.') vivodslova[j]=slovovisel[i];
                                if (vivodslova[j]!='.') pobeda++;
                                if (pobeda==dlinaslova)
                                {
                                    schetchik=999;
                                    ugadal--;
                                }
                                while (shag>=0 or ugadal>=1)
                                {
                                    if (shag>=0) shag--;
                                    if (ugadal>=1) ugadal--;
                                }
                            }
                        }
                    }

                    if (schetchik==bukva2)
                    {
                        cout<<endl<<"����� �� ������ �����. ";
                        cout<<endl<<"���������� ����� ������: "<<live2--<<endl;
                        if (live2==0) cout<<endl<<"�� ���������."<<endl;
                        if (live2==9) cout<<"\n\n\n\n\n__()__";
                        if (live2==8)
                        {
                            cout<<"  ()"<<endl;
                            cout<<"  ()"<<endl;
                            cout<<"  ()"<<endl;
                            cout<<"__()__";
                        }
                        if (live2==7)
                        {
                            cout<<"  >>>>>>>"<<endl;
                            cout<<"  ()"<<endl;
                            cout<<"  ()"<<endl;
                            cout<<"  ()"<<endl;
                            cout<<"__()__";
                        }
                        if (live2==6)
                        {
                            cout<<"  >>>>>>>"<<endl;
                            cout<<"  ()    |"<<endl;
                            cout<<"  ()"<<endl;
                            cout<<"  ()"<<endl;
                            cout<<"__()__";
                        }
                        if (live2==5)
                        {
                            cout<<"  >>>>>>>"<<endl;
                            cout<<"  ()    |"<<endl;
                            cout<<"  ()    o"<<endl;
                            cout<<"  ()"<<endl;
                            cout<<"__()__";
                        }
                        if (live2==4)
                        {
                            cout<<"  >>>>>>>"<<endl;
                            cout<<"  ()    |"<<endl;
                            cout<<"  ()    o"<<endl;
                            cout<<"  ()    |"<<endl;
                            cout<<"__()__";
                        }
                        if (live2==3)
                        {
                            cout<<"  >>>>>>>"<<endl;
                            cout<<"  ()    |"<<endl;
                            cout<<"  ()    o"<<endl;
                            cout<<"  ()   /|"<<endl;
                            cout<<"__()__ ";
                        }
                        if (live2==2)
                        {
                            cout<<"  >>>>>>>"<<endl;
                            cout<<"  ()    |"<<endl;
                            cout<<"  ()    o"<<endl;
                            cout<<"  ()   /|"<<endl;
                            cout<<"__()__ / ";
                        }
                        if (live2==1)
                        {
                            cout<<"  >>>>>>>"<<endl;
                            cout<<"  ()    |"<<endl;
                            cout<<"  ()    o"<<endl;
                            cout<<"  ()   /|"<<endl;
                            cout<<"__()__ / \\";
                        }
                        if (live2==0)
                        {
                            cout<<"  >>>>>>>"<<endl;
                            cout<<"  ()    |"<<endl;
                            cout<<"  ()    o"<<endl;
                            cout<<"  ()   /|\\"<<endl;
                            cout<<"__()__ / \\";
                        }
                    }
                    else
                    {
                        proverka=0;
                        for (int i=0; i<dlinaslova; i++)
                        {
                            if (slovovisel[i]==bukva) proverka++;
                            if (proverka>=1) bukva2++;
                        }
                        cout<<endl<<"����� ������ �����!"<<endl<<endl;

                    }

                    cout<<endl<<endl<<"�����, ������� ��� ��������: ";
                    for (int i=0; i<=proverkahoda; i++)
                    {
                        cout<<x[i]<<" ";
                    }
                    cout<<endl<<endl;
                    Sleep(3000);
                    if (schetchik!=0 or y) cout<<"##########################################################################################"<<endl<<endl;
                }
                if (live2!=0) system("cls");

                if (live1==0 and live2==0)
                {
                    system("cls");
                    schetchik=999;
                }

            }
            if (score1>=score2) cout<<"����� ������� ���������� ����� ������: "<<nik<<" - "<<score1<<endl;
            else cout<<"����� ������� ���������� ����� ������: "<<botnik<<" - "<<score2<<endl;
            break;


        }
        }
    }
    case 2:
    {
        char Prizi[250]="������, ��������, �����, 100$, ������� � ������, ����� � ����, ���������, ���������, ������, 1 ���, ��������� �� �������, ����� �� ������� � CEITI, ��������, ���� �������";
        char Vopros[20000]="��� ��� ������ � �������? ���������� ������ � ���������� ��������? �������� ����� �������� ��������� �� ���������� ������������ �������? ��� ����� ����� ������ ������ ������? ������, ���������� �������, �������?";
        char Otvet[10000]="�������. ��������. ��������. �������. ������.";
        char DelVopros[5]="?";
        char DelOtvet[5]=". ";

        char *pchpole1=strtok(Vopros, DelVopros);
        char *pchpole2=strtok(Otvet, DelOtvet);

        int RandomVopros = rand() %4;
        int RandomOtvet = RandomVopros;

        int SchetPole1=0;
        int SchetPole2=0;

        char VoprosIgri[100];
        char OtvetIgri[15];

        while (pchpole1!=NULL)
        {
            if(SchetPole1==RandomVopros) strcpy(VoprosIgri,Vopros);
            pchpole1=strtok(NULL,DelVopros);
            SchetPole1++;
        }

        while (pchpole2!=NULL)
        {
            if(SchetPole2==RandomOtvet) strcpy(OtvetIgri,Otvet);
            pchpole2=strtok(NULL,DelOtvet);
            SchetPole2++;
        }

        int RazmerSlova=strlen(OtvetIgri);
        char SlovoTochki[15];

        system("cls");

        cout<<setw(40)<<"��������"<<endl;
        cout<<"1. � �������� (3 ��������)";
        cout<<"\n2. � ������ � �����. (2 ��������)";
        cout<<"\n3. C ������. (1 �������)";

        cout<<"\n\n�� ������ ������: ";

        int PoleVib;

        while (!(cin>>PoleVib))
        {
            cout<<"������, �� ����� ���-�� �� ��. ";
            cin.clear();
            cin.sync();
            cout<<"\nC ��� �� ������ ������?: ";
        }
        system("cls");



        switch (PoleVib)
        {
        case 1:
        {
            bool PoleGame=true;
            bool Igrok1=true;
            bool Igrok2=true;
            bool Igrok3=true;

            int SilaVrash;

            int RandomBaraban1=0;
            int RandomBaraban2=0;
            int RandomBaraban3=0;

            int Score1=0;
            int Score2=0;
            int Score3=0;

            //������� �� ��������
            int SektorPlus;
            char SektorF[6];
            char SektorPriz[6];

            //��� �������� �� ��������
            int RandomF;
            int LevPravSektorF;
            char LevSektorFB[6]="�����";
            char LevSektorFS[6]="�����";
            int DliaStrcmp;
            int Dengi1=0;
            int Dengi2=0;
            int Dengi3=0;
            char Prodoljiti[6]="�����";
            char VibPriz[5]="����";
            int RandomVedushii;
            int RandomVedushiiVib;
            int DengiPriz=0;

            cout<<"� ��� ���� �������� ����� ������ ������ 3 ��������.";
            cout<<endl<<nik<<", �� ��� �������, � ��� ����� ������ �������?";
            cout<<endl<<endl<<"����� ����� 1 - "<< nik;
            cout<<endl<<endl<<"����� ����� 2 - ";
            char nik2[20];
            cin>>nik2;
            cout<<endl<<"����� ����� 3 - ";
            char nik3[20];
            cin>>nik3;

            system("cls");

            for (int i=0; i<RazmerSlova; i++)
            {
                SlovoTochki[i]='.';
                SlovoTochki[RazmerSlova]=NULL;
            }

            while (PoleGame)
            {
                //������ �����
                cout<<setw(40)<<"���� �����!";
                cout<<endl<<endl;
                while (Igrok1)
                {
                    cout<<endl;
                    puts(SlovoTochki);

                    cout<<endl<<nik<<" ,������� �������!"<<endl;

                    cout<<"������� ���� �������� (1-100): ";
                    while (!(cin>>SilaVrash))
                    {
                        cout<<"������, �� ����� ���-�� �� ��. ";
                        cin.clear();
                        cin.sync();
                        cout<<"\n������� ���� �������� (1-10): ";
                    }


                    RandomBaraban1= rand() %40;

                    if (RandomBaraban1==1)
                    {
                        cout<<endl<<"������ \"+\" �� ��������!"<<endl<<"�� ������ ������� ����� ����� � �����, ������� � �����: ";
                        cin>>SektorPlus;
                        SektorPlus-=1;

                        for (int i=0; i<RazmerSlova; i++)
                        {
                            if (SektorPlus==i) SlovoTochki[i]=OtvetIgri[i];
                        }
                    }
                    if (RandomBaraban1==2)
                    {
                        Score1+=60;
                        cout<<endl<<"�� �������� 60 �����!"<<endl;
                    }
                    if (RandomBaraban1==3)
                    {
                        Score1+=20;
                        cout<<endl<<"�� �������� 20 �����!"<<endl;
                    }
                    if (RandomBaraban1==4)
                    {
                        cout<<endl<<"������ \"�\" �� ��������!"<<endl<<"��� �������� � ������!";
                        RandomF= rand() %2;
                        cout<<endl<<"��������� �������� (�����/������): ";
                        cin>>SektorF;
                        if (strcmp(SektorF, LevSektorFB)==0) LevPravSektorF=1;
                        else if (strcmp(SektorF, LevSektorFS)==0) LevPravSektorF=1;
                        else LevPravSektorF=2;

                        if (LevPravSektorF==RandomF)
                        {
                            cout<<"�����������! �� �������� 100 ���!"<<endl;
                            Dengi1+=100;
                        }
                        else
                        {
                            cout<<"�� �� ������� ��������"<<endl;
                        }
                    }
                    if (RandomBaraban1==5)
                    {
                        Score1+=150;
                        cout<<endl<<"�� �������� 150 �����!"<<endl;
                    }
                    if (RandomBaraban1==6)
                    {
                        Score1+=60;
                        cout<<endl<<"�� �������� 60 �����!"<<endl;
                    }
                    if (RandomBaraban1==7)
                    {
                        cout<<endl<<"�� �������� 0 �����!"<<endl;
                    }
                    if (RandomBaraban1==8)
                    {
                        Score1+=100;
                        cout<<endl<<"�� �������� 100 �����!"<<endl;
                    }
                    if (RandomBaraban1==9)
                    {
                        Score1+=150;
                        cout<<endl<<"�� �������� 150 �����!"<<endl;
                    }
                    if (RandomBaraban1==10)
                    {
                        Score1+=20;
                        cout<<endl<<"�� �������� 10 �����!"<<endl;
                    }
                    if (RandomBaraban1==12)
                    {
                        Score1+=100;
                        cout<<endl<<"�� �������� 100 �����!"<<endl;
                    }
                    if (RandomBaraban1==13)
                    {
                        Score1+=100;
                        cout<<endl<<"�� �������� 100 �����!"<<endl;
                    }
                    if (RandomBaraban1==14)
                    {
                        cout<<endl<<"�� �������� ������ ����!"<<endl;
                        cout<<"���������, ���� ��� ��������� �����, ���� ��������, �� 500 ����� ����!";
                        cout<<endl<<"���� ��� �����: ";
                        gets(SektorPriz);
                        if (stricmp(SektorPriz,Prodoljiti)==0) cout<<"�� ������� ������� ����� � �������� 500 �����";
                        if (stricmp(SektorPriz,VibPriz)==0) cout<<"׸���� ���� � ������!";

                        RandomVedushii=1;
                        RandomVedushiiVib=2;
                        DengiPriz=0;

                        while (RandomVedushii=!RandomVedushiiVib)
                        {
                            RandomVedushii= rand() %5;
                            RandomVedushiiVib= rand() %5;
                            DengiPriz+=150;
                            cout<<endl<<"�� ���������� ��� ��������: "<<DengiPriz<<" ���!";
                        }


                    }



                }

            }




        }
        }
    }
    }
    system ("pause");
}
