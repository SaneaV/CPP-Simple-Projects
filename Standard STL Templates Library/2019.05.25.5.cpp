///����� ������� - ������� �����
///�� ���� ��������� ������� � �������
///�� ��� ���������� � Vector (Vector - ��� �� ����� ������������ ������)
///�� ���� ��� ��. ���� ���, ������ �������, � ����� ��� ����.

///Vector - ���������� STL (���� ������� � � list ��� deque)
///����� ������������ ������ -> #include <vector>
///��� ���� ����� � ���, ��� �� ��������� ��������� �������� ������ � �����

///� � ��� rage_based ����, ������ ������

///�� ��� ����� ��. ��� ��� ��������? ���-�� �� STL? ��� �������?

#include <iostream>
#include <windows.h>
#include <vector>
#include <conio.h>

using namespace std;

class Person
{
private:
    string name;
    int age;
public:
    virtual void setData()
    {
        cout<<"������� ��� ��������: ";
        cin>>name;
        cout<<"������� ������� ��������: ";
        cin>>age;
    }

    virtual void getData()
    {
        cout<<"���: "<<name<<endl;
        cout<<"�������: "<<age<<endl;
    }

};

///����� ��������� �� Person
class Teacher : public Person
{
private:
    string nameObject;

public:

    void setData() override
    {
        Person::setData();
        cout<<"������� �������� ��������: ";
        cin>>nameObject;
    }

    ///���� ����� ���� � virtual, ���������� override
    ///������ � �� �����������, �� ����. ������������ ����������

    void getData() override
    {
        Person::getData();
        cout<<"�������: "<<nameObject<<endl;
    }
};


class Student : public Person
{
private:
    int classSchool;

public:

    void setData() override
    {
        Person::setData();
        cout<<"������� ����� �������: ";
        cin>>classSchool;
    }


    void getData() override
    {
        Person::getData();
        cout<<"�����: "<<classSchool<<endl;
    }
};

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    ///������� ���� �� ���� � �����

    ///�������� �������, ������� �������� � ���� ����������� Person
    ///� �� ����� ������� ��������, ��� ������� ���������� n
    ///������ ������� �����

    vector<Person*> pers;
    int n = 0;
    bool Menu = true;
    bool secondMenu = true;

    while(Menu)
    {
        system("cls");
        secondMenu = true;
        cout<<"1. �������� �������"<<endl;
        cout<<"2. �������� �������"<<endl;
        cout<<"3. ������� ������ ���� �����"<<endl;
        cout<<"0. ����� �� ���������"<<endl;

        while(secondMenu)
        {
            if(_kbhit)
            {
                switch(getch())
                {
                case '1':
                {
                    system("cls");
                    pers.push_back(new Student);
                    pers[n++] -> setData();
                    secondMenu = false;
                    break;
                }
                case '2':
                {
                    system("cls");
                    pers.push_back(new Teacher);
                    pers[n++] -> setData();
                    secondMenu = false;
                    break;
                }

                case '3':
                {
                    system("cls");

                    ///auto -> ��-�� ��� template
                    ///int i = 10
                    ///auto i = 10
                    ///���� � �� ��
                    ///� ���������� �����, ������ ���-�� � ����� ����� range_based �����

                    /*vector<Person*>::iterator it;

                    for(it=pers.begin(); it!=pers.end();it++)
                    {
                        ///� ��, ��� ����� ���� �� ����� ��������, ������� � ��������
                        ///�� range_based
                        *it->getData();
                    }*/

                    ///�� �� �����, �� �� �����.

                    /*for(int i=0; i<n; i++)
                    {
                        pers[i] -> getData();
                    }*/

                    for(auto i : pers)
                    {
                        i -> getData();
                        cout<<endl;
                    }

                    system("PAUSE");
                    secondMenu = false;
                    break;
                }

                case '0':
                {
                    system("cls");
                    secondMenu = false;
                    Menu = false;
                    break;
                }
                }
            }
        }

    }

    return 0;
}
