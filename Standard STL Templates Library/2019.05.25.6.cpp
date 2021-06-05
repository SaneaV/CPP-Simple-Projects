///����� ������ ���������� ���������� � �� ������� ��, ��?

#include <iostream>
#include <vector>
#include <ctime>
#include <stdlib.h>
#include <typeinfo>

template <typename T> ///<-C�������, �� ����� template ����� �������� class, ����� �� C(����)
void FillVector(std::vector<T> &Vec)
{

    ///��� ������� ������ ������� �����(����) ������ �� ���������� (���� �� string � char* ��)
    for(int i=0; i<10; i++)
    {
        if(typeid(Vec[0]) == typeid(float))
        {
            Vec.push_back((rand()%10)*0.6);
        }

        else
            Vec.push_back(rand()%10);
    }
}

template<class T>
void showVector(const std::vector<T> &Vec)
///�onst - ������, ��� � ��� �� ���� ������
///& - ������ �� ������, ��� ������ �������
{
    for(auto i : Vec)
    {
        std::cout<<i<<" ";
    }
    std::cout<<std::endl;
}

int main()
{
    srand(time(NULL)); ///��������� ��������� �����

    std::vector<float> firstVector(10);
    std::vector<double> secondVector;

    firstVector.clear();

    ///��� ���� �������� � ������
    ///���� ����� ���� ������, �� �� �������� 0 �� n �����
    ///����� �������� ���������������.clear()
    ///�� ���� ��� ������
    ///���������������(n, ����� �����)

    FillVector(firstVector);
    FillVector(secondVector);

    showVector(firstVector);
    std::cout<<std::endl;
    showVector(secondVector);

    return 0;
}
