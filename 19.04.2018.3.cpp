//���� ����������� ����� n. ��������� ����������� ������� ������� ��� � �������� �������.

#include <iostream>

using namespace std;

void Smena(int x)
{
    cout<<x%10;
    if (x>=10)
        Smena(x/10);
}

int main()
{
    setlocale(LC_ALL,"RUS");

    int n;
    cout<<"������� \"n\": ";
    cin>>n;
    Smena(n);
}

