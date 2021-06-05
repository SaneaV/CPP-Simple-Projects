/* ��������� �������, ������� ����
<<"0-�����"<<;
<<"1-��������"<<;
<<"2-��������"<<;
<<"3-�������"<<;
<<"4-����������� ��������"<<;
<<"5-������������ ��������"<<;
<<"6-�������� ����������"<<;
<<"7-����� ��������"<<;
<<"8-���������� ���� ������ ��� ����� 10"<<;
*/

#include <iostream>
#include <fstream>
#include <windows.h>

using namespace std;

struct Worker
{
    char Name[200];
    int Days;
    float Tarif;

} t[50];

int n;

void ReadInfo()
{
    int i=0;

    ifstream f("Worker.txt");

    while(!f.eof())
    {
        f>>t[i].Name>>t[i].Days>>t[i].Tarif;
        if (!f.eof())
            i++;

    }
    n=i;
    f.close();
}
void ShowInfo()
{

    for(int i=0; i<n; i++)
        cout<<t[i].Name<<"\t"<<t[i].Days<<"\t"<<t[i].Tarif<<endl;
}
void rewrite()
{
    ofstream f("Worker.txt");
    for(int i=0; i<n; i++)
        f<<t[i].Name<<" "<<t[i].Days<<" "<<t[i].Tarif<<endl;
    f.close();
}
void AddInfo()
{
    Worker x;
    int poz;
    cout<<"���� ���������� � ����� ���������:"<<endl;
    cout<<"���: ";
    cin>>x.Name;
    cout<<"���������� ����: ";
    cin>>x.Days;
    cout<<"�����: ";
    cin>>x.Tarif;
    cout<<"������� �������: ";
    cin>>poz;
    poz--;

    if(poz>=0 and poz<=n)
    {
        n++;
        for(int i=n-1; i>=poz; i--)
            t[i]=t[i-1];
        t[poz]=x;

        rewrite();
    }
    else
        cout<<"����� ��������� " <<n<<" ����������"<<endl;
}
void DelInfo()
{
    Worker x;
    int poz;

    cout<<"������� ������� ��� ��������: ";
    cin>>poz;
    poz--;
    if(poz>-1 and poz<=n)
    {
        n--;
        for(int i=poz; i<n; i++)
            t[i]=t[i+1];

        rewrite();
    }
    else
        cout<<"����� ��������� " <<n<<" ����������"<<endl;
}
void MinTarif()
{
    int poz=0;
    int min=t[0].Tarif;

    for(int i=1; i<n; i++)
    {
        if(min>t[i].Tarif)
        {
            poz=i;
            min=t[i].Tarif;
        }

    }
    cout<<"����������� �����: "<<endl;
    cout<<t[poz].Name<<"\t"<<t[poz].Days<<"\t"<<t[poz].Tarif<<endl;
}
void MaxTarif()
{
    int poz=0;

    for(int i=1; i<n; i++)
    {
        if(t[i].Tarif>t[i+1].Tarif)
            poz=i;
    }
    cout<<"������������ ��������: "<<endl;
    cout<<t[poz].Name<<"\t"<<t[poz].Days<<"\t"<<t[poz].Tarif<<endl;
}
void AllSallary()
{
    for (int i=0; i<n; i++)
        cout<<t[i].Name<<"\t"<<t[i].Tarif<<endl;
}


void SumTarif()
{
    float ST=0;

    for(int i=0; i<n; i++)
    {
        ST+=t[i].Tarif;
    }
    cout<<"����� ��������: "<<ST<<endl;
}
void ShowDays()
{
    cout<<"���������, ��� ���������� ������������ ���� ������ ��� ����� 10: "<<endl;
    for(int i=0; i<n; i++)
    {
        if (t[i].Days<=10)
            cout<<t[i].Name<<"\t"<<t[i].Days<<"\t"<<t[i].Tarif<<endl;
    }
}

int main()
{
    setlocale(LC_ALL,"RUS");
    int ch;
    do
    {
        cout<<"0-�����"<<endl;
        cout<<"1-��������"<<endl;
        cout<<"2-��������"<<endl;
        cout<<"3-�������"<<endl;
        cout<<"4-����������� ��������"<<endl;
        cout<<"5-������������ ��������"<<endl;
        cout<<"6-�������� ����������"<<endl;
        cout<<"7-����� ��������"<<endl;
        cout<<"8-���������� ���� ������ ��� ����� 10"<<endl;
        cout<<"��� �����: "<<endl;
        cin>>ch;

        switch(ch)
        {
        case 1:
        {
            system("cls");
            ReadInfo();
            ShowInfo();
            break;
        }
        case 2:
        {
            system("cls");
            ReadInfo();
            AddInfo();
            break;
        }
        case 3:
        {
            system("cls");
            ReadInfo();
            DelInfo();
            break;
        }
        case 4:
        {
            system("cls");
            ReadInfo();
            MinTarif();
            break;
        }
        case 5:
        {
            system("cls");
            ReadInfo();
            MaxTarif();
            break;
        }
        case 6:
        {
            system("cls");
            ReadInfo();
            AllSallary();
            break;

        }
        case 7:
        {
            system("cls");
            ReadInfo();
            SumTarif();
            break;
        }
        case 8:
        {
            system("cls");
            ReadInfo();
            ShowDays();
            break;
        }
        case 0:
        {
            return 0;
        }

        }
    }
    while(ch!=9);

    return 1;
}
