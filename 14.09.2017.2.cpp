//�� �������� �� ������� ASCII �������� ��������� � ������� ����� ���������� �������� �������������
#include <iostream>

using namespace std;

int main()

{
 setlocale(LC_ALL,"Russian");
 int x;
 cout<<"������ �����: "<< endl;
 cin>> x;

 cout<<char(x+64)<<char(x+96);


}
