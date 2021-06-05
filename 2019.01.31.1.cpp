#include <iostream>
#include <windows.h>
#include <conio.h>

using namespace std;

class TollBooth
{
private:
    unsigned int NumberOfCars;
    double Money;

    float LightCar;
    float HardCar;
    float Passenger;
public:
    float PayingCar();
    int NoPayCar();
    void Display();

    TollBooth();
};

TollBooth::TollBooth()
{
    Money = 0;
    NumberOfCars = 0;

    LightCar=0;
    HardCar=0;
    Passenger=0;
}

float TollBooth::PayingCar()
{
    NumberOfCars++;

    cout<<"1. �������� ������. ����� = 0.5"<<endl;
    cout<<"2. �������� ������. ����� = 1.5 "<<endl;
    cout<<"3. ������������ ������. ����� = 1"<<endl;

    bool TypeCar = false;

    while(!TypeCar)
    {
        if(_kbhit)
        {
            switch(getch())
            {
            case '1':
            {
                LightCar++;
                Money+=0.5;
                TypeCar=true;
                break;
            }
            case '2':
            {
                HardCar++;
                Money+=1.5;
                TypeCar=true;
                break;
            }
            case '3':
            {
                Passenger++;
                Money+=1.0;
                TypeCar=true;
                break;
            }
            }
        }
    }
}

int TollBooth::NoPayCar()
{
    NumberOfCars++;
}

void TollBooth::Display()
{
    cout<<"���������� ���������� �����: "<<NumberOfCars<<endl;
    cout<<"����� ���������� �����: "<<Money<<endl<<endl;

    cout<<"���������� ������� �����: "<<LightCar<<endl;
    cout<<"��������� �����: "<<LightCar*0.5<<endl<<endl;

    cout<<"���������� �������� �����: "<<HardCar<<endl;
    cout<<"��������� �����: "<<HardCar*1.5<<endl<<endl;

    cout<<"���������� ������������ �����: "<<Passenger<<endl;
    cout<<"��������� �����: "<<Passenger<<endl<<endl;
    system("PAUSE");
}

int main()
{
    setlocale(LC_ALL,"RUS");

    bool Work = true;
    TollBooth Car;

    while(Work)
    {
        cout<<"������� 1, ���� ������ �������� � ���������."<<endl;
        cout<<"������� 2, ���� ������ �������� � �� ���������."<<endl;
        cout<<"������� 3, ���� ������ ������� ����������."<<endl;
        cout<<"������� 0, ���� ������ ����� �� ���������."<<endl;
        if(_kbhit)
        {
            switch(getch())
            {
            case '1':
            {
                cout<<"������ �������� � ���������"<<endl;
                Car.PayingCar();
                break;
            }
            case '2':
            {
                cout<<"������ �������� � �� ���������"<<endl;
                Car.NoPayCar();
                break;
            }
            case '3':
            {
                system("cls");
                Car.Display();
                break;
            }
            case '0':
            {
                Work=false;
            }
            }
        }
        system("cls");
    }



}
