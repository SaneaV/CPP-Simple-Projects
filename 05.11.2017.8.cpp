//�������� �����, ����� ������� S<100. ���������� ���������� �����.

#include <iostream>

using namespace std;

main()
{
    setlocale (LC_ALL,"Russian");
   int x,S=0,i=0;
   do
   {
       cin>>x;
       S+=x;
       ++i;
   }while (S<100);
   cout<<i;
}
