//�������� ����� � ������� � ����� do..while

#include <iostream>

using namespace std;

main()
{
   setlocale(LC_ALL,"Russian");
   cout<<"������� �����: ";
   int a=0,b,i=0,S=1;
   cin>>a;
   cout<<"������� �������: ";
   cin>>b;
   do{
    S*=a;
    i++;
   }while (i<b);
   cout<<S;
}
