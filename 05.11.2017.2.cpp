//���� ���������� �����. ����� ����� ��� ����.

#include <iostream>

using namespace std;

main()
{
   setlocale(LC_ALL,"Russian");
   cout<<"������� �����: ";
   int n,S=0,x;
   cin>>n;
   do
   {
       x=n%10;
       n/=10;
       S+=x;
   }while (n!=0);
   cout<<S;
}
