//������� ����, � ������� ����� �������� ����� �� 1 �� 9 � ����� �� a �� j �� 10 � ������.

#include <iostream>
#include <fstream>

using namespace std;

main()
{
    setlocale(LC_ALL,"RUS");

    ofstream f("Vtoraia.txt");

    int n=0;
    int x=0;
    char ch='a';

    while (ch!='k')
    {
        while (n!=11)
        {
            f<<x<<" ";
            n++;
        }
        x++;
        f<<"\n";
        n=0;
        while (n!=11)
        {
            f<<ch<<" ";
            n++;
        }
        ch++;
        f<<"\n";
        n=0;
    }
}
