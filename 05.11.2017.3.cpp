//������ ������ �������� ���������� � ��� ���� ������. ����������, ������� �������� ����� ����� n �����


#include <iostream>
#include <cmath>

using namespace std;

main()
{
   setlocale(LC_ALL,"Russian");
   cout<<"������� ������� ����� ������: ";
   int n,S=0,i=1;
   cin>>n;
   do{
    S=pow(2,n);
    i++;
   }while (i<n);
   cout<<S;
   }

