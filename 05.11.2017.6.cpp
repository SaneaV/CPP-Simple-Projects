//�������� N �����. ���������� ���������� �������������.

#include <iostream>

using namespace std;

int main()
{
    setlocale (LC_ALL,"Russian");
    float x,S=0;
   do
   {
       cout<<"������� �����: ";
       cin>>x;
       if (x<0) S++;
   }while(x!=0);
   cout<<S;
}
