//���� While. ���� n ������������ �����, ����� �� ������� ��������������

#include<iostream>

using namespace std;

main()
{
    setlocale(LC_ALL,"Russian");
    cout<<"������� n �����: ";
    int n,i=0,x;
    float S=0;
    cin>>n;
    while (i<n)
    {
        cout<<"������� �����: ";
        cin>>x;
        S+=x;
        i++;
    }
    cout<<S/n*1.0;


}
