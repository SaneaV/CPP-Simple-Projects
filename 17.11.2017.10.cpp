//�������� ���������, ������� � ������������������ ����� ����� ������� �� ����� ������������ �����, ������� ���� � ����������.
//��������� �������� �� ���� ����� �����, ���������� ��������� ����� ����������, ������������������ ����� ������������� ������ ����
//(���� � ������� ��������� �����, �� ������ � ������������������). ���������� ����� �� ��������� 1000.
//��������� ����� �� ������ �� ��������� 30000.

#include <iostream>

using namespace std;

main()
{
    setlocale (0,"Russian");
    cout<<"x: ";
    int x;
    cin>>x;
    cout<<"y: ";
    int y;
    cin>>y;


      if (x<10000 or y<10000){
    for (;x<=y;x++)
    {
        if (x%5==0) cout<<x<<endl;
            }
    }
    else cout<<"�� ����� ����� ������ 10000";

}
