//�������� ���������, ������� �� ������� �� � �� b,
//������� �� ����� ��� �������� �����, �������������� ������ 7 .( � � b ������ �����)

#include <iostream>
using namespace std;
main()
{
    setlocale (LC_ALL,"Rus");
    cout<<"�������� a: ";
    int a,b;
    cin>>a;
    cout<<"�������� b: ";
    cin>>b;

    cout<<"for - 1"<<endl;
    cout<<"while - 2"<<endl;
    cout<<"do...while - 3"<<endl;
    int x,k=0;
    cout<<"��������: ";
    cin>>x;

    switch (x)
    {
    case 1:
    {
        for (; a<=b; a++)
        {
            k=a%10;
            if (a%2!=0 and k==7) cout<<a<<endl;
        }
        break;
    }
    case 2:
    {
        while (a<=b)
        {
            k=a%10;
            if (a%2!=0 and k==7) cout<<a<<endl;
            a++;
        }
        break;
    }
    case 3:
    {
        do
        {
            k=a%10;
            if (a%2!=0 and k==7) cout<<a<<endl;
            a++;

        }
        while (a<=b);
        break;
    }
    default:
        cout<<"�� ����� �������������� �������";
    }







}
