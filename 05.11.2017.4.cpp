//������ ���� ������ ��������� �� 300 ������. ����������, � ����� ���� �� �������� 5100 ������, 30000 ������.

#include<iostream>
using namespace std;
main()
{
    setlocale (LC_ALL,"Russian");
    int Proplil=3000, deni=1;
    do
    {
        cout<<"� "<<deni<<" ���� �������: "<<Proplil<<" ������\n";
        Proplil+=300;
        deni++;
        if (Proplil==5100) (cout<<"\n� "<<deni<<" ���� �������: 5000 ������\n��� ����� �����");
        if (Proplil==30000) (cout<<"� "<<deni<<" ���� �������: 30000 ������\n��� ������ ���������");

    }while (Proplil<=30000);
}
