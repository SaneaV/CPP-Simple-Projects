//������� �� ����� ���������� ������ � ������� � ��������� �������.

#include <iostream>
#include <fstream>

using namespace std;

main()
{
    setlocale (LC_ALL,"RUS");
    int x;

    ifstream f("Cet.out.txt");
    ifstream g("Necet.out.txt");

    cout<<"���������� ������ �����: ";

    while (!f.eof())
    {
        f>>x;
        cout<<x<<" ";
    }

    cout<<"\n\n���������� ������ �����: ";

    while (!g.eof())
    {
        g>>x;
        cout<<x<<" ";
    }

    f.close();
    g.close();
}

