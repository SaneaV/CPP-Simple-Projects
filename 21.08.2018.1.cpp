/*��� ������� �� �������� ���������������� ��������:
-�����������(��������, ABCD, MNKP);
-�������;
-�������� ������ �� ��� �����.
�������� ���������, �������:
� ���������� ��� ������� ��������������� (������������, ����, �������������, �������)
� ������� �������� � ������� ������� ���������������.
*/

#include <iostream>
#include <windows.h>
#include <cstring>
#include <cmath>

using namespace std;

int main()
{
    setlocale(LC_ALL,"rus");

    cout<<"������� ���������� �����: ";
    int n;
    cin>>n;

    system("cls");

    struct Paral
    {
        char Name[5];
        int A;
        int B;
        int C;
        int D;
        int AngVal;
    } P[n];

    bool Check = false;

    for(int i=0; i<n; i++)
    {
        do
        {
            cout<<"������� ����������� ���������������(ABCD): ";
            cin>>P[i].Name;
        }
        while(strlen(P[i].Name)>4 or strlen(P[i].Name)<4);

        do
        {
            cout<<"������� ������ ������� ���������������: ";
            cin>>P[i].A;

            cout<<"������� ������ ������� ���������������: ";
            cin>>P[i].B;

            cout<<"������� ������ ������� ���������������: ";
            cin>>P[i].C;

            cout<<"������� ������� ������� ���������������: ";
            cin>>P[i].D;

            if(P[i].A > P[i].B + P[i].C + P[i].D or
                    P[i].B > P[i].A + P[i].C + P[i].D or
                    P[i].C > P[i].B + P[i].A + P[i].D or
                    P[i].D > P[i].B + P[i].C + P[i].A)
                cout<<"���� �� ������ ������ ����� ���� ���������. ��������� ����."<<endl;

        }
        while(P[i].A > P[i].B + P[i].C + P[i].D or
                P[i].B > P[i].A + P[i].C + P[i].D or
                P[i].C > P[i].B + P[i].A + P[i].D or
                P[i].D > P[i].B + P[i].C + P[i].A);

        do
        {
            Check = false;
            cout<<"������� �������� ����: ";
            cin>>P[i].AngVal;
        }
        while(P[i].AngVal<1 or P[i].AngVal>180);

        system("cls");

    }

    int Selection;
    int Reselection;
    bool FinishProgram = false;


    while(!FinishProgram)
    {
        cout<<"1.���������� ��� ������ ������."<<endl;
        cout<<"2.����� �������� � ������� ������ ������."<<endl;
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
            for(int i=0; i<n; i++)
            {
                if((P[i].A == P[i].B and P[i].D == P[i].C and P[i].C!=P[i].A and P[i].AngVal==90) or
                        (P[i].A == P[i].D and P[i].B == P[i].C and P[i].C!=P[i].A and P[i].AngVal==90) or
                        (P[i].A == P[i].C and P[i].B == P[i].D and P[i].B!=P[i].A and P[i].AngVal==90))
                    cout<<P[i].Name<<" - "<<"�������������"<<endl;

                else if((P[i].A == P[i].B and P[i].D == P[i].C and P[i].C!=P[i].A and P[i].AngVal!=90) or
                        (P[i].A == P[i].D and P[i].B == P[i].C and P[i].C!=P[i].A and P[i].AngVal!=90) or
                        (P[i].A == P[i].C and P[i].B == P[i].D and P[i].B!=P[i].A and P[i].AngVal!=90))
                    cout<<P[i].Name<<" - "<<"��������������"<<endl;

                else if((P[i].A == P[i].B and P[i].D == P[i].C and P[i].A==P[i].D and P[i].AngVal!=90) or
                        (P[i].A == P[i].D and P[i].B == P[i].C and P[i].C==P[i].A and P[i].AngVal!=90) or
                        (P[i].A == P[i].C and P[i].B == P[i].D and P[i].B==P[i].A and P[i].AngVal!=90))
                    cout<<P[i].Name<<" - "<<"����"<<endl;

                else if((P[i].A == P[i].B and P[i].D == P[i].C and P[i].A==P[i].D and P[i].AngVal==90) or
                        (P[i].A == P[i].D and P[i].B == P[i].C and P[i].C==P[i].A and P[i].AngVal==90) or
                        (P[i].A == P[i].C and P[i].B == P[i].D and P[i].B==P[i].A and P[i].AngVal==90))
                    cout<<P[i].Name<<" - "<<"�������"<<endl;

                else
                    cout<<P[i].Name<<" - "<<"������������ ��������������"<<endl;
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
            for(int i=0; i<n; i++)
            {
                if((P[i].A == P[i].B and P[i].D == P[i].C and P[i].A==P[i].D and P[i].AngVal==90) or
                        (P[i].A == P[i].D and P[i].B == P[i].C and P[i].C==P[i].A and P[i].AngVal==90) or
                        (P[i].A == P[i].C and P[i].B == P[i].D and P[i].B==P[i].A and P[i].AngVal==90))
                    cout<<P[i].Name<<" - "<<"�������"<<" -  �������� - "<<4*P[i].A<<" - ������� - "<<2*P[i].A<<endl;

                if(P[i].A == P[i].B and P[i].D == P[i].C and P[i].C!=P[i].A and P[i].AngVal==90)
                    cout<<P[i].Name<<" - "<<"�������������"<<" -  �������� - "<<2*(P[i].A+P[i].D)<<" - ������� - "<<P[i].A*P[i].D<<endl;
                else if ((P[i].A == P[i].D and P[i].B == P[i].C and P[i].C!=P[i].A and P[i].AngVal==90) or
                         (P[i].A == P[i].C and P[i].B == P[i].D and P[i].B!=P[i].A and P[i].AngVal==90))
                    cout<<P[i].Name<<" - "<<"�������������"<<" -  �������� - "<<2*(P[i].A+P[i].B)<<" - ������� - "<<P[i].A*P[i].B<<endl;


                if(P[i].A == P[i].B and P[i].D == P[i].C and P[i].C!=P[i].A and P[i].AngVal!=90)
                    cout<<P[i].Name<<" - "<<"��������������"<<" -  �������� - "<<2*(P[i].A+P[i].D)<<" - ������� - "<<P[i].A*P[i].D*sin(P[i].AngVal)<<endl;
                else if((P[i].A == P[i].D and P[i].B == P[i].C and P[i].C!=P[i].A and P[i].AngVal!=90) or
                        (P[i].A == P[i].C and P[i].B == P[i].D and P[i].B!=P[i].A and P[i].AngVal!=90))
                    cout<<P[i].Name<<" - "<<"��������������"<<" -  �������� - "<<2*(P[i].A+P[i].B)<<" - ������� - "<<P[i].A*P[i].B*sin(P[i].AngVal)<<endl;


                if((P[i].A == P[i].B and P[i].D == P[i].C and P[i].A==P[i].D and P[i].AngVal!=90) or
                        (P[i].A == P[i].D and P[i].B == P[i].C and P[i].C==P[i].A and P[i].AngVal!=90) or
                        (P[i].A == P[i].C and P[i].B == P[i].D and P[i].B==P[i].A and P[i].AngVal!=90))
                    cout<<P[i].Name<<" - "<<"����"<<" -  �������� - "<<4*P[i].A<<" - ������� - "<<pow(P[i].A,2)*sin(P[i].AngVal)<<endl;
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
