//�������� n ����� � ����. ����� �� ������� ��������������. �������� ����.

#include <iostream>
#include <stdio.h>

using namespace std;

main()
{
    setlocale (LC_ALL,"RUS");
    FILE *f;

    f=fopen("test1.txt","w");

    cout<<"������� ���������� �����: ";
    int n;
    cin>>n;

    float x;

    for (int i=0; i<n; i++)
    {
        cout<<"������� �����: ";
        cin>>x;
        fwrite(&x,sizeof(float),1,f);
    }

    fclose(f);
    cout<<"\n\n������� ������ �������!";

    cout<<"\n\n\n������� ������ �����!";

    f=fopen("test1.txt","r");

    float S=0,k=0;

    while (!feof(f))
    {
        if (!feof(f))
        {
            fread(&x,sizeof(float),1,f);

            if (x>0)
            {
                S+=x;
                k++;
            }
        }

    }

    cout<<endl<<endl<<"������� �������������� ������������� �����: "<<S/k<<endl;

    fclose(f);

}
