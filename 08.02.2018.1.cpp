//�������� ����� � ���������� ���������

#include <iostream>
#include <stdio.h>

using namespace std;

main()
{
    setlocale (LC_ALL,"Rus");

    FILE *f;

    f=fopen("test1.txt","w");

    int n;

    cout<<"������� ���������� ��������: ";
    cin>>n;

    char ch;

    cout<<endl;

    for (int i=0;i<n;i++)
    {
        cout<<"������� ������: ";
        cin>>(ch);
        cout<<endl;
        fputc(ch,f);
    }

    fclose(f);
    cout<<"���� ������� ������!!!";
}
