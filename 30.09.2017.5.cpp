//���� �����. � ������� �������������� ������� mod � div ���������� �������� �� ��� �����������.

#include <iostream>
#include <cmath>
using namespace std;
main()
{
    setlocale (LC_ALL,"Rus");
    cout<<"n: ";
    int n,div,f=0;
    cin>>n;
    div = n/1000;//����� ����� �� �������
    f= fmod (n,100);//������� �� �������
    ((div==0)and(fmod (n,100)!=n))? cout<<"����� ����������":cout<<"����� �� ����������";
}
