//�������� ����� � �������, ��������� ������ ���� For

 #include <iostream>

using namespace std;

main()
{
    setlocale(0,"Rus");
    int a,b,S=1;
    cout<<"������� ���� �����: ";
    cin>>a;
    cout<<"������� �������: ";
    cin>>b;
    for (int i=1;i<=b;i++)
    {
        S*=a;
    }cout<<"���� ����� � �������: "<<S;

    }
