//������ ���� � ����������� � ����� (�����, ���, �������, ���, ��������, ���)

#include <iostream>
#include <fstream>

using namespace std;

main()
{
    setlocale (LC_ALL,"rus");
    ofstream f("file4.txt");
    struct elev
    {
        int number;
        char name[20];
        char surname[30];
        int year;
        int cash;
        char gender; //f ��� m
    }x[30];

    cout<<"������� ���������� �����������: ";
    int n;
    cin>>n;

    for (int i=0;i<n;i++)
    {
        cout<<"������� �����: ";
        cin>>x[i].number;
        cout<<"������� ���: ";
        cin>>x[i].name;
        cout<<"������� �������: ";
        cin>>x[i].surname;
        cout<<"������� ��� ��������: ";
        cin>>x[i].year;
        cout<<"������� ��������: ";
        cin>>x[i].cash;
        cout<<"������� ���: ";
        cin>>x[i].gender;
        f<<x[i].number<<" "<<x[i].name<<" "<<x[i].surname<<" "<<x[i].year<<" "<<x[i].cash<<" "<<x[i].gender<<endl;
        cout<<endl;
    }

    f.close();
}
