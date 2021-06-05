#include <iostream>
#include <map>

using namespace std;

template<typename f, typename s>
void print_Map(const map<f,s> &M)
{
    cout<<endl<<"����� ��������� �� �����: "<<endl;
    for(auto i:M)
        cout<<i.first<<". "<<i.second<<endl;
    cout<<endl;
}

int main()
{
    setlocale(LC_ALL,"RUS");

    map<int, string> myMap;

    myMap.insert(pair<int, string> (1, "�������"));
    myMap.insert(make_pair(2,"�������"));
    myMap.emplace(3,"�������");

    /**------------------------------------------------------------------*/
    try
    {
        int n;
        cout<<"������� ������� ��� ������: ";
        cin>>n;

        auto it = myMap.find(n);

        if(it==myMap.end())
            throw 0;
        else
        {
            cout<<it->first<<" ";
            cout<<it->second<<endl;
        }

    }
    catch(int i)
    {
        if(i==0)
            cout<<"������� �� ������"<<endl;
    }

    /**------------------------------------------------------------------*/
    print_Map(myMap);

    /**------------------------------------------------------------------*/
    cout<<"��������� � ����� �������� ����� ���������� ��������: "<<endl;

    int n;
    cout<<"������� ������� ��� ������: ";
    cin>>n;

    cout<<myMap[n]<<endl;
    cout<<endl;

    /**------------------------------------------------------------------*/
    cout<<"��������� �������� ����� ���������� ��������(��� ���������� ������): "<<endl;

    cout<<"������� ������� ��� ������: ";
    cin>>n;

    myMap[n] = "�����";

    cout<<myMap[n]<<endl;

    /**------------------------------------------------------------------*/
    print_Map(myMap);

    /**------------------------------------------------------------------*/
    cout<<"���� try...catch: ";

    try
    {
        myMap.at(5)= "���������";
    }
    catch(const exception &x)
    {
        cout<<x.what()<<endl;
    }

    /**------------------------------------------------------------------*/
    cout<<endl<<"�������� ��������: "<<endl;

    myMap.erase(4);

    /**------------------------------------------------------------------*/
    print_Map(myMap);


    return 0;
}
