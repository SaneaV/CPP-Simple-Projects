#include <iostream>
#include <windows.h>
#include <conio.h>
#include <cstring>

using namespace std;

class product
{
private:
    string postavshik;
    int price;
    int kolOf;
public:
    virtual void getdata()
    {
        cout<<"������� ��� ����������: ";
        cin>>postavshik;
        cout<<"������� ����: ";
        cin>>price;
        cout<<"������� ���������� ��������: ";
        cin>>kolOf;
    }

    virtual void putdata()
    {
        cout<<"��� ����������: "<<postavshik<<endl;
        cout<<"����: "<<price<<endl;
        cout<<"���������� ��������: "<<kolOf<<endl;
    }

    int Getprice()
    {
        return price;
    }

    virtual bool isDeficiency() = 0;
    virtual int Summa() = 0;
};

class delivery
{
private:
    float Massive[3];
public:
    void getdata()
    {
        cout<<"������� ����� ������ �� ������ �����: ";
        cin>>Massive[0];
        cout<<"������� ����� ������ �� ������ �����: ";
        cin>>Massive[1];
        cout<<"������� ����� ������ �� ������ �����: ";
        cin>>Massive[2];
    }
    void putdata()
    {
        cout<<"����� ������ �� ������ �����: "<<Massive[0]<<endl;
        cout<<"����� ������ �� ������ �����: "<<Massive[1]<<endl;
        cout<<"����� ������ �� ������ �����: "<<Massive[2]<<endl;
    }

    int ObshSum()
    {
        return Massive[0]+Massive[1]+Massive[2];
    }

};


class crupa : public product, public delivery
{
    char nameCrupa[255];
    int weight;

public:

    void getdata()
    {
        product::getdata();
        delivery::getdata();
        cout<<"������� �������� �����: ";
        cin>>nameCrupa;
        cout<<"������� ���: ";
        cin>>weight;
    }
    void putdata()
    {
        product::putdata();
        delivery::putdata();
        cout<<"�������� �����: "<<*nameCrupa<<endl;
        cout<<"���: "<<weight<<endl;
    }

    int Summa()
    {
        return ObshSum()*Getprice();
    }

    bool isDeficiency()
    {
        return (weight <=5) ? true : false;
    }
};


class sok : public product, public delivery
{
private:
    char nameSok[255];
    int litr;
    char sostav[255];
public:
    void getdata()
    {
        product::getdata();
        delivery::getdata();
        cout<<"������� �������� ����: ";
        cin>>nameSok;
        cout<<"������� �����: ";
        cin>>litr;
        cout<<"������� ������: ";
        cin>>sostav;
    }
    void putdata()
    {
        product::putdata();
        delivery::putdata();
        cout<<"�������� ����: "<<*nameSok<<endl;
        cout<<"������: "<<litr<<endl;
        cout<<"������: "<<*sostav<<endl;
    }
    bool isDeficiency()
    {
        return (litr >= 10) ? true : false;
    }

    int Summa()
    {
        return ObshSum()*Getprice();
    }


};


int main()
{
    setlocale(LC_ALL,"RUS");

    product *prod[100];
    int n=0;
    bool Menu = true;
    int Select;

    do
    {
        cout<<"�������� �����(1) "<<endl;
        cout<<"�������� ���(2)"<<endl;
        cout<<"������� �� �����(3)"<<endl;
        cout<<"������� ����� �����(4)"<<endl;
        cout<<"������� ��������� �����(5)"<<endl;
        cout<<"����� �� ��������� (0)"<<endl;
        cout<<"��� �����: ";
        cin>>Select;


        switch(Select)
        {
        case 1:
        {
            cout<<endl;
            prod[n] = new crupa;
            prod[n++]->getdata();
            break;
        }
        case 2:
        {
            cout<<endl;
            prod[n] = new sok;
            prod[n++]->getdata();
            break;
        }
        case 3:
        {
            for(int i=0; i<n; i++)
            {
                prod[i]->putdata();
                if(prod[i]->isDeficiency())
                    cout<<endl<<"����� �����!!!"<<endl;
                cout<<endl;
            }
            system("Pause");
            break;
        }
        case 4:
        {
            int Sum = 0;
            for(int i=0; i<n; i++)
            {
                Sum += prod[i]->Summa();
            }
            cout<<"����� �����: "<<Sum<<endl;
            system("PAUSE");
            break;
        }
        case 5:
        {
            int y = 0;
            int Sum = 0;
            cout<<"������� ����� �������: ";

            cin>>y;
            Sum += prod[y]->Summa();
            cout<<"����� �����: "<<Sum<<endl;
            system("PAUSE");
            break;
        }
        case 0:
        {
            Menu = false;
            break;
        }
        }

        system("cls");

    }
    while(Menu);

    system("cls");


}

