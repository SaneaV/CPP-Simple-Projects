//����������, ������� �����, ����� � ������ � N ������

#include <iostream>

using namespace std;

int main()
{
int n;
setlocale(LC_ALL, "Russian");

cout<< "������� �����: ";
cin>> n;

int h,m,s;

h=24*n;
m=60*n;
s=60*n;

cout<< "� "<< n<< " ������ "<< h<< " ����� "<< m<< " ����� " <<s<< " ������ ";
}
