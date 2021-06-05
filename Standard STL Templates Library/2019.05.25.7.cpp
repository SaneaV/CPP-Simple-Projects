///����� ��, ���� ��� ���-�� ��������, ���� ����.
///��� ��� ��������?

#include <iostream>

using std::cout;
using std::endl;
using std::cin;

class Point
{
private:
    int x,y;

public:
    Point()
    {
        ///� ���� �����������, ������� ��������� ���������, �� ��� ����� ������� ������ ������
        ///����� ������� ����������� �� ���������.
        x = 0;
        y = 0;
    }

    Point(int x, int y)
    {
        this->x = x;
        this->y = y;
    }

    Point operator + (const Point &otherPoint)
    {
        Point temp; ///������ ��������� ������

        temp.x=otherPoint.x + this->x; ///�� ����� ��������� ����� ������ � ����� ����������
        temp.y=otherPoint.y + this->y; ///��� ����� �� � ������ ����� ������

        return temp; ///���������� ���
    }

    Point &operator = (const Point &otherPoint)
    {
        ///�� �����������, �� ������ ����� ������
        ///Point firstPoint
        ///Point secondPoint
        ///secondPoint = firstPoint
        ///�������� �� firstPoint � secondPoint

        this->x = otherPoint.x;
        this->y = otherPoint.y;

        return *this;

    }
    ///��������������� operator ���� (const(���� �� ������) &������������)

    void printPoint()
    {
        cout<<x<<"\t"<<y<<endl;
    }


};


int main()
{
    Point firstPoint(10, 8);
    Point secondPoint(1, 1);

    firstPoint.printPoint();
    secondPoint.printPoint();

    cout<<endl;
    cout<<"Temp point"<<endl;

    Point tempPoint;
    tempPoint = firstPoint;
    tempPoint.printPoint();

    cout<<endl;
    cout<<"Second temp point"<<endl;

    Point secondTempPoint;
    secondTempPoint = firstPoint + tempPoint;
    secondTempPoint.printPoint();


    return 0;
}
