#include <iostream>
//#define DEBUG
#define DEBUG2 1

using namespace std;

int main()
{
    setlocale(LC_ALL,"RUS");

#ifdef DEBUG
    cout<<"������ �����: "<<endl;

    #else
    cout<<"����� �� ��������"<<endl;
#endif // DEBUG

    for(int i=0; i<5; i++)
        cout<<i<<"\t";

#ifdef DEBUG
            cout<<endl<<"����� �����: "<<endl;
#endif // DEBUG


#ifndef DEBUG
cout<<endl<<"����� �� ��������"<<endl;
#endif // DEBUG


#if DEBUG2 == 2
cout<<endl<<"����� ��������"<<endl;
#elif DEBUG2 == 1
cout<<"����� ��������, �� �������� ������."<<endl;
#endif // DEBUG2

    return 0;
}
