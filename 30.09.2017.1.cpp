//��� ������, ����������, �������� �� �� ������

#include <iostream>

using namespace std;

int main ()
{
setlocale (LC_ALL, "Russian");

cout<<"������� ������, �����, �����: ";
char c;
cin>> c;

bool y;
y = isdigit(c);


cout<<"�� ����� �����: "<< boolalpha<<(y);
}
