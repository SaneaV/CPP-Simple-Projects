//������ � ������� �� �++.

#include <iostream>
#include <fstream>
#include <stdio.h>
#include <windows.h>

using namespace std;

struct student
{
    char Name[20];
    char Surname[20];
    float Medium;
} Stud[20];


int main()
{
    setlocale(LC_ALL,"RUS");
    ofstream f("Student.txt");

    cout<<"������� ���������� ��������: ";
    int n;
    cin>>n;

    Sleep(200);
    system("cls");

    for (int i=0; i<n; i++)
    {
        cin.ignore();
        cout<<"��� �������: ";
        gets(Stud[i].Name);
        cout<<"������� �������: ";
        gets(Stud[i].Surname);
        cout<<"������� ����: ";
        cin>>Stud[i].Medium;

        f<<Stud[i].Name<<" "<<Stud[i].Surname<<" "<<Stud[i].Medium<<endl;
        Sleep(200);
        system("cls");
    }


    f.close();

    ifstream g("Student.txt");

    int i=0;
    while(!g.eof())
    {
        g>>Stud[i].Name>>Stud[i].Surname>>Stud[i].Medium;

        if (!g.eof())
        {
            cout<<Stud[i].Name<<" "<<Stud[i].Surname<<" "<<Stud[i].Medium<<endl;
        }
    }
    n=i;



   g.close();


}
