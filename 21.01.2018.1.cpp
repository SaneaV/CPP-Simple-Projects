//���������� ������� �����

#include <iostream>

using namespace std;

main()
{
    setlocale(LC_ALL,"Rus");

    cout<<"������� ���������� ���������: ";
    int n;
    cin>>n;

    int x[n];

    for (int i=0; i<n; i++)
    {
        cout<<"������� �����: ";
        cin>>x[i];
    }
    int c;
    int j;

    for(int k = n/2; k > 0; k /=2)
        {for(int i = k; i < n; i++)
        {
            c= x[i];
            for( j = i; j>=k; j-=k)
            {
                if(c < x[j-k])
                    x[j] = x[j-k];
                else
                    break;
            }
            x[j] = c;
        }
                    for (int i=0; i<n; i++)
            {
                cout<<x[i]<<" ";
            }
            cout<<endl;}

}
