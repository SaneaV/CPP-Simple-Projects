//������ ��� �����. � ���� ���������� ������ �����, � ������ ��������.

#include <iostream>
#include <fstream>

using namespace std;

main()
{
    setlocale (LC_ALL,"RUS");
    ofstream f("Cet.out.txt");
    ofstream g("Necet.out.txt");

    int x;
    int n;

    cout<<"������� ���������� ��������: ";
    cin>>n;

    for (int i=0;i<n;i++)
    {
        cout<<"������� �����: ";
        cin>>x;

        if (x%2==0) {f<<x;}
        else {g<<x;}
    }

    f.close();
    g.close();
}
