#include <iostream>
#include <set>
#include <stdlib.h>
#include <ctime>

using namespace std;

template <typename T>
void printSet(const set<T> &S)
{
    cout<<"����� Set �� �����: "<<endl;
    for(auto &item:S)
    {
        cout<<item<<" ";
    }
    cout<<endl<<endl;
}

int main()
{
    setlocale(LC_ALL,"RUS");
    srand(time(0));

    /**-----------------------------------------------------------*/
    cout<<"�������� Set."<<endl<<endl;
    set<int> mySet = {8,9,11};

    /**-----------------------------------------------------------*/
    cout<<"���������� Set."<<endl<<endl;
    mySet.insert(5);
    mySet.insert(7);
    mySet.insert(3);
    mySet.insert(4);
    mySet.insert(-2);

    /**-----------------------------------------------------------*/
    cout<<"���������� Set ���������� �������(������ ���������� ��������): "<<endl;
    for(int i=0; i<20; i++)
    {
        mySet.insert(rand()%30);
    }
    cout<<endl;

    /**-----------------------------------------------------------*/
    printSet(mySet);

    /**-----------------------------------------------------------*/
    cout<<"���� try..cath: "<<endl;
    auto it = mySet.begin();
    int n;
    cout<<"������� ������� ��� ������: ";
    cin>>n;

    try
    {
        it = mySet.find(n);
        if(*it==n)
            cout<<"������� ������"<<endl;
        else
            throw 0;
    }
    catch(int x)
    {
        if(!x)
            cout<<"������� �� ������."<<endl;
    }
    cout<<endl;

    /**-----------------------------------------------------------*/
    cout<<"�������� �������� � Set."<<endl;
    cout<<"��e���� ������� ��� ��������: ";
    cin>>n;

    try
    {
        if((mySet.erase(n))==true)
        {
            cout<<"������� �����"<<endl;
            printSet(mySet);
        }
        else
            throw 0;
    }
    catch(int x)
    {
        if(!x)
            cout<<"������� �� ������ � Set."<<endl;
    }
    cout<<endl;



    return 0;
}
