//��� ������� �� �������� ������������� ��������:
//-�����������(��������, ABC, MNK);
//-����� ������;
//-�������� ���� �����.
//�������� ���������, �������:
//� ���������� ��� ������� ������������ (�������������, �������������, ������������, ��������������, ��������������)
//� ������� �������� � ������� ������� ������������.

#include <iostream>
#include <windows.h>
#include <cstring>
#include <cmath>

using namespace std;

int main()
{
    setlocale(LC_ALL,"RUS");

    int Amount;
    cout<<"������� ���������� �������������: ";
    cin>>Amount;

    system("cls");

    struct Triangle
    {
        char NameTriangle[5];
        int Lenght1;
        int Lenght2;
        int Lenght3;
        int AngleValue1;
        int AngleValue2;
    } T[Amount];

    int AngleValue3;

    for(int i=0; i<Amount; i++)
    {
        do
        {
            cout<<"������� ����������� ������������(ABC): ";
            cin>>T[i].NameTriangle;
            if(strlen(T[i].NameTriangle)>3 or strlen(T[i].NameTriangle)<3)
            {
                cout<<endl<<"���������, ��� �������� ������� �� 3 ����"<<endl;
            }
        }
        while(strlen(T[i].NameTriangle)>3 or strlen(T[i].NameTriangle)<3);

        do
        {
            cout<<"������� ����� ������ �������: ";
            cin>>T[i].Lenght1;

            cout<<"������� ����� ������ �������: ";
            cin>>T[i].Lenght2;

            cout<<"������� ����� ������� �������: ";
            cin>>T[i].Lenght3;

            if(T[i].Lenght1<=0 or T[i].Lenght2<=0 or T[i].Lenght3<=0 or
                    (T[i].Lenght1+T[i].Lenght2)<T[i].Lenght3 or
                    (T[i].Lenght1+T[i].Lenght3)<T[i].Lenght2 or
                    (T[i].Lenght3+T[i].Lenght2)<T[i].Lenght1)
                cout<<"����������� � ������ ��������� ���������� ���������."<<endl<<"��������� ����."<<endl;

        }
        while(T[i].Lenght1<=0 or T[i].Lenght2<=0 or T[i].Lenght3<=0 or
                (T[i].Lenght1+T[i].Lenght2)<T[i].Lenght3 or
                (T[i].Lenght1+T[i].Lenght3)<T[i].Lenght2 or
                (T[i].Lenght3+T[i].Lenght2)<T[i].Lenght1);

        do
        {
            cout<<"������� �������� ������� ����: ";
            cin>>T[i].AngleValue1;

            cout<<"������� �������� ������� ����: ";
            cin>>T[i].AngleValue2;

            AngleValue3 = 180 - T[i].AngleValue1 - T[i].AngleValue2;

            if((AngleValue3+T[i].AngleValue1+T[i].AngleValue2)<180 or (AngleValue3+T[i].AngleValue1+T[i].AngleValue2)>180
                    or AngleValue3==0 or T[i].AngleValue1==0 or T[i].AngleValue2==0)
                cout<<"����������� � ������ ������ ���������� ���������."<<endl<<"��������� ����."<<endl;

        }
        while((AngleValue3+T[i].AngleValue1+T[i].AngleValue2)<180 or (AngleValue3+T[i].AngleValue1+T[i].AngleValue2)>180
              or AngleValue3==0 or T[i].AngleValue1==0 or T[i].AngleValue2==0);

        system("cls");
    }

    int Selection;
    int Reselection;
    bool FinishProgram = false;

    while(!FinishProgram)
    {
        cout<<"1. ���������� ��� ������� ������������."<<endl;
        cout<<"2. ����� �������� � ������� ������� ������������."<<endl;
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
            for(int i=0; i<Amount; i++)
            {
                AngleValue3 = 180 - T[i].AngleValue1 - T[i].AngleValue2;

                if(T[i].Lenght1==T[i].Lenght2 and T[i].Lenght1==T[i].Lenght3)
                    cout<<T[i].NameTriangle<<" ����������� ��������������."<<endl;

                if((T[i].Lenght1==T[i].Lenght2 and T[i].Lenght3!=T[i].Lenght1) or
                        (T[i].Lenght1==T[i].Lenght3 and T[i].Lenght1!=T[i].Lenght2) or
                        (T[i].Lenght2==T[i].Lenght3 and T[i].Lenght1!=T[i].Lenght2))
                {
                    cout<<T[i].NameTriangle<<" ����������� ��������������, ";

                    if (T[i].AngleValue1==T[i].AngleValue2 and AngleValue3<90 or
                            T[i].AngleValue1==AngleValue3 and T[i].AngleValue2<90 or
                            AngleValue3==T[i].AngleValue2 and T[i].AngleValue1<90)
                        cout<<"�������������."<<endl;

                    if(T[i].AngleValue1>90 or T[i].AngleValue2>90 or AngleValue3>90)
                        cout<<"������������."<<endl;

                    if((T[i].AngleValue1+T[i].AngleValue2)==90 or
                            (T[i].AngleValue1+AngleValue3)==90 or
                            (T[i].AngleValue2+AngleValue3)==90)
                        cout<<"�������������"<<endl;

                }

                if(T[i].Lenght1!=T[i].Lenght2 and
                        T[i].Lenght1!=T[i].Lenght3 and
                        T[i].Lenght2!=T[i].Lenght3)
                {
                    cout<<T[i].NameTriangle<<" ����������� ��������������, ";

                    if(T[i].AngleValue1<90 and T[i].AngleValue2<90 and AngleValue3<90)
                        cout<<"�������������."<<endl;

                    if(T[i].AngleValue1>90 or T[i].AngleValue2>90 or AngleValue3>90)
                        cout<<"������������."<<endl;
                    if(T[i].AngleValue1==90 or T[i].AngleValue2==90 or AngleValue3==90)
                        cout<<"�������������."<<endl;

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
            float p;
            float S;
            for(int i=0; i<Amount; i++)
            {
                p = (T[i].Lenght1+T[i].Lenght2+T[i].Lenght3)/2.0;
                S = sqrt(p*(p-T[i].Lenght1)*(p-T[i].Lenght2)*(p-T[i].Lenght3));
                         cout<<"�������� ������������ "<<T[i].NameTriangle<<" - "<<T[i].Lenght1+T[i].Lenght2+T[i].Lenght3<<endl;
                         cout<<"������� ������������ "<<T[i].NameTriangle<<" - "<<S<<endl<<endl;
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
