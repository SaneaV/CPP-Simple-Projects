#include <iostream>
#include <windows.h>
#include <conio.h>

using namespace std;

class CVehicle
{
private:
    char Latitude;
    char Longitude;

    int GradLat;
    int MinLat;
    int SecLat;

    int GradLon;
    int MinLon;
    int SecLon;

    int Price;
    int Speed;
    int YearOfProduction;
public:
    virtual void Get_Data()
    {
        cout<<"����� ��� �������� ������? (� ��� �): ";
        cin>>Latitude;
        cout<<"������� (������� ������ �������) ";
        cin>>GradLat>>MinLat>>SecLat;

        cout<<"�������� ��� ��������� �������? (� ��� �): ";
        cin>>Longitude;
        cout<<"������� (������� ������ �������) ";
        cin>>GradLon>>MinLon>>SecLon;

        cout<<"������� ���� �������� ������������: ";
        cin>>Price;

        cout<<"������� �������� �������� ������������: ";
        cin>>Speed;

        cout<<"������� ��� ������� �������� ������������: ";
        cin>>YearOfProduction;
    }

    virtual void Set_Data()
    {
        cout<<"����������: "<<endl;
        cout<<GradLat<<"�"<<MinLat<<"\'"<<SecLat<<"\" "<<Latitude<<".�."<<endl;
        cout<<GradLat<<"�"<<MinLat<<"\'"<<SecLat<<"\" "<<Longitude<<".�."<<endl;
        cout<<"���������: "<<Price<<endl;
        cout<<"��������: "<<Speed<<endl;
        cout<<"��� �������: "<<YearOfProduction<<endl;
    }

    CVehicle() {};
    CVehicle(int GLt, int MLt, int SLt, int GLn, int MLn, int SLn) : GradLat(GLt), MinLat(MLt), SecLat(SLt), GradLon(GLn), MinLon(MLn), SecLon(SLn)
    {}

};

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    CVehicle C;
    C.Get_Data();
    system("cls");
    C.Set_Data();

}
