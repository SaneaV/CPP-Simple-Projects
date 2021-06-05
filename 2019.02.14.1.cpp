#include <iostream>
#include <windows.h>
#include <iomanip>
#include <stdio.h>
#include <conio.h>
#include <cstring>

using namespace std;

class Cars
{
public:
    char Marka[30];
    int price;

    void AddCar();

    Cars(char *, int);
    Cars() {}
};


Cars::Cars(char *Marka, int price)
{
    this->Marka[30]=Marka[30];
    this->price=price;
}

void Cars::AddCar()
{
    system("cls");
    cout<<setw(40)<<"���������� ������"<<endl;
    cout<<"������� �������� ������: ";
    cin.sync();
    gets(Marka);
    cout<<"������� ���� ������: ";
    cin>>price;

}

int main()
{
    setlocale(LC_ALL,"RUS");
    bool Stop = false;
    int n=-1;

    Cars CarsArr[500];

    while(!Stop)
    {
        cout<<setw(40)<<"����� ����������!"<<endl;
        cout<<"1. ��������: �������� ������."<<endl;
        cout<<"2. �����: �������� ������."<<endl;
        cout<<"3. ����� �� ���������."<<endl;
        cout<<"�������� �������: ";

        if(_kbhit)
        {
            switch(getch())
            {
            case '1':
            {
                ++n;
                cout<<n;
                CarsArr[n].AddCar();

                break;
            }
            case '2':
            {
                char SelectMarka[30];
                int k=0;

                system("cls");
                cout<<setw(40)<<"����� ������."<<endl;
                cout<<"������� ����� ������: ";
                cin.sync();
                gets(SelectMarka);

                cout<<"���������� �����: ";
                for(int i=0; i<=n; i++)
                    if(strcmp(SelectMarka,CarsArr[i].Marka)==0)
                    {
                        cout<<endl<<endl;
                        cout<<"������ ����� ���� �������, � ���������: "<<CarsArr[i].price<<endl;
                        k++;
                    }
                if(k!=0)
                    getch();

                try
                {
                    if(k==0)
                        throw 1;
                }
                catch(int i)
                {
                    cout<<"� ���������, ������ ������ ������ ��� � ������."<<endl;
                }

                break;
            }
            case '3':
            {
                /*for(int i=0; i<=n; i++)
                {
                    cout<<CarsArr[i].Marka;
                    cout<<CarsArr[i].price;
                    cout<<endl;
                }*/

                system("cls");
                Stop=true;
                break;
            }

            }
            system("cls");
        }
    }
}
