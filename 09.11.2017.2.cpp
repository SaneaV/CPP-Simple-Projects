//�������� ����� �� 1 �� n ������������
//������� �� ����� ����� ������������ ���� �����

#include <iostream>

using namespace std;

main()
{
    setlocale (0,"Rus");
    int n,S=0,r=1;
    cout<<"������� �����: ";
    cin>>n;
    for (int i=1;i<=n;i++)
    {
        r*=i;
        S+=r;
    }
    cout<<"����� �����: "<<S;
}
