//��� ��������� ���� F.txt, ������ ������ �������� �������� ��� ����� ����� � ��� ������������.
//�������� ���������, ������� ������� �� ����� ����� ����� ����� � ����� ������������ � ������ ������.�


#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    setlocale (LC_ALL,"RUS");

    ofstream f("F.txt");

    cout<<"��������� ����� � ������� = ";
    int n;
    cin>>n;

    int x;
    float z;

    for (int i=0; i<n; i++)
    {
        cout<<"������� ����� �����: ";
        cin>>x;
        f<<x<<" ";
        cout<<"������� ����� �����: ";
        cin>>x;
        f<<x<<" ";
        cout<<"������� ������������ �����: ";
        cin>>z;
        f<<z<<" ";
        cout<<"������� ������������ �����: ";
        cin>>z;
        f<<z<<" ";
        cout<<"������� ������������ �����: ";
        cin>>z;
        f<<z<<" "<<endl;

    }
    f.close();


    ifstream g("F.txt");

    int a,b;
    float c,d,e;
    int Sum1=0;
    float Sum2=0;
    int j=0;

    for (int i=0; i<n; i++)
    {
        Sum1=0;
        Sum2=0;

        g>>a>>b>>c>>d>>e;
        Sum1=a+b;
        Sum2=c+d+e;
        cout<<"� ������ "<<++j<<", ����� ����� �����: "<<Sum1<<", ����� ������������ �����: "<<Sum2<<endl;

    }
    g.close();
}

