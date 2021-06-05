#include <iostream>

using namespace std;

template <typename TYPE> TYPE amax(TYPE *M, int n)
{
    TYPE a=0;

    for(int i=0;i<n;i++)
    {
        if(a<M[i]) a=M[i];
    }

    return a;
}

int main()
{
    setlocale(LC_ALL,"RUS");

    int n;

    int intMassive[10];
    float floatMassive[10];
    char charMassive[10];

    cout<<"������� ���������� ���������: ";
    cin>>n;

    for(int i=0; i<n; i++)
    {
        cout<<"������� int: ";
        cin>>intMassive[i];
    }

    for(int i=0; i<n; i++)
    {
        cout<<"������� float: ";
        cin>>floatMassive[i];
    }

    for(int i=0; i<n; i++)
    {
        cout<<"������� char: ";
        cin>>charMassive[i];
    }

    cout<<"������������ ������� � int: "<<amax(intMassive, n)<<endl;
    cout<<"������������ ������� � float: "<<amax(floatMassive, n)<<endl;
    cout<<"������������ ������� � char: "<<amax(charMassive, n)<<endl;



    return 0;
}
