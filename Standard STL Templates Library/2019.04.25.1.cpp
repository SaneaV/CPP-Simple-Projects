#include <iostream>
#include <vector>

using namespace std;

int main()
{
    setlocale(LC_ALL,"RUS");

    ///�������� ������� MyVector
    vector<int> MyVector(30, 2);

    ///����������� ������� �������� �������
    MyVector.reserve(100);

    cout<<"���������� �������� � �������: "<<MyVector.size()<<endl;
    MyVector.resize(15);
    cout<<"���������� �������� � �������: "<<MyVector.size()<<endl;

    ///������� �������
    cout<<"������� �������: "<<MyVector.capacity()<<endl;


    ///���������� � ����� ��� ��������� 2,77,44
    MyVector.push_back(2);
    MyVector.push_back(77);
    MyVector.push_back(44);

    ///����� ������� �������� ����� at
    cout<<"������� ��� ������� 2: "<<MyVector.at(2)<<endl;


    ///���� try...catch, ������� ��������� �� ����� �� ������ �� �������
    cout<<"\n";
    try
    {
        cout<<"������� ��� ������� 10: "<<MyVector.at(10)<<endl;
    }
    catch(out_of_range & ex)
    {
        cout<<ex.what()<<endl<<endl;
    }

    ///����� ��������� ������� �� �����
    cout<<"�������� �������: ";
    for(int i=0; i<MyVector.size(); i++)
    {
        cout<<MyVector.at(i)<<" ";
    }

    ///�������� ���������� ��������
    cout<<endl<<endl<<"�������� ���������� ��������: ";
    MyVector.pop_back();
    cout<<endl;

    cout<<"�������� �������: ";
    for(int i=0; i<MyVector.size(); i++)
    {
        cout<<MyVector.at(i)<<" ";
    }

    ///�������� ������� �� ������� ���������
    cout<<endl<<endl<<"������ ����� ��������: "<<boolalpha<<MyVector.empty()<<endl;


    ///������� �������
    cout<<endl<<endl<<"���������� ��������� � �������: "<<MyVector.size()<<endl;
    MyVector.clear();
    cout<<"���������� ��������� � �������: "<<MyVector.size()<<endl;

    ///�������� ������� �� ������� ���������
    cout<<endl<<"������ ����� ��������: "<<boolalpha<<MyVector.empty()<<endl;

    return 0;
}
