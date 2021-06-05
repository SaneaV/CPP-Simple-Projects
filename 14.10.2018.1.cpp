/*����������� ������ � �������. ������� n ���������. ��� ������� �������� i (i=1, 2, ..., n) �������� ��� gi � ������� ci,
������� ���������� ��� ���������������. ������� ������, � ������� ����� ���������� ���� � ����� ���������,
��������� ��� ������� �� ��������� �������� Gmax. �������� ���������, ������� ����������, ����� ������� ���������� ��������� ������ � ���,
����� ��������� ������� C ���� �����������. ��� �������������, ����������� �������� ����� ��������� �� ������� �����.*/

//��������� �����, ������� �������� �� �������� ������ ������ ������ ��������.


#include <iostream>
#include <cstring>
#include <windows.h>
#include <fstream>

using namespace std;

struct Things
{
    char NameThing[20];
    int price;
    int weight;
    float KPD;
} T[100];

int main()
{
    setlocale(LC_ALL,"RUS");

    int n;

    ifstream f("Things.txt");

    f>>n;

    for(int i=0;i<n;i++)
    {
        f>>T[i].NameThing;
        f>>T[i].price;
        f>>T[i].weight;
        T[i].KPD = (T[i].price*1.0/T[i].weight*1.0);
    }

    char Th[20];
    int p;
    int w;
    int k;

    for(int i=0; i<n-1; i++)
    {
        for(int j=0; j<n-1-i; j++)
        {
            if(T[j].KPD<T[j+1].KPD)
            {
                strcpy(Th, T[j].NameThing);
                p=T[j].price;
                w=T[j].weight;
                k=T[j].KPD;

                /*strcpy(T[j].NameThing,T[j+1].NameThing);
                T[j].price=T[j+1].price;
                T[j].weight=T[j+1].weight;
                T[j].KPD=T[j+1].KPD;*/

                T[j]=T[j+1];

                strcpy(T[j+1].NameThing, Th);
                T[j+1].price=p;
                T[j+1].weight=w;
                T[j+1].KPD=k;
            }

            if(T[j].KPD==T[j+1].KPD and T[j+1].price>T[j].price)
            {
                strcpy(Th, T[j].NameThing);
                p=T[j].price;
                w=T[j].weight;
                k=T[j].KPD;

                /*strcpy(T[j].NameThing,T[j+1].NameThing);
                T[j].price=T[j+1].price;
                T[j].weight=T[j+1].weight;
                T[j].KPD=T[j+1].KPD;*/

                T[j]=T[j+1];

                strcpy(T[j+1].NameThing, Th);
                T[j+1].price=p;
                T[j+1].weight=w;
                T[j+1].KPD=k;
            }
        }
    }

    for(int i=0; i<n; i++)
    {
        cout<<T[i].NameThing<<" "<<T[i].price<<" "<<T[i].weight<<" "<<T[i].KPD<<endl;
    }

    cout<<endl<<endl;
    cout<<"������� ������ ��������: ";
    int BagFill;
    cin>>BagFill;
    cout<<endl<<endl;

    int ThingWeight=0;
    int ThingPrice=0;

    for(int i=0; i<n; i++)
    {
        if((ThingWeight+T[i].weight)<=BagFill)
        {
            ThingWeight+=T[i].weight;
            ThingPrice+=T[i].price;
            cout<<"� �������� ����� �����: "<<T[i].NameThing<<" "<<T[i].price<<" "<<T[i].weight<<endl;
        }
    }

    cout<<endl<<endl<<"� �������� �������� �����: "<<BagFill-ThingWeight<<endl;
    cout<<"����� ��������� ����� � ��������: "<<ThingPrice;
}

