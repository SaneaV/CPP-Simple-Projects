//���� ��� �����
//���������, ����� �� ����� ����� ������� �� ��������� ��������� ���������.

#include <iostream>

using namespace std;

int main()
{
    setlocale(LC_ALL,"RUS");

    int a,b;

    cout<<"������� ����� \"a\": ";
    cin>>a;
    cout<<"������� ����� \"b\": ";
    cin>>b;


    bool SecondCheck=true;
    bool FirstCheck=true;

    int Ra;
    int Rb;

    Ra=a;
    Rb=b;

    while(SecondCheck and FirstCheck)
    {
        SecondCheck=false;
        FirstCheck=false;

        if(a-=1)
            FirstCheck=true;
        if(b-=1)
            SecondCheck=true;
    }

    if(FirstCheck) cout<<"����� "<<Ra<<" ������"<<endl;
    if(SecondCheck) cout<<"����� "<<Rb<<" ������"<<endl;
}
