//������ � ������� �� C. ������ � ������ ��������� �� �����. � �������� ����.

#include <iostream>
#include <windows.h>
#include <stdio.h>

using namespace std;

main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    struct student
    {
        char name[20];
        char surname[20];
        int note;
    } Stud[20];

    FILE *f;
    f=fopen("Student.txt","w");

    cout<<"���������� ��������: ";
    int n;
    cin>>n;

    Sleep(200);
    system("cls");

    for (int i=0;i<n;i++)
    {
        cin.ignore();
        cout<<"��� �������: ";
        gets(Stud[i].name);
        cout<<"������� �������: ";
        gets(Stud[i].surname);
        cout<<"������ �������: ";
        cin>>Stud[i].note;


        fwrite(&Stud[i],sizeof(student),1,f);

        Sleep(200);
        system("cls");
    }
    fclose(f);

    f=fopen("Student.txt","r");

    int q = 0;
    while (!feof(f))
    {
        fread(&Stud[q],sizeof(student),1,f);

        if (!feof(f))
        {
            cout<<Stud[q].name<<" "<<Stud[q].surname<<" "<<Stud[q].note<<endl;
        }
    }
    n=q;
    fclose(f);
}
