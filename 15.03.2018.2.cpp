//�������. ���������� ���������� ��������� ���� � �����.

#include <iostream>
#include <cstring>
#include <cctype>

using namespace std;

int Small(char y[30])
{
    int k=0;
    for (int i=0;i<strlen(y);i++)
    {
        if (islower(y[i])) k++;
    }
    return k;
}

int main()
{
    setlocale (LC_ALL,"RUS");
    cout<<"������� ������: ";
    char y1[30];
    cin>>y1;
    cout<<"���������� ��������� ��������� ����: "<< Small(y1);
    return 0;
}
