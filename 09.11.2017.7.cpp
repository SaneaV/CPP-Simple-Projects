 //S=cos(x)+cos(x)...n*cos(x);

 #include <iostream>
 #include <cmath>

using namespace std;

main()
{
    setlocale(0,"Rus");
    cout<<"������� n: ";
    float n,x,S=0;
    cin>>n;
    cout<<"������� x: ";
    cin>>x;
    for (int i=1;i<=n;i++)
    {
        S+=cos(x);
    }
    cout<<"��� �����: "<<S;

    }

