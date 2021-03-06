#include <iostream>

using namespace std;

class time
{
private:
    int hours;
    int minutes;
    int seconds;
public:
    time(int, int, int);
    void show();

    time operator +(time t1);
};

time::time(int h, int m, int s)
{
    hours=h;
    minutes=m;
    seconds=s;

    if(hours<0) hours=0;
    if(minutes<0 or minutes>=60) minutes=0;
    if(seconds<0 or seconds>=60) seconds=0;
}

void time::show()
{
    if(hours<10) cout<<"0";
    cout<<hours<<":";
    if(minutes<10) cout<<"0";
    cout<<minutes<<":";
    if(seconds<10) cout<<"0";
    cout<<seconds<<endl;
}

time time::operator +(time t1)
 {
    time tmp(hours,minutes,seconds);

        tmp.hours=t1.hours+hours;
        tmp.minutes=t1.minutes+minutes;
        tmp.seconds=t1.seconds+seconds;

    return tmp;
 }


int main()
{
    setlocale(LC_ALL,"RUS");

    int h,m,s;
    cout<<"??????? ????: ";
    cin>>h;
    cout<<"??????? ??????: ";
    cin>>m;
    cout<<"??????? ???????: ";
    cin>>s;

    cout<<endl<<endl;

    time t1(h,m,s);
    t1.show();

    cout<<"??????? ????: ";
    cin>>h;
    cout<<"??????? ??????: ";
    cin>>m;
    cout<<"??????? ???????: ";
    cin>>s;

    cout<<endl<<endl;

    time t2(h,m,s);
    t2.show();

    time t3(h,m,s);

    cout<<endl<<endl;

    t3=t1+t2;

    t3.show();
}

