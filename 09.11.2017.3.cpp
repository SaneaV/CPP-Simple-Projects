//�������� N �����.
//����� ������������ �� ���

#include <iostream>

using namespace std;

main()
{
setlocale (0,"Rus");
int i,n,x=0,x1=INT_MIN;
cout<<"������� ���������� �����: ";
cin>>n;
for (i=0;i!=n;i++)
    {
    cout<<"������� �����: ";
    cin>>x;
    if (x>x1) (x1=x);
    }
    cout<<"������������ �����: "<<x1;
}
