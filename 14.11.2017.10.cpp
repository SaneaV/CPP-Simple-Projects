//���������� ���������� �� � 10 �����.

#include <iostream>

using namespace std;

main()
{
    setlocale(0,"Rus");
    float funt=1,kg=0;
    for (;funt<=10;funt+=0.5)
    {
        kg+=0.4;
        cout<<"� "<<funt<<" ������ "<<kg<<" ���������"<<endl;

    }
}
