//���������� ������

#include <iostream>

using namespace std;

main()
{
    setlocale (LC_ALL, "Russian");
    cout<<"������� ���� ������: ";
    int x;
    cin>>x;

    cout<<"\n� ������ ���� ������ � ���: \n\n";

    switch(x)
    {
    case 1:{cout<<"����������\n�������\n���������\n\n";break;}
    case 2:{cout<<"��������\n�����\n����������\n\n";break;}
    case 3:{cout<<"�����������\n�����������\n�����\n\n";break;}
    case 4:{cout<<"�������\n�����������\n��������\n\n";break;}
    case 5:{cout<<"������������ �� ������\n\n";break;}
    case 6:{cout<<"� ��� ��������\n\n";break;}
    case 7:{cout<<"� ��� ��������\n\n";break;}
    default:cout<<"������ ��� ������ ���\n\n";
    }
}
