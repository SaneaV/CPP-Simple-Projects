//���� ������ ��������.
//� �������� ������������������ ������ n �������� �������� "!"

#include <iostream>
#include <cstring>
#include <windows.h>
#include <stdio.h>

using namespace std;

main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    cout<<"������� �����������: ";

    char s[1000];
    gets(s);
    int n;

    cout<<"������� ������: ";
    cin>>n;

    int h=strlen(s);
    int k=0;

    for (int i=0; i<h; i++)
    {
        if (k==n)
        {
            h+=1;
            for (int j=h; j>i; j--)
            {
                s[j]=s[j-1];
            }
            s[i]='!';
            k=0;
            i++;
        }
        k++;
    }

    puts(s);
}
