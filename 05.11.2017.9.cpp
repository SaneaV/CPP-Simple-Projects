//����� �������� �����

#include <iostream>

using namespace std;

main()
{
    setlocale (LC_ALL,"Russian");
   int n,S=0,x,i=0;
   cout<<"������� ����� �� ������: ";
   cin>>n;
   do
   {
       cin>>x;
       if (x%2!=0) S++;
       i++;
   }while (i!=n);
   cout<<S;
}
