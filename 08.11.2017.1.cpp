//�������� ���������� �� � �� b. ������� ��� ����� � ������� � �����.

#include <iostream>

using namespace std;

main()
{
    setlocale(LC_ALL,"rus");
    cout<<"����� ����������!\n";
    int a,b;
     cin>>a;
     cin>>b;

    while (a<=b)
        {

            int c=0;
            c=a;
            int x=0;
            x=c%10;
            if (x==3){cout<<"� ������ ����� 3 � �����: "<<a;}
            a++;
        }
}
