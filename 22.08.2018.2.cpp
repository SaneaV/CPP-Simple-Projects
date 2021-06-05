/*"�������, ��������� ��� ������ ������, ���� ������ ����������, ���� ��������:
-����� ���������� ����;
-�������� ������ �����;
-�������, ��� ������ ������ �����;
-���������� ������� ������ �����;
-�������� ������ ����� (�����, �������, ������ � �.�.);
-����, �� ������� �������� �����;
-������������, ����������� �����;
-������, � ������� ������ �����;
-��� ������� ������ �����.
�������� ���������, ������� ������� �� �����:
� ������ ���� ��������� ������;
� ������ ���� �������� �� ��������� ����� �� �������;
� ������ ���� �������� �� �������� ��������, ������� � 2000 ����.*/

#include <iostream>
#include <windows.h>
#include <cstring>

using namespace std;

int main()
{
    setlocale(LC_ALL,"RUS");

    cout<<"������� ���������� ����: ";
    int AmountOfBooks;
    cin>>AmountOfBooks;

    system("cls");

    struct Books
    {
        char NameBook[20];
        char AuthorName[20];
        char AuthorSurname[20];
        int AmountOfPage;
        char KindOfBook[20];
        char BookLanguage[20];
        char PublishName[20];
        char Country[20];
        int YearOfPublish;
    } B[AmountOfBooks];

    for(int i=0; i<AmountOfBooks; i++)
    {
        cout<<"������� �������� �����(������): ";
        cin>>B[i].NameBook;

        cout<<"������� ��� ������: ";
        cin>>B[i].AuthorName;

        cout<<"������� ������� ������: ";
        cin>>B[i].AuthorSurname;

        cout<<"������� ���������� �������: ";
        cin>>B[i].AmountOfPage;

        cout<<"������� ���� �����: ";
        cin>>B[i].KindOfBook;

        cout<<"������� ���� �����: ";
        cin>>B[i].BookLanguage;

        cout<<"������� �������� ������������: ";
        cin>>B[i].PublishName;

        cout<<"������� ������ ��������� �����: ";
        cin>>B[i].Country;

        cout<<"������� ��� ��������� �����: ";
        cin>>B[i].YearOfPublish;

        system("cls");
    }

    int Selection;
    int Reselection;
    bool FinishProgram = false;

    while(!FinishProgram)
    {
        cout<<"1. ������ ��������� ���� �������� �� �������."<<endl;
        cout<<"2. ������ ���� ��������� ������."<<endl;
        cout<<"3. ������ ���� �������� �� �������� ��������, ������� � 2000 ����."<<endl;
        cout<<"��� �����: ";
        do
        {
            cin>>Selection;
        }
        while(Selection>3 or Selection<1);

        system("cls");

        switch(Selection)
        {
        case 1:
        {

            for(int i=0; i<AmountOfBooks; i++)
            {
                if(strcmp(B[i].BookLanguage,"Rom")==0)
                    if(strcmp("Romania",B[i].Country)!=0)
                    {
                        cout<<"����� - "<<B[i].NameBook<<endl;
                        cout<<"����� - "<<B[i].AuthorName<<" "<<B[i].AuthorSurname<<endl;
                        cout<<"���������� ������� - "<<B[i].AmountOfPage<<endl;
                        cout<<"���� ����� - "<<B[i].KindOfBook<<endl;
                        cout<<"���� ��������� - "<<B[i].BookLanguage<<endl;
                        cout<<"�������� ������������ - "<<B[i].PublishName<<endl;
                        cout<<"������ ��������� - "<<B[i].Country<<endl;
                        cout<<"��� ��������� ����� - "<<B[i].YearOfPublish<<endl;
                        cout<<endl<<endl;
                    }
            }

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
            char Name[20];
            char Surname[20];

            cout<<"������� ������� ������: ";
            cin>>Surname;
            cout<<"������� ��� ������: ";
            cin>>Name;

            system("cls");

            for(int i=0; i<AmountOfBooks; i++)
            {
                if(strcmp(B[i].AuthorSurname,Surname)==0)
                    if(strcmp(B[i].AuthorName,Name)==0)
                    {
                        cout<<"����� - "<<B[i].NameBook<<endl;
                        cout<<"����� - "<<B[i].AuthorName<<" "<<B[i].AuthorSurname<<endl;
                        cout<<"���������� ������� - "<<B[i].AmountOfPage<<endl;
                        cout<<"���� ����� - "<<B[i].KindOfBook<<endl;
                        cout<<"���� ��������� - "<<B[i].BookLanguage<<endl;
                        cout<<"�������� ������������ - "<<B[i].PublishName<<endl;
                        cout<<"������ ��������� - "<<B[i].Country<<endl;
                        cout<<"��� ��������� ����� - "<<B[i].YearOfPublish<<endl;
                        cout<<endl<<endl;
                    }
            }

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
        case 3:
        {
            char Kind[20];
            cout<<"������� ���� �����: ";
            cin>>Kind;

            system("cls");

            for(int i=0; i<AmountOfBooks; i++)
            {
                if(strcmp(Kind,B[i].KindOfBook)==0)
                    if(B[i].YearOfPublish>=2000)
                    {
                        cout<<"����� - "<<B[i].NameBook<<endl;
                        cout<<"����� - "<<B[i].AuthorName<<" "<<B[i].AuthorSurname<<endl;
                        cout<<"���������� ������� - "<<B[i].AmountOfPage<<endl;
                        cout<<"���� ����� - "<<B[i].KindOfBook<<endl;
                        cout<<"���� ��������� - "<<B[i].BookLanguage<<endl;
                        cout<<"�������� ������������ - "<<B[i].PublishName<<endl;
                        cout<<"������ ��������� - "<<B[i].Country<<endl;
                        cout<<"��� ��������� ����� - "<<B[i].YearOfPublish<<endl;
                        cout<<endl<<endl;
                    }
            }

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


