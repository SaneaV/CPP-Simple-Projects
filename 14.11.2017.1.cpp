//������ n.
//�� 1 �� n
//S+=1*1.0/2.0*n

#include <iostream>

using namespace std;

main()
{
    setlocale (0,"Rus");
    cout<<"������� n: ";
    float n,S=0;
    cin>>n;
    for (int i=1; i<=n;i++)
    {
        S+=1*1.0/2.0*n;
    }cout<<S;
}
