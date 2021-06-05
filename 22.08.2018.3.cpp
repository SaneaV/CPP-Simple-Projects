/*"����� ��������� ��������������� ���� ���������, ����������� ����� � ����� ����� �����. ������ ������ �������, ���������� �������� � ������ ���� ����������. ���������� � ������� �� �����:
� ������� ����� ����������, � ������� ���������� ����� ����������� ������� ����� �����.
� ������� ���� ����������, � ������� ����� ������� �� 1 ���� ����� ����� 100 ��, �� ����� 10 ��.*/

#include <iostream>
#include <windows.h>

using namespace std;

int main()
{
    setlocale(LC_ALL,"RUS");

    cout<<"������� ���������� ����������: ";
    int n;
    cin>>n;

    system("cls");

    struct BAG
    {
        char Name[20];
        char Surname[20];
        char MiddleName[20];
        int k;
        int m;
    } B[n];

    for(int i=0; i<n; i++)
    {
        cout<<"������� ��� ��������: ";
        cin>>B[i].Name;

        cout<<"������� ������� ��������: ";
        cin>>B[i].Surname;

        cout<<"������� �������� ��������: ";
        cin>>B[i].MiddleName;

        cout<<"������� ���������� �����: ";
        cin>>B[i].k;

        cout<<"������� ����� �����: ";
        cin>>B[i].m;

        system("cls");
    }

    int Selection;
    int Reselection;
    bool FinishProgram = false;

    while(!FinishProgram)
    {
        cout<<"1. ����� ����������, � ������� ���������� ����� ����������� ������� ����� �����."<<endl;
        cout<<"2. ���������, � ������� ����� ������� �� 1 ���� ����� ����� 100 ��, �� ����� 10 ��."<<endl;
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
            int S = 0;
            int k = 0;
            int M = 0;
            for(int i=0; i<n; i++)
            {
                S += B[i].k;
            }

            M = S/n;

            for(int i=0; i<n; i++)
            {
                if(B[i].k>M)
                    k++;
            }

            cout<<"����� ����������, � ������� ���������� ������ ���� ��������: "<<k<<endl;

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
            for(int i=0; i<n; i++)
            {
                if(B[i].k==1)
                    if(B[i].m>10 and B[i].m<100)
                        cout<<"�������� - "<<B[i].Name<<" "<<B[i].Surname<<" "<<B[i].MiddleName<<" - ��������� � ����� 1 ����, ����� � - "<<B[i].m<<" ��."<<endl;
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
